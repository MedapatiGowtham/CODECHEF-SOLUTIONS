# OPJA108

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Shape Calculator

You are tasked with creating a class called ShapeCalculator that contains static methods for calculating the area of geometric shapes: squares and rectangles. Implement two static methods for calculating the area of these shapes.

Create a class ShapeCalculator with the following public static member functions:

- static int calculateArea(int sideLength): Takes a int sideLength as a parameter and calculates the area of a square. Return the result.
- static int calculateArea(int length, int width): Takes two int, length and width, as parameters and calculates the area of a rectangle. Return the result.

This problem will allow you to practice static function overloading by providing different implementations of area calculations for squares and rectangles using static methods in the ShapeCalculator class.

### Task

Given the sides of the square and rectangle. Use the calculateArea method to calculate the area of square and rectangle.  **Print the area of square on first line and area of rectangle on second line.** 

Ensure that you handle static function overloading correctly for each of the shape calculations.

### Input Format
- First line contains one integer representing the side of square.
- Second line contains two integers representing the length and breadth of rectangle respectively.
### Output Format

Print the area of square on first line and area of rectangle on second line.

### Sample 1:
Input
Output

```
2
2 3
```

```
4
6
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:24:02.619Z  

```java
import java.util.Scanner;

class ShapeCalculator {
    // Calculate the area of a square
    static int calculateArea(int sideLength) {
        return sideLength * sideLength;
    }

    // Calculate the area of a rectangle
    static int calculateArea(int length, int width) {
        return length * width;
    }
}

class Codechef {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int squareSide, length, width;
        squareSide = scanner.nextInt();
        length = scanner.nextInt();
        width = scanner.nextInt();

        // Calculate the area of a square
        int squareArea = ShapeCalculator.calculateArea(squareSide);

        // Calculate the area of a rectangle
        int rectangleArea = ShapeCalculator.calculateArea(length, width);

        System.out.println(squareArea);
        System.out.println(rectangleArea);
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA108)