# PREP21 - Rating 1200

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Evaluate Expression

You are given a string $S$ consisting of $N$ characters. Each character is either a digit from $0$ to $9$ or an operator out of `+`, `-`, and `*`.

Consider the string to be in reverse polish notation consisting of  **digits**  (from $1$ to $9$) as the operands and `+`, `-`, or `*` as the operators and evaluate the expression.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line of each test case contains a single integer $N$ — the number of characters in the string. The next line consists of $N$ characters, where the $i^{th}$ character is either a digit from $0$ to $9$ or an operator out of +, -, and *. Consider the string to be in reverse polish notation.
### Output Format

For each test case, output on a new line, an integer denoting the evaluated expression.

### Constraints
- $1 \leq T \leq 100$
- $1 \leq N \leq 10^5$
- The sum of $N$ over all test cases won't exceed $2\cdot 10^5$.
### Sample 1:
Input
Output

```
4
3
73-
7
04 *3* 0-
3
27*
7
703*-9-

```

```
4
0
14
-2

```

### Explanation:

 **Test case $1$:**  The postfix expression corresponds to $7-3$ which is equal to $4$.

 **Test case $2$:**  The postfix expression corresponds to $((0\times 4)\times 3) - 0)$ which is equal to $0$.

 **Test case $3$:**  The postfix expression corresponds to $2\times 7$ which is equal to $14$.

 **Test case $4$:**  The postfix expression corresponds to $(7 - (0\times 3)) - 9)$ which is equal to $-2$.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-05T17:47:25.926Z  

```java
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

[View on CodeChef](https://www.codechef.com/problems/PREP21)