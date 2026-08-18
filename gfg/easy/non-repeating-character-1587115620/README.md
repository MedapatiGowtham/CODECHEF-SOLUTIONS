# Non Repeating Character

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string  **s**  consisting of  **lowercase** English Letters. return the first non-repeating character in  **s**. If there is no non-repeating character, return  **'$'**.

 **Examples:** 

```
Input: s = "geeksforgeeks"
Output: 'f'
Explanation: In the given string, 'f' is the first character in the string which does not repeat.
```

```
Input: s = "racecar"
Output: 'e'
Explanation: In the given string, 'e' is the only character in the string which does not repeat.
```

```
Input: s = "aabbccc"
Output: '$'
Explanation: All the characters in the given string are repeating.
```

 **Constraints:** 
1 ≤ s.size() ≤ 105

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-16T16:43:49.195Z  

```java
class Solution {
    public char nonRepeatingChar(String s) {
        HashMap<Character, Integer> map = new HashMap<>();

        // Count frequency
        for (char c : s.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }

        // Find first non-repeating character
        for (char c : s.toCharArray()) {
            if (map.get(c) == 1) {
                return c;
            }
        }

        return '$';
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1)