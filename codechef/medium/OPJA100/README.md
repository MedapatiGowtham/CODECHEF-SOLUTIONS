# OPJA100

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Multiple Choice Question

When you pass an object as a parameter to a method in Java, what are you actually passing?

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:21:27.730Z  

```cpp
class Person {
    private String name;
    private int age;

    // Constructor
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Getter methods
    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }
}

class Codechef {
    // Method that takes a Person object as a parameter
    public static void printPersonInfo(Person p) {
        System.out.println("Name: " + p.getName());
        System.out.println("Age: " + p.getAge());
    }
    
    public static void main(String[] args) {
        // Create a Person object
        Person person = new Person("Alice", 30);

        // Call a method and pass the object as a parameter
        printPersonInfo(person);
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA100)