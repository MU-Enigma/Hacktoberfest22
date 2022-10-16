import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.lang.reflect.Type;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;
import org.json.*;

/**
 * preview
 */

public class preview {
  private static final String USER_AGENT = "Mozilla/5.0";

  private static final String GET_URL =
    "http://api.aviationstack.com/v1/flights";

  private static String GET_PARAMS;

  public void setParams() {
    try {
      File file = new File("./accesscodes");
      BufferedReader br = new BufferedReader(new FileReader(file));
      String line = br.readLine();
      String accessCode = line;
      GET_PARAMS = "access_key=" + accessCode;
      br.close();
    } catch (IOException e) {
      System.out.println("Error: " + e.getMessage());
    }
  }

  /**
   * getResponse
   * This method is used to get the response from the API.
   */

  public static String getResponse(String url, String params)
    throws IOException {
    // The following method either returns the response from the API or throws an exception.
    url = url + "?" + params;
    StringBuffer response = new StringBuffer();
    URL obj = new URL(url);
    HttpURLConnection con = (HttpURLConnection) obj.openConnection();
    con.setRequestMethod("GET");
    con.setRequestProperty("User-Agent", USER_AGENT);
    int responseCode = con.getResponseCode();
    System.out.println("\nResponse Code : " + responseCode);
    BufferedReader in = new BufferedReader(
      new InputStreamReader(con.getInputStream())
    );
    String inputLine;
    while ((inputLine = in.readLine()) != null) {
      response.append(inputLine);
    }
    in.close();

    return response.toString();
  }

  /**
   * getFlightInfo
   */
  public void getFlightInfo() {
    String response = null;
    try {
      response = getResponse(GET_URL, GET_PARAMS);
      // store the response in a file
      File file = new File("./flights.json");
      FileWriter fw = new FileWriter(file);
      fw.write(response);
      fw.close();
    } catch (IOException e) {
      e.printStackTrace();
    }
    // Convert the response to a JSON object
    JSONObject jsonObject = new JSONObject(response);
    // Print all the components of the JSON object
    System.out.println("\nFlight Information:");
    JSONArray data = jsonObject.getJSONArray("data");
    List <String> flightInfo = new ArrayList<String>();
    for (int i = 0; i < data.length(); i++) {
      JSONObject flight = data.getJSONObject(i);
      try {
        // append the flight information to flightInfo
        // flightInfo.add(flight.getString("flight_number"));
        flightInfo.add("\nFlight " + (i + 1) + ":");
        flightInfo.add(
          "\n\tFlight date: " + flight.getString("flight_date")
          );
          flightInfo.add(
            "\n\tFlight number: " +
            flight.getJSONObject("flight").getString("number")
        );
        flightInfo.add(
          "\n\tFlight name: " +
          flight.getJSONObject("airline").getString("name")
        );
        flightInfo.add(
          "\n\tFlight departure: " +
          flight.getJSONObject("departure").getString("iata")
          );
          flightInfo.add(
            "\n\tDeparture Airport: " +
            flight.getJSONObject("departure").getString("airport")
            );
            flightInfo.add(
              "\n\tDeparture time (scheduled): " +
          flight.getJSONObject("departure").getString("scheduled")
        );
        flightInfo.add(
          "\n\tDeparture time (estimated): " +
          flight.getJSONObject("departure").getString("estimated")
          );
          flightInfo.add(
            "\n\tFlight arrival: " +
            flight.getJSONObject("arrival").getString("iata")
            );
            flightInfo.add(
              "\n\tArrival Airport: " +
              flight.getJSONObject("arrival").getString("airport")
              );
              flightInfo.add(
                "\n\tArrival time (scheduled): " +
                flight.getJSONObject("arrival").getString("scheduled")
                );
        flightInfo.add(
          "\n\tArrival time (estimated): " +
          flight.getJSONObject("arrival").getString("estimated")
          );
        } catch (Exception e) {
          System.out.println("\n\tNo flight information available.");
        }
      }
      // init and clear any existing data in the file
      try {
        FileWriter flights = new FileWriter("./flight_info.txt", false);
        flights.write("");
        flights.close();
      } catch (IOException e) {
        e.printStackTrace();
      }
      // write the flight information to the file
      for (String info : flightInfo) {
        try {
          FileWriter flights = new FileWriter("./flight_info.txt", true);
          flights.write(info + '\n');
          flights.close();
        } catch (IOException e) {
          e.printStackTrace();
        }
    }
    System.out.println("\nFlight information written to file: flight_info.txt for manual inspection");
    System.out.println("Press enter to continue");
    try{System.in.read();}
        catch(Exception e){}
  }
}