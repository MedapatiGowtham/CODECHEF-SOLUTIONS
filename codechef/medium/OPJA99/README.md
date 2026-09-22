# OPJA99

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:20:58.519Z  

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

[View on CodeChef](https://www.codechef.com/problems/OPJA99)