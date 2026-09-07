# PASSWD - Rating 1470

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Password

Chef is planning to setup a secure password for his Codechef account. For a password to be secure the following conditions should be satisfied:

- Password must contain at least one lower case letter $[a-z]$;
- Password must contain at least one upper case letter [A−Z] strictly inside (first or the last character won’t be considered)
- Password must contain at least one digit $[0-9]$ strictly inside;
- Password must contain at least one special character from the set $\{$ '@', '#', '%', '&', '?' $\}$ strictly inside;
- Password must be at least $10$ characters in length, but it can be longer.

Chef has generated several strings and now wants you to check whether the passwords are secure based on the above criteria. Please help Chef in doing so.

### Input
- First line will contain $T$, number of testcases. Then the testcases follow.
- Each testcase contains of a single line of input, string $S$.
### Output

For each testcase, output in a single line "YES" if the password is secure and "NO" if it is not.

### Constraints
- $1 \leq |S| \leq 20$
- All the characters in $S$ are one of the following: lower case letters $[a-z]$, upper case letters $[A-Z]$, digits $[0-9]$, special characters from the set $\{$ '@', '#', '%', '&', '?' $\}$
- Sum of length of strings over all tests is atmost $10^6$
### Sample 1:
Input
Output

```
3
#cookOff#P1
U@code4CHEFINA
gR3@tPWD
```

```
NO
YES
NO
```

### Explanation:

 **Example case 1:**  Condition $3$ is not satisfied, because the only digit is not strictly inside.

 **Example case 2:**  All conditions are satisfied.

 **Example case 3:**  Condition $5$ is not satisfied, because the length of this string is 8.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-07T17:50:15.237Z  

```java
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        while (T-- > 0) {
            String s = sc.next();

            boolean lower = false;
            boolean upper = false;
            boolean digit = false;
            boolean special = false;
            if (s.length() < 10) {
                System.out.println("NO");
                continue;
            }
            for (int i = 0; i < s.length(); i++) {
                char ch = s.charAt(i);
                if (ch >= 'a' && ch <= 'z') {
                    lower = true;
                }
                if (i > 0 && i < s.length() - 1) {

                    if (ch >= 'A' && ch <= 'Z') {
                        upper = true;
                    }

                    if (ch >= '0' && ch <= '9') {
                        digit = true;
                    }

                    if (ch == '@' || ch == '#' || ch == '%' ||
                        ch == '&' || ch == '?') {
                        special = true;
                    }
                }
            }

            if (lower && upper && digit && special) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

        sc.close();
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/PASSWD)