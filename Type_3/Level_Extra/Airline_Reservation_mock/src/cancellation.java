/**
 * Building an airline reservation system.
 * Structure:
 * - reservation class - holds reservation implementation
 * - cancellation class - holds cancellation implementation
 * - logger class - is used to log events: reservation, cancellation, etc.
 * - airlineReservation(main) class - holds the main method. Creates the reservation and cancellation objects and logs the events in a JSON file. 
 */

import java.util.Scanner;

/**
 * cancellation class
 */

public class cancellation {
    public cancellation() {}
    private String username;
    private Ticket ticket; // Ticket object that is used to cancel a reservation and empty the reservation object to be rebooked later.
}