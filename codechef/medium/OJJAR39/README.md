# OJJAR39

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Double the Numbers

Given an array of numbers, create a new array where each number is double the value of the corresponding number in the original array. Note: While `map` is often preferred for creating new arrays, this exercise shows how you can achieve it using `forEach` and an external array.

### Sample 1:
Input
Output

```
[1, 5, 10]
```

```
Doubled: [ 2, 10, 20 ]
```

## Solution

**Language:** JavaScript  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T09:50:21.898Z  

```js
let originalNumbers=[1,5,10];
let doubleNumbers=[];
originalNumbers.forEach(function(number) {
    let doubled =number * 2;
    doubleNumbers.push(doubled);
});
console.log("Doubled:",doubleNumbers);
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR39)