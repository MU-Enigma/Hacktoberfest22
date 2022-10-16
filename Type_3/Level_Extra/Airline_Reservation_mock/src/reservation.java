/**
 * Building an airline reservation system.
 * Structure:
 * - reservation class - holds reservation implementation
 * - cancellation class - holds cancellation implementation
 * - logger class - is used to log events: reservation, cancellation, etc.
 * - airlineReservation(main) class - holds the main method. Creates the reservation and cancellation objects and logs the events in a JSON file.
 */

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import org.json.*;

/**
 * reservation class
 */

public class reservation {

  public reservation() {}

  // Plane ticket purchase
  private String prefix;
  private String first_name;
  private String middle_name;
  private String last_name;
  private String suffix;
  private String email;
  // Flight information
  private String boarding;
  private String destination;
  private String flight_name;
  private String flight_number;
  private String departure_date;
  private String departure_time;
  private String departure_airport;
  private String arrival_time;
  private String arrival_airport;
  private String class_type;
  private String seat;
  // Fare information
  private String fare_base;
  private String fare_surcharge;
  private String fare_tax;
  private String fare_fuel_and_insurance;
  private String fare_passenger_service_fee;
  private String fare_ticketing_fee;
  private String fare_total;

  // private Ticket ticket; // This ticket object will be used to book a reservation and store the ticket information in a JSON file.

  public void setProfile() {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter your prefix: (press enter if none) ");
    this.prefix = sc.nextLine();
    System.out.println("Enter your first name: ");
    this.first_name = sc.nextLine();
    System.out.println("Enter your middle name: ");
    this.middle_name = sc.nextLine();
    System.out.println("Enter your last name: ");
    this.last_name = sc.nextLine();
    System.out.println("Enter your suffix: (press enter if none) ");
    this.suffix = sc.nextLine();
    System.out.println("Enter your email: ");
    this.email = sc.nextLine();
    sc.close();
    // Store the profile information in a csv file.
    System.out.println("Hello " + this.first_name + " " + this.last_name + "!");
    try {
      FileWriter fw = new FileWriter("passengerInfo.csv");
      fw.write(
        this.prefix +
        "," +
        this.first_name +
        "," +
        this.middle_name +
        "," +
        this.last_name +
        "," +
        this.suffix +
        "," +
        this.email +
        this.flight_number +
        "\n"
      );
      fw.close();
    } catch (IOException e) {
      e.printStackTrace();
    }
  }

  // public void setBookingDate(String booking_date) {
  //   this.booking_date = booking_date;
  // }

