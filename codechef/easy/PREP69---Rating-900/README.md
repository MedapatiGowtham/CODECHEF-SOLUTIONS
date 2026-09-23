# PREP69 - Rating 900

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Remove Duplicates

You are given an array $A_1, A_2, \dots, A_N$ of length $N$ sorted in  **non-decreasing**  order. Your task is to remove all the duplicates and find the sorted  **increasing**  array of distinct elements consisting of all distinct elements present in $A$.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first line of each test case contains an integer $N$ - the length of the array $A$.
- The second line of each test case contains $N$ space-separated integers $A_1,A_2,\ldots,A_N$.
### Output Format

For each test case, output two lines:

- The first line should contain a single integer $M$ - the size of the array.
- The second line should contain $M$ space-separated integers denoting the elements of the array.
### Constraints
- $1 \leq T \leq 100$
- $1 \leq N \leq 10^5$
- $1 \leq A_i \leq 10^9$
- The sum of $N$ over all test cases won't exceed $2 \cdot 10^5$.
### Sample 1:
Input
Output

```
3
2
5 10
4
1 5 5 10
5
4 4 6 6 8

```

```
2
5 10 
3
1 5 10 
3
4 6 8 

```

### Explanation:

 **Test case $1$** : Distinct elements will be $5$, $10$. So the array will be $[5, 10]$.

 **Test case $2$** : Distinct elements will be $1$, $5$, $10$. So the array will be $[1, 5, 10]$.

 **Test case $3$** : Distinct elements will be $4$, $6$, $8$. So the array will be $[4, 6, 8]$.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-23T17:59:38.287Z  

```java
import java.util.Scanner;
import java.util.ArrayList;
class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            int j = -1;
            ArrayList<Integer> al = new ArrayList<>();
            for(int i=0; i<n; i++) {
                int current = sc.nextInt();
                if(current != j) {
                    al.add(current);
                    j = current;
                }
            }
            System.out.println(al.size());
            for(int i=0; i<al.size(); i++) {
                System.out.print(al.get(i)+" ");
            }
            System.out.println();
        }
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/PREP69)