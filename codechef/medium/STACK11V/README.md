# STACK11V

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-05T16:46:17.578Z  

```java
    static final int MAX_SIZE = 101;
    static int[] a = new int[MAX_SIZE];
    static int top = -1;

    static void push(int ele) {
        if (top <= MAX_SIZE - 1) {
            top++;
            a[top] =ele;
            System.out.println("Pushed: " + ele);
        } else {
            System.out.println("Stack is full. Cannot push: " +ele);
        }
    }
    
    static int pop() {
        if (top >= 0) {
            int ele = a[top];
            top--;
            System.out.println("Popped: " + ele);
            return ele;
        } else {
            System.out.println("Stack is empty. Cannot pop.");
            return -1;
        }
    }

```

---

[View on CodeChef](https://www.codechef.com/problems/STACK11V)