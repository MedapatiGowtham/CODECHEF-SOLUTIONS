# OPJA101

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Coding Problem

In this problem, we'll create a simple `Rectangle` class and a method to calculate its area by passing an instance of the `Rectangle` class as a parameter:

In this example:

- We have a Rectangle class with length and width attributes and a constructor to initialize them.
- In the Main class, we create a Rectangle object with specific dimensions (5 and 3).
- We define a method calculateArea that takes a Rectangle object as a parameter. Inside this method, we use the getLength and getWidth methods of the Rectangle object to retrieve its dimensions and calculate the area.
- Finally, we call the calculateArea method, passing the rectangle object as a parameter, and print the calculated area.

This example demonstrates how to pass an object as a parameter and perform operations on it within a method.

### Task

Complete the `calculateArea` method to calculate its area by passing an instance of the `Rectangle` class as a parameter.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:21:44.124Z  

```java
class Rectangle {
    private int length;
    private int width;

    // Constructor
    public Rectangle(int length, int width) {
        this.length = length;
        this.width = width;
    }

    // Getter methods
    public int getLength() {
        return length;
    }

    public int getWidth() {
        return width;
    }
}

class Codechef {
    // Method to calculate the area of a Rectangle object
    public static int calculateArea(Rectangle rect) {
        int length = rect.getLength();
        int width = rect.getWidth();
        return length * width;
    }
    
    public static void main(String[] args) {
        // Create a Rectangle object
        Rectangle rectangle = new Rectangle(5, 3);

        // Calculate and print the area of the rectangle
        int area = calculateArea(rectangle);
        System.out.println("Area of the rectangle: " + area);
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA101)