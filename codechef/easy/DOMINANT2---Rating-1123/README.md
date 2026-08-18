# DOMINANT2 - Rating 1123

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T16:51:23.375Z  

```java
import java.util.Scanner;
import java.util.ArrayList;
import java.util.HashMap;
class Chef
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            ArrayList<Integer> al = new ArrayList<>();
            for(int i = 0;i < n;i++)
            {
                int value = sc.nextInt();
                al.add(value);
            }
            HashMap<Integer, Integer> hs = new HashMap<>();
            for(int x: al)
            {
                hs.put(x, hs.getOrDefault(x, 0)+1);
            }
            int maxFrequency = 0;
            for(int freq:hs.values())
            {
                if(freq > maxFrequency)
                {
                    maxFrequency = freq;
                }
            }
            System.out.println(n-maxFrequency);
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/DOMINANT2)