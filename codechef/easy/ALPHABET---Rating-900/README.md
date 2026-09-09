# ALPHABET - Rating 900

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-09T16:52:37.552Z  

```java
import java.util.*;
public class Main {
    public static String titleCase(String s) {
        String[] words = s.split(" ");
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < words.length; i++) {
            String word = words[i];
            boolean isAcronym = word.equals(word.toUpperCase());

            if (!isAcronym) {
                word = word.substring(0, 1).toUpperCase()
                     + word.substring(1).toLowerCase();
            }
            if (i > 0) {
                result.append(" ");
            }
            result.append(word);
        }
        return result.toString();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        sc.nextLine(); 
        while (T-- > 0) {
            String s = sc.nextLine();
            System.out.println(titleCase(s));
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/ALPHABET)