# Product Pair

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array  **arr[]**  and an integer  **target**, determine whether there exists a pair of elements in the array whose  **product**  is equal to target.

Return  **true**  if such a pair exists; otherwise, return  **false**.

 **Examples:** 

```
Input: arr[] = [10, 20, 9, 40], target = 400
Output: true
Explanation: As 10 * 40 = 400, the answer is true.

```

```
Input: arr[] = [-10, 20, 9, -40], target = 30
Output: false
Explanation: No pair exists with product 30.
```

```
Input: arr[] = [-10, 0, 9, -40], target = 0
Output: true
Explanation: As -10 * 0 = 0, the answer is true.
```

 **Constraints:** 
2 ≤ arr.size ≤ 105
-108 ≤ arr[i] ≤ 108
-1018 ≤ target ≤ 1018

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:13:23.427Z  

```java
import java.util.HashSet;
class Solution {
    public boolean isProduct(int[] arr, long target) {
        HashSet<Long> set = new HashSet<>();
        for (int num : arr) {
            if (target == 0 && num == 0) {
                return true;
            }
            if (num != 0 && target % num == 0) {
                long required = target / num;
                if (set.contains(required)) {
                    return true;
                }
            }
            set.add((long) num);
        }
        return false;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/equal-to-product3836/1)