  public void setFlightInfo(
    String boarding,
    String destination,
    String flight_name,
    String flight_number,
    String departure_date,
    String departure_time,
    String departure_airport,
    String arrival_time,
    String arrival_airport
  ) {
    this.boarding = boarding;
    this.destination = destination;
    this.flight_name = flight_name;
    this.flight_number = flight_number;
    this.departure_date = departure_date;
    this.departure_time = departure_time;
    this.departure_airport = departure_airport;
    this.arrival_time = arrival_time;
    this.arrival_airport = arrival_airport;
    // Ask customer for class_type (economy, premium economy, business, first class). Generate random array of strings representing the seats available for the class.
    Scanner sc = new Scanner(System.in);
    System.out.println(
      "Enter your class: (Economy, Premium Economy, Business, First Class) "
    );
    String temp = sc.nextLine().toLowerCase();
    while (
      !temp.equals("economy") &&
      !temp.equals("premium economy") &&
      !temp.equals("business") &&
      !temp.equals("first class")
    ) {
      System.out.println(
        "Invalid class. Please enter a valid class: (Economy, Premium Economy, Business, First Class) "
      );
      temp = sc.nextLine().toLowerCase();
    }
    this.class_type = temp;
    // Generate random array of strings representing the seats available for the class.
    List<String> seats = new ArrayList<String>();
    if (this.class_type.equals("economy")) {
      seats.add("1A");
      seats.add("1H");
      seats.add("2D");
      seats.add("2E");
    } else if (this.class_type.equals("premium economy")) {
      seats.add("2G");
      seats.add("2H");
      seats.add("3D");
      seats.add("3E");
    } else if (this.class_type.equals("business")) {
      seats.add("4A");
      seats.add("4B");
      seats.add("3G");
      seats.add("3J");
      seats.add("4E");
    } else if (this.class_type.equals("first class")) {
      seats.add("5A");
      seats.add("5D");
    }
    // Print the available seats for the class.
    System.out.println("Available seats for " + this.class_type + ": ");
    for (String seat : seats) {
      System.out.println(seat);
    }

    // Ask customer for seat.
    System.out.println("Enter your seat: ");
    temp = sc.nextLine().toUpperCase();
    while (!seats.contains(temp)) {
      System.out.println(
        "Invalid seat/ Seat already booked. Please enter a valid seat: "
      );
      temp = sc.nextLine().toUpperCase();
    }
    this.seat = temp;
    // Print the flight information.
    System.out.println("Flight details chosen: ");
    System.out.println("\n\tBoarding: " + this.boarding);
    System.out.println("\n\tDestination: " + this.destination);
    System.out.println("\n\tFlight name: " + this.flight_name);
    System.out.println("\n\tFlight number: " + this.flight_number);
    System.out.println("\n\tDeparture date: " + this.departure_date);

    System.out.println("Proceed to payment? (y/n) ");
    temp = sc.nextLine().toLowerCase();
    while (!temp.equals("y") && !temp.equals("n")) {
      System.out.println("Invalid input. Please enter a valid input: (y/n) ");
      temp = sc.nextLine().toLowerCase();
    }
    if (temp.equals("y")) {
      sc.close();
      setFareInfo();
    } else {
      System.out.println(
        "What would you like to change?\n\t1. Class and seat\n\t2. Flight"
      );
      temp = sc.nextLine().toLowerCase();
      while (!temp.equals("1") && !temp.equals("2")) {
        System.out.println("Invalid input. Please enter a valid input: (1/2) ");
        temp = sc.nextLine().toLowerCase();
      }
      if (temp.equals("1")) {
        sc.close();
        setFlightInfo(
          boarding,
          destination,
          flight_name,
          flight_number,
          departure_date,
          departure_time,
          departure_airport,
          arrival_time,
          arrival_airport
        );
      } else {
        sc.close();
        run();
      }
    }
  }

  public void setFareInfo(
    String class_type,
    String seat,
    String flight
  ) {
    if (this.class_type.equals("economy")) {
      // Total fare will be $550.
      this.fare_base = 200;
      this.fare_tax = 25;
      this.fare_surcharge = 100;
      this.fare_fuel_and_insurance = 125;
      this.fare_passenger_service_fee = 50;
      this.fare_ticketing_fee = 50;
      this.fare_total =
        this.fare_base +
        this.fare_tax +
        this.fare_surcharge +
        this.fare_fuel_and_insurance +
        this.fare_passenger_service_fee +
        this.fare_ticketing_fee;
    } else if (this.class_type.equals("premium economy")) {
      // Total fare will be $700
      this.fare_base = 250;
      this.fare_tax = 75;
      this.fare_surcharge = 100;
      this.fare_fuel_and_insurance = 125;
      this.fare_passenger_service_fee = 100;
      this.fare_ticketing_fee = 50;
      this.fare_total =
        this.fare_base +
        this.fare_tax +
        this.fare_surcharge +
        this.fare_fuel_and_insurance +
        this.fare_passenger_service_fee +
        this.fare_ticketing_fee;
    } else if (this.class_type.equals("business")) {
      // Total fare will be $900
      this.fare_base = 350;
      this.fare_tax = 100;
      this.fare_surcharge = 100;
      this.fare_fuel_and_insurance = 125;
      this.fare_passenger_service_fee = 175;
      this.fare_ticketing_fee = 50;
      this.fare_total =
        this.fare_base +
        this.fare_tax +
        this.fare_surcharge +
        this.fare_fuel_and_insurance +
        this.fare_passenger_service_fee +
        this.fare_ticketing_fee;
    } else if (this.class_type.equals("first class")) {
      // Total fare will be $1100
      this.fare_base = 450;
      this.fare_tax = 125;
      this.fare_surcharge = 100;
      this.fare_fuel_and_insurance = 125;
      this.fare_passenger_service_fee = 250;
      this.fare_ticketing_fee = 50;
      this.fare_total =
        this.fare_base +
        this.fare_tax +
        this.fare_surcharge +
        this.fare_fuel_and_insurance +
        this.fare_passenger_service_fee +
        this.fare_ticketing_fee;
    }
    // Print the fare information.
    System.out.println("\nClass: " + this.class_type);
    System.out.println("\nSeat: " + this.seat);
    System.out.println("\nFlight: " + this.flight);
    System.out.println("\n\tFare base: $" + this.fare_base);
    System.out.println("\n\tFare tax: $" + this.fare_tax);
    System.out.println("\n\tFare surcharge: $" + this.fare_surcharge);
    System.out.println("\n\tFare fuel and insurance: $" + this.fare_fuel_and_insurance);
    System.out.println("\n\tFare passenger service fee: $" + this.fare_passenger_service_fee);
    System.out.println("\n\tFare ticketing fee: $" + this.fare_ticketing_fee);
    System.out.println("\n\tFare total: $" + this.fare_total);
  }

