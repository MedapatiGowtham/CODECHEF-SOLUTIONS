# OPJA113

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Add Integers and Concatenate Strings

You are tasked with creating a Java program that defines an add function capable of performing two different operations: addition of integers and concatenation of strings. Implement the add function with overloads for these two operations.

- Create an add function that takes two integer parameters and returns their sum as an integer.
- Overload the add function to take two string parameters and return their concatenation as a new string.

In the main function, test the overloaded add function by performing integer addition and string concatenation operations.

This problem will help you practice function overloading in Java by implementing a versatile add function that works with both integers and strings.

### Task

Given two integers and two strings as input. Use add function to display the output of both the add functions.

### Input Format
- First line contain two integers for addition.
- Second line contain two strings for concatenation.
### Output Format
- First line contains the output of integer addition using add function.
- Second line contains the output of string concatenation using add function.
### Sample 1:
Input
Output

```
2 3
code chef
```

```
5
codechef

```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:24:40.102Z  

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

[View on CodeChef](https://www.codechef.com/problems/OPJA113)