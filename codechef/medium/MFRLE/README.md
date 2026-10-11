# MFRLE

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Most Frequent Letter

You are given a string $S$ containing uppercase and lowercase English letters, digits, spaces, and special characters.

Only the  **alphabetic characters**  in the string are considered. Letter case is ignored, so uppercase and lowercase forms of the same letter are treated as equal. For example, `A` and `a` represent the same letter.

Find the letter that appears most frequently in $S$.

If multiple letters have the same maximum frequency, choose the one that comes  **first alphabetically**.

Print the answer as a lowercase letter.

### Input Format
- The first line contains the string $S$.
### Output Format
- Print a single lowercase letter — the most frequent alphabetic character in $S$.
### Constraints
- $1 \le |S| \le 10^5$
- $S$ may contain uppercase and lowercase English letters, digits, spaces, and special characters.
- $S$ contains at least one English alphabetic character.
### Sample 1:
Input
Output

```
Hello, World! 123
```

```
l
```

### Explanation:

Ignoring non-alphabetic characters and letter case, the string becomes `helloworld`.

The letter `l` appears $3$ times, which is more than any other letter.

Therefore, the answer is `l`.

### Sample 2:
Input
Output

```
zzYYxx
```

```
x
```

### Explanation:

After ignoring case, the letters `x`, `y`, and `z` each appear $2$ times.

Since `x` comes first alphabetically, the answer is `x`.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-11T17:30:28.994Z  

```java
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String S = br.readLine();
        if (S == null) return;
        
        int[] freq = new int[26];
        for (int i = 0; i < S.length(); i++) {
            char c = S.charAt(i);
            if (c >= 'a' && c <= 'z') {
                freq[c - 'a']++;
            } else if (c >= 'A' && c <= 'Z') {
                freq[c - 'A']++;
            }
        }
        
        int maxFreq = 0;
        char bestLetter = 'a';
        for (int i = 0; i < 26; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                bestLetter = (char) ('a' + i);
            }
        }
        System.out.println(bestLetter);
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/MFRLE)