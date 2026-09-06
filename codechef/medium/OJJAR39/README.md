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
**Submitted:** 2026-09-06T18:10:27.672Z  

```js
let originalNumbers = [1, 5, 10];
let doubledNumbers = [];
originalNumbers.forEach((number) => {
    let doubleValue = number*2;
    doubledNumbers.push(doubleValue);
});
console.log("Doubled:", doubledNumbers);
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR39)