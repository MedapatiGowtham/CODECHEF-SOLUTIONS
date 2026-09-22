import java.util.Scanner;

class Vehicle {
    public String model;
    public int rentalRate;

    public Vehicle(String model, int rentalRate) {
        this.model = model;
        this.rentalRate = rentalRate;
    }

    public int calculateRentalCost(int days) {
        // Default calculation based on rental rate
        return days * rentalRate;
    }
}

class Car extends Vehicle {
    public int seats;

    public Car(String model, int rentalRate, int seats) {
        super(model, rentalRate);
        this.seats = seats;
    }

    @Override
    public int calculateRentalCost(int days) {
        // Override the method to calculate cost based on seats, days, and rental rate
        return seats * days * rentalRate;
    }
}

class Codechef {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read input
        String model = scanner.nextLine();
        int rentalRate = scanner.nextInt();
        int seats = scanner.nextInt();
        int days = scanner.nextInt();

        // Create a Car object
        Car car = new Car(model, rentalRate, seats);

        // Calculate and display the rental cost
        int rentalCost = car.calculateRentalCost(days);
        System.out.println(rentalCost);

        scanner.close();
    }
}
