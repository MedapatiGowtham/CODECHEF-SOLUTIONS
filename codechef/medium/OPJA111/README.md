# OPJA111

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Calculator Class

You are tasked with creating a simple class called `Calculator` that can subtraction operation. The catch is that you need to overload the methods based on the data types of the parameters.

The `Calculator` class should have the following method signatures:

- public int subtract(int a, int b) - Perform integer subtraction.
- public double subtract(double a, double b) - Perform double subtraction.

Your task is to implement the `Calculator` class, specifically the `subtract` method, to perform subtraction operations for both integer and double data types.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:23:15.418Z  

```java
class Calculator {
    public int subtract(int a, int b) {
        return a - b;
    }

    public double subtract(double a, double b) {
        return a - b;
    }
}

class Codechef{
    public static void main(String[] args) {
        Calculator calculator = new Calculator();

        int intDifference = calculator.subtract(10, 4); 
        double doubleDifference = calculator.subtract(5.5, 2.0); 

        System.out.println("Integer Difference: " + intDifference);
        System.out.println("Double Difference: " + doubleDifference);
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA111)