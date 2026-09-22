# OPJA112

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:24:41.465Z  

```java
import java.util.Scanner;

class Adder {
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to concatenate two strings
    String add(String str1, String str2) {
        return str1 + str2;
    }
}

class Codechef {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Adder adder = new Adder();

        int a, b;
        String x, y;

        a = scanner.nextInt();
        b = scanner.nextInt();
        x = scanner.next();
        y = scanner.next();

        System.out.println(adder.add(a, b));
        System.out.println(adder.add(x, y));
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA112)