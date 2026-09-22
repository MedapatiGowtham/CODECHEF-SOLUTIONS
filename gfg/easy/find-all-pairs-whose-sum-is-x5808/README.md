# All Pairs with Sum from 2 Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two unsorted arrays  **a[]**   and b **[]**, the task is to find all pairs whose sum equals  **x**  from both arrays.

Note: All pairs should be returned in increasing order of u. For eg. for two pairs (u1,v1) and (u2,v2), if u1 < u2 then (u1,v1) should be returned first else second.

 **Examples:** 

```
Input: target = 9, a[] = [1, 2, 4, 5, 7], b[] = [5, 6, 3, 4, 8]
Output: 
1 8
4 5 
5 4
Explanation: (1, 8), (4, 5), (5, 4) are the pairs which sum to 9.

```

```
Input: target = 8, a[] = [-1, -2, 4, -6, 5, 7], b[] = [6, 3, 4, 0]
Output:
4 4 
5 3

```

```
Input: target = 9, a[] = [1, 2, 4, 5, 7, 4], b[] = [5, 6, 3, 4, 8, 4]
Output:
1 8
4 5
4 5
5 4
5 4
Explanation: (1, 8), (4, 5), (4, 5), (5, 4) and (5, 4) are the pairs which sum to 9.
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:04:24.523Z  

```java
import java.util.*;

class Solution {
    public pair[] allPairs(int target, int arr1[], int arr2[]) {
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        ArrayList<pair> ans = new ArrayList<>();
        int i = 0;
        int j = arr2.length - 1;
        while (i < arr1.length && j >= 0) {
            int sum = arr1[i] + arr2[j];
            if (sum == target) {
                int val1 = arr1[i];
                int val2 = arr2[j];
                int count1 = 0;
                while (i < arr1.length && arr1[i] == val1) {
                    count1++;
                    i++;
                }
                int count2 = 0;
                while (j >= 0 && arr2[j] == val2) {
                    count2++;
                    j--;
                }
                for (int x = 0; x < count1; x++) {
                    for (int y = 0; y < count2; y++) {
                        ans.add(new pair(val1, val2));
                    }
                }

            } else if (sum < target) {
                i++;
            } else {
                j--;
            }
        }
        return ans.toArray(new pair[0]);
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x5808/1)