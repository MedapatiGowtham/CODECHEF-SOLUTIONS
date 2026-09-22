# OPJA123

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Vehicle Rental

Create a program to manage a vehicle rental service. Implement a class hierarchy with a base class Vehicle and a derived class Car. Each class should have the following properties:

 **Vehicle:** 

Properties: `model` (string) & `rentalRate` (integer)

Methods: `int calculateRentalCost(int days)`

 **Rental Cost for a Vehicle:** 

```
rental cost = number of rental days * rental rate

```

 **Car (Derived from Vehicle):** 

Additional Property: `seats` (integer)

Override the `int calculateRentalCost(int days)` method to calculate and return the rental cost for a car based on the number of seats, the number of rental days, and the rental rate. The rental cost should be computed as follows:

 **Rental Cost for a Car:** 

```
rental cost = number of seats  *number of rental days*  rental rate

```

Your task is to accept input for the model, rental rate, seats, and the number of rental days, and create a `Car` object. Afterward, invoke the `calculateRentalCost()` method on the car object to calculate the rental cost and display it.

### Input Format
- First line contain one string representing model.
- Second line contain three integers representing rental rate, seats and number of rental days.
### Output Format

Display the calculated rental cost for the car.

### Sample 1:
Input
Output

```
Beat
20 5 10
```

```
1000

```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:26:39.433Z  

```java
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

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA123)