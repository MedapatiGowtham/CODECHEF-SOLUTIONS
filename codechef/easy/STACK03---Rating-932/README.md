# STACK03 - Rating 932

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Implement Stack using Arrays

Here's a simple exercise that involves implementing a stack.
In this exercise, you'll implement a basic stack to reverse a string using the stack's LIFO property.

### Task

Update the functions `push()` and `pop()` within the class stack to output the reverses string.

### Sample 1:
Input
Output

```
Hello, World!
```

```
!dlroW,olleH
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-05T17:02:12.884Z  

```java
import java.util.Scanner;

class Stack {
    private static final int STACK_CAPACITY = 101;
    private char[] stackArray = new char[STACK_CAPACITY];
    private int topIndex = -1;

    void push(char character) {
       if(isFull()) {
           System.out.println("Stack is full");
       } else {
           topIndex++;
           stackArray[topIndex] = character;
       }
    }

    char pop() {
       if (isEmpty()) {
           System.out.println("Stack is empty");
           return '\0';
       } else {
           char element = stackArray[topIndex];
           topIndex--;
           return element;
       }
    }

    boolean isEmpty() {
        return topIndex == -1;
    }

    boolean isFull() {
        return topIndex >= STACK_CAPACITY - 1;
    }
}

class ReverseString {
    public static void main(String[] args) {
        String inputString = "Hello, World!";
        int inputLength = inputString.length();

        Stack charStack = new Stack();

        // Push each character onto the stack
        for (int i = 0; i < inputLength; i++) {
            char currentChar = inputString.charAt(i);
            charStack.push(currentChar);
        }

        // Pop the characters from the stack to construct the reversed string
        StringBuilder reversedString = new StringBuilder();
        while (!charStack.isEmpty()) {
            reversedString.append(charStack.pop());
        }

        System.out.println(reversedString.toString());
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/STACK03)