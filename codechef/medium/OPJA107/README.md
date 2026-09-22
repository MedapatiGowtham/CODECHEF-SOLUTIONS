# OPJA107

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Calculator with Method Overloading

You are tasked with implementing a simple `Calculator` class that can perform addition operations on integers. The `Calculator` class should provide overloaded `add` methods to accommodate different numbers of integer parameters.

 **Class Definitions:** 

- Calculator class: Provide overloaded add methods as follows: int add(int a, int b) - Adds two integers and returns the result. int add(int a, int b, int c) - Adds three integers and returns the result. int add(int a, int b, int c, int d) - Adds four integers and returns the result.
### Task
- Create a Calculator class with the required overloaded add methods.
- Implement each add method to perform the addition as described in the class definitions.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:22:49.997Z  

```java
class Calculator {
    // Method to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Method to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Method to add four integers
    int add(int a, int b, int c, int d) {
        return a + b + c + d;
    }
}

class Codechef {
    public static void main(String[] args) {
        Calculator calculator = new Calculator();

        // Using the different overloaded add methods
        int sum1 = calculator.add(2, 3);
        int sum2 = calculator.add(2, 3, 4);
        int sum3 = calculator.add(2, 3, 4, 5);

        System.out.println("Sum1: " + sum1);
        System.out.println("Sum2: " + sum2);
        System.out.println("Sum3: " + sum3);
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA107)