# STACK13

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Next Greater Element

The next greater element problem is a common question that is asked in coding interviews.

Given an array, find the next greater element for each element in the array. The Next Greater Element (NGE) for an element `x` is the first greater element on the right side of `x` in the array. Elements for which no greater element exist, the NGE is considered as -1.

Here's an example to illustrate the concept:

Suppose we have the following array:

```
A = [4, 5, 2, 25]

```

The solution would be:

```
NGE for 4 is 5
NGE for 5 is 25
NGE for 2 is 25
NGE for 25 is -1

```

Explanation:

- For element 4, the next greater element in the array is 5.
- For element 5, the next greater number is 25.
- For element 2, the next greater number is 25 (we skip over 5, as we are looking for the next greater number directly to the right of 2).
- For element 25, there is no greater number in the array, hence, the NGE is -1.

The brute force way to solve this is by using two nested loops, checking each element against every other element that follows it to find the NGE, which leads to an O(n^2) time complexity.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-05T17:49:35.187Z  

```cpp
import java.util.Scanner;
import java.util.Stack;
class EvaExp {
    static int[] stack = new int[1000];
    static int top = -1;
    static void push(int x) {
        stack[++top] = x;
    }
    static int pop() {
        return stack[top--];
    }
    static int evaluate(String s) {
        for(int i=0; i<s.length(); i++) {
            char ch = s.charAt(i);
            if(Character.isDigit(ch)) {
                push(ch -'0');
            } else {
                int b = pop();
                int a = pop();
                if(ch == '+') {
                    push(a+b);
                } else if(ch == '-') {
                    push(a-b);
                }else if(ch == '*') {
                    push(a*b);
                } else if(ch == '/') {
                    push(a/b);
                }
            }
        }
        return pop();
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0) {
            int n = sc.nextInt();
            String expression = sc.next();
            System.out.println(evaluate(expression));
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/STACK13)