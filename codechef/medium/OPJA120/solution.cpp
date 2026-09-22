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
