# OPJA99

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Object as Parameter

In Java, you can pass objects as parameters to methods just like you pass other data types such as integers or strings. When you pass an object as a parameter, you are essentially passing a reference to the object, allowing the method to access and manipulate the object's properties and behavior.

In this example, the `printPersonInfo` method takes a `Person` object as a parameter, and it can access the `name` and `age` properties of the `Person` object to print their values.

When you pass an object as a parameter, you're passing a reference to the object, so any changes made to the object's properties within the method will affect the original object outside the method as well. This is because the reference points to the same memory location where the object's data is stored.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:21:10.010Z  

```java
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

[View on CodeChef](https://www.codechef.com/problems/OPJA99)