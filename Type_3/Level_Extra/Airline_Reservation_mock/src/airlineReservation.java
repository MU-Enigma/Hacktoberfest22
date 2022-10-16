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
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.lang.reflect.Type;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.Scanner;
import org.json.*;

/**
 * airlineReservation
 */

public class airlineReservation {

  private static void run() {
    preview p = new preview();
    p.setParams();
    p.getFlightInfo();
  }

  public static void main(String[] args) {
    // close ar

    System.out.println(
      "Welcome to the airline reservation system!\nEnter 'R' to reserve a seat, 'C' to cancel a seat, 'L' to see passenger list or logs on a particular date, or 'Q' to quit."
    );
    Scanner sc = new Scanner(System.in); // Scanner object to read user input
    String input = sc.nextLine(); // Read user input

    // Implementing switch statement to determine what to do next.

    switch (input.toUpperCase()) {
      case "R":
        // System.out.println("Retrieving live flight information...");
        // simulating a delay
        try {
          String r = "";
          while (r.length() < 3) {
            Thread.sleep(500);
            r = r + ".";
            System.out.print("\r" + "Retrieving live flight information " + r);
          }
          System.out.println(
            "\r" + "Retrieving live flight information ... done"
          );
        } catch (InterruptedException e) {
          e.printStackTrace();
        }

        run();

        // get preferred date from user
        // System.out.println("Enter preferred date (DD-MM-YYYY):");

        System.out.println("Reserving a seat...");
        reservation r = new reservation();
        r.run();
        break;
      case "C":
        System.out.println("Cancelling a seat...");
        break;
      case "L":
        System.out.println("Viewing passenger list...");
        break;
      case "Q":
        System.out.println("Quitting...");
        break;
      default:
        break;
    }
    // Close sc
    sc.close();
  }
}
