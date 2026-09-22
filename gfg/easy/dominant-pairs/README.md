# Dominant Pairs

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an even-sized integer array  **arr[]**, count the number of dominant pairs. A pair of indices (i, j) is called dominant if all of the following conditions hold:

- 0 ≤ i < arr.size() / 2
- arr.size() / 2 ≤ j < arr.size() 
- arr[i] ≥ 5 × arr[j] 

Return the total number of dominant pairs.

 **Note:**  0-based indexing is used.

  Examples:  

```
Input: arr[] = [10, 2, 2, 1]
Output: 2
Explanation: First half: [10, 2], Second half: [2, 1]. So valid two pairs are: 
{0, 2}: 10 >= 5 × 2 
{0, 3}: 10 >= 5 × 1 
```

```
Input: arr[] = [10, 8, 2, 1, 1, 2]
Output: 5
Explanation: First half: [10, 8, 2], Second half: [1, 1, 2]. So valid five pairs are: 
{0, 3}: 10 >= 5 × 1
{0, 4}: 10 >= 5 × 1 
{0, 5}: 10 >= 5 × 2
{1, 3}: 8 >= 5 × 1 
{1, 4}: 8 >= 5 × 1 
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T16:58:32.710Z  

```java
import java.util.Arrays;

class Solution {
    public int dominantPairs(int[] arr) {
        int n = arr.length;
        int mid = n / 2;
        int count = 0;
        Arrays.sort(arr, mid, n);
        for (int i = 0; i < mid; i++) {
            int left = mid;
            int right = n;
            while (left < right) {
                int m = left + (right - left) / 2;
                if (5L * arr[m] <= arr[i]) {
                    left = m + 1;
                } else {
                    right = m;
                }
            }
            count += left - mid;
        }
        return count;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/dominant-pairs/1)