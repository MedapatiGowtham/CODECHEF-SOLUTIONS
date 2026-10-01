# MNLK07

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in u25a85a0541 25a85a0541@sves.org.in

Given an integer $N$, output the $N^{th}$ term in the Fibonacci Series.
The Fibonacci Series is: `0 1 1 2 3 5 8...`

### Input Format
- The input contains a single integer $N$.
### Output Format

Output the $N^{th}$ term in the Fibonacci Series.

### Constraints
- $1 \leq N \leq 100$
### Sample 1:
Input
Output

```
1
```

```
0
```

### Sample 2:
Input
Output

```
2
```

```
1
```

### Sample 3:
Input
Output

```
7
```

```
8
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T09:39:20.042Z  

```java
import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int a = 0;
		int b = 1;
		if(n == 1) {
		    System.out.println(a);
		} else {
		    for(int i=2; i<=n; i++) {
		        int c = a+b;
		        a = b;
		        b = c;
		    }
		    System.out.println(a);
		}
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/MNLK07)