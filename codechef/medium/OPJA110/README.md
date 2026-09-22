# OPJA110

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Java Constructor Overloading

Can constructors in Java be overloaded like regular methods?

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:23:51.932Z  

```cpp
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

[View on CodeChef](https://www.codechef.com/problems/OPJA110)