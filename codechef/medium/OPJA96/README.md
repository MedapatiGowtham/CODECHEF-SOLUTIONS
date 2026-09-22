# OPJA96

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Car and Wheel Aggregation

You are tasked with creating a Java program to model a Car class that represents a car with four wheels. Each Car object should aggregate four Wheel objects, each having a specific type (e.g., "Front Left," "Rear Right").

Define a Wheel class with attribute type and Printtype method to print type of wheel.

Define a Car class with the following attributes:

- make: A string representing the maker of the car
- model: A string representing the model of the car
- Four Wheel objects representing the car's wheels: frontLeftWheel, frontRightWheel, rearLeftWheel, and rearRightWheel.
- Implement a member function printInfo in the Car class that displays the car's make, model, and the type of each wheel.
### Task

Given maker of car is "Toyota" and model is "Camry". Complete the code to display the car's information and the types of its wheels.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:20:57.238Z  

```java
class Wheel {
    String type;

    Wheel(String type) {
        this.type = type;
    }

    void printType() {
        System.out.println("Wheel Type: " + type);
    }
}

class Car {
    String make;
    String model;
    Wheel frontLeftWheel;
    Wheel frontRightWheel;
    Wheel rearLeftWheel;
    Wheel rearRightWheel;

    Car(String make, String model) {
        this.make = make;
        this.model = model;
        frontLeftWheel = new Wheel("Front Left");
        frontRightWheel = new Wheel("Front Right");
        rearLeftWheel = new Wheel("Rear Left");
        rearRightWheel = new Wheel("Rear Right");
    }

    void printInfo() {
        System.out.println("Make: " + make + ", Model: " + model);
        frontLeftWheel.printType();
        frontRightWheel.printType();
        rearLeftWheel.printType();
        rearRightWheel.printType();
    }
}

class Codechef {
    public static void main(String[] args) {
        Car myCar = new Car("Toyota", "Camry");
        myCar.printInfo();
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA96)