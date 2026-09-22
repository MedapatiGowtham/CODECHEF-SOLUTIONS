# OPJA122

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Method Overriding Requirements in Java

Which of the following is NOT a requirement for method overriding in Java?

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:26:27.653Z  

```cpp
class Vehicle {
    public void accelerate() {
        System.out.println("The vehicle accelerates.");
    }
}

class Car extends Vehicle {
    private int speed;

    public Car(int initialSpeed) {
        this.speed = initialSpeed;
    }

    @Override
    public void accelerate() {
        speed += 10;
        System.out.println("The car accelerates. Current speed: " + speed + " km/h");
    }
}

class Bicycle extends Vehicle {
    private int speed;

    public Bicycle(int initialSpeed) {
        this.speed = initialSpeed;
    }

    @Override
    public void accelerate() {
        speed += 5;
        System.out.println("The bicycle accelerates. Current speed: " + speed + " km/h");
    }
}

class Codechef {
    public static void main(String[] args) {
        Car car = new Car(20); // Initial speed of the car is 20 km/h
        Bicycle bicycle = new Bicycle(15); // Initial speed of the bicycle is 15 km/h

        car.accelerate(); // Accelerate the car
        bicycle.accelerate(); // Accelerate the bicycle
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA122)