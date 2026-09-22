# OPJA116

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Geometric Shapes Calculation

You are tasked with developing a Java program to model different geometric shapes. Here are the class definitions -

- Shape: Methods: int calculateArea(): This method calculates and returns the area of the shape. int calculatePerimeter(): This method calculates and returns the perimeter of the shape.
- Rectangle (extends Shape): Properties: int length: Represents the length of the rectangle. int width: Represents the width of the rectangle. Methods: Override calculateArea() to calculate the area of a rectangle (length  *width). Override calculatePerimeter() to calculate the perimeter of a rectangle (2*  (length + width)).
- Square (extends Shape): Properties: int side: Represents the side length of the square. Methods: Override calculateArea() to calculate the area of a square (side  *side). Override calculatePerimeter() to calculate the perimeter of a square (4*  side).
### Task

Your goal is to complete the `calculateArea()` and `calculatePerimeter()` methods in the `Rectangle` and `Square` classes so that the calculations are accurate.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:25:19.486Z  

```java
class Shape {
    public int calculateArea() {
        return 0;
    }

    public int calculatePerimeter() {
        return 0;
    }
}

class Rectangle extends Shape {
    private int length;
    private int width;

    public Rectangle(int length, int width) {
        this.length = length;
        this.width = width;
    }

    @Override
    public int calculateArea() {
        return length * width;
    }

    @Override
    public int calculatePerimeter() {
        return 2 * (length + width);
    }
}

class Square extends Shape {
    private int side;

    public Square(int side) {
        this.side = side;
    }

    @Override
    public int calculateArea() {
        return side * side;
    }

    @Override
    public int calculatePerimeter() {
        return 4 * side;
    }
}

class Codechef {
    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(4, 6);
        Square square = new Square(5);

        int rectangleArea = rectangle.calculateArea();
        int rectanglePerimeter = rectangle.calculatePerimeter();

        int squareArea = square.calculateArea();
        int squarePerimeter = square.calculatePerimeter();

        System.out.println("Rectangle Area: " + rectangleArea);
        System.out.println("Rectangle Perimeter: " + rectanglePerimeter);
        System.out.println("Square Area: " + squareArea);
        System.out.println("Square Perimeter: " + squarePerimeter);
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA116)