  // public void testFunction() {
  //     System.out.println("\n\n####### TESTING #######\n\n");
  // }
  public void run() {
    System.out.println(
      "Hello!\nWelcome to the airline reservation center.\nWe'll start with some basic questions then move to the reservation process.\n"
    );

    System.out.println("Press enter to continue");
    try {
      System.in.read();
    } catch (Exception e) {}

    System.out.println("Fetching iata codes for boarding location...");

    System.out.println("\n\nHere are the iata codes for boarding locations:\n");
    try {
      Thread.sleep(500);
    } catch (InterruptedException e) {
      e.printStackTrace();
    }
    File file = new File("iata.csv"); // format: municipality, iata code, Airport name
    BufferedReader br = null;
    String line = "";
    String cvsSplitBy = ",";
    List<String> iata_codes = new ArrayList<String>();
    List<String> airport_names = new ArrayList<String>();
    List<String> municipality = new ArrayList<String>();
    try {
      br = new BufferedReader(new FileReader(file));
      while ((line = br.readLine()) != null) {
        // use comma as separator
        String[] country = line.split(cvsSplitBy);
        System.out.println(
          country[0] + " - " + country[1] + " - " + country[2]
        );
        iata_codes.add(country[1]);
        airport_names.add(country[2]);
        municipality.add(country[0]);
      }
      System.out.println("\nFile saved in iata.csv\n");
    } catch (FileNotFoundException e) {
      e.printStackTrace();
    } catch (IOException e) {
      e.printStackTrace();
    } finally {
      if (br != null) {
        try {
          br.close();
        } catch (IOException e) {
          e.printStackTrace();
        }
      }
    }
    Scanner sc = new Scanner(System.in);
    System.out.println("Where are you boarding from?\n");
    String boarding = sc.nextLine();
    boarding = boarding.toLowerCase();
    System.out.println("\n\nHere are the iata codes for boarding location:\n");
    for (int i = 0; i < municipality.size(); i++) {
      if (municipality.get(i).equals(boarding)) {
        System.out.println(
          municipality.get(i) +
          " - " +
          iata_codes.get(i) +
          " - " +
          airport_names.get(i)
        );
      }
    }
    System.out.println(
      "\n\nPlease enter the iata code for your boarding location: "
    );
    String boarding_iata = sc.nextLine().toUpperCase();
    System.out.println("\n\nWhere are you going?\n");
    String destination = sc.nextLine();
    destination = destination.toLowerCase();
    while (destination.equals(boarding)) {
      System.out.println(
        "\n\nYou can't go to the same location you are boarding from!\n"
      );
      System.out.println("Where are you going?\n");
      destination = sc.nextLine();
      destination = destination.toLowerCase();
    }
    System.out.println(
      "\n\nHere are the iata codes for destination location:\n"
    );
    for (int i = 0; i < municipality.size(); i++) {
      if (municipality.get(i).equals(destination)) {
        System.out.println(
          municipality.get(i) +
          " - " +
          iata_codes.get(i) +
          " - " +
          airport_names.get(i)
        );
      }
    }
    System.out.println(
      "\n\nPlease enter the iata code for your destination location: "
    );
    String destination_iata = sc.nextLine().toUpperCase();
    System.out.println(
      "\n\nChecking if flights are available for your trip..."
    );
    // Check flights.json for flights that match the boarding and destination iata codes
    File file2 = new File("flights.json");
    // store the entire json file in a string
    String response = "";
    try {
      BufferedReader br2 = new BufferedReader(new FileReader(file2));
      String line2 = "";
      while ((line2 = br2.readLine()) != null) {
        response += line2;
      }
      br2.close();
    } catch (IOException e) {
      e.printStackTrace();
    }
    // parse the json file into a json object
    JSONObject jsonObject = new JSONObject(response);
    JSONArray data = jsonObject.getJSONArray("data");
    boolean found = false;
    for (int i = 0; i < data.length(); i++) {
      JSONObject flight = data.getJSONObject(i);
      String boarding_json = flight
        .getJSONObject("departure")
        .getString("iata");
      String destination_json = flight
        .getJSONObject("arrival")
        .getString("iata");
      // if the boarding and destination iata codes match, print the flight info

      if (
        boarding_json.equals(boarding_iata) &&
        destination_json.equals(destination_iata)
      ) {
        System.out.println("\n\nFlight found!\n");
        try {
          System.out.println("\nFlight " + (i + 1) + ":");
          System.out.println(
            "\n\tFlight date: " + flight.getString("flight_date")
          );
          System.out.println(
            "\n\tFlight number: " +
            flight.getJSONObject("flight").getString("number")
          );
          System.out.println(
            "\n\tFlight name: " +
            flight.getJSONObject("airline").getString("name")
          );
          System.out.println(
            "\n\tFlight departure: " +
            flight.getJSONObject("departure").getString("iata")
          );
          System.out.println(
            "\n\tDeparture Airport: " +
            flight.getJSONObject("departure").getString("airport")
          );
          System.out.println(
            "\n\tDeparture time (scheduled): " +
            flight.getJSONObject("departure").getString("scheduled")
          );
          System.out.println(
            "\n\tDeparture time (estimated): " +
            flight.getJSONObject("departure").getString("estimated")
          );
          System.out.println(
            "\n\tFlight arrival: " +
            flight.getJSONObject("arrival").getString("iata")
          );
          System.out.println(
            "\n\tArrival Airport: " +
            flight.getJSONObject("arrival").getString("airport")
          );
          System.out.println(
            "\n\tArrival time (scheduled): " +
            flight.getJSONObject("arrival").getString("scheduled")
          );
          System.out.println(
            "\n\tArrival time (estimated): " +
            flight.getJSONObject("arrival").getString("estimated")
          );

          System.out.println("Proceed with booking? (y/n)");
          String proceed = sc.nextLine();
          while (!proceed.equals("y") && !proceed.equals("n")) {
            System.out.println("\n\nPlease enter either 'y' or 'n': ");
            proceed = sc.nextLine();
          }
          if (proceed.equals("y")) {
            System.out.println("\n\nWonderful! Lets create your profile...\n");
            found = true;
            String flight_number = flight
              .getJSONObject("flight")
              .getString("number");
            String flight_name = flight
              .getJSONObject("airline")
              .getString("name");
            String flight_date = flight.getString("flight_date");
            String boarding_time = flight
              .getJSONObject("departure")
              .getString("scheduled");
            String boarding_airport = flight
              .getJSONObject("departure")
              .getString("airport");
            String arrival_time = flight
              .getJSONObject("arrival")
              .getString("scheduled");
            String arrival_airport = flight
              .getJSONObject("arrival")
              .getString("airport");
            setFlightInfo(
              boarding_iata,
              destination_iata,
              flight_name,
              flight_number,
              flight_date,
              boarding_time,
              boarding_airport,
              arrival_time,
              arrival_airport
            );
            setProfile();
            break;
          } else if (proceed.equals("n")) {
            System.out.println(
              "\n\nBooking cancelled. Searching for more flights...\n"
            );
            found = false; // Client is not looking for this flight
          }
        } catch (Exception e) {
          System.out.println("\n\tNo flight information available.");
        }
      }
    }
    if (!found) {
      System.out.println(
        "\n\nNo flights found! Too bad.\nWould you like to try again? (y/n)"
      );
      String answer = sc.nextLine();
      while (!answer.equals("y") && !answer.equals("n")) {
        System.out.println("\n\nPlease enter either 'y' or 'n': ");
        answer = sc.nextLine();
      }
      if (answer.equals("y")) {
        run();
      } else if (answer.equals("n")) {
        System.out.println("\n\nThanks for using the Flight Search App!");
        System.exit(0);
      }
    }
    System.out.println("\n\nThank you for using the Flight Search App!\n");
  }
}
