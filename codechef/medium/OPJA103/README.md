# OPJA103

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Aggregation in Java Advantages

What is the primary advantage of using aggregation in Java?

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:22:17.612Z  

```cpp
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

[View on CodeChef](https://www.codechef.com/problems/OPJA103)