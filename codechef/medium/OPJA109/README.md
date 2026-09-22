# OPJA109

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Multiple Choice Question

Which of the following is NOT a valid way to overload a method in Java?

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:23:37.680Z  

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

[View on CodeChef](https://www.codechef.com/problems/OPJA109)