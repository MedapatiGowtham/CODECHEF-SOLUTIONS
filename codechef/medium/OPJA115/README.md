# OPJA115

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### How to override methods in Java

You are given a simple program that defines a superclass `Animal` with a method `makeSound` and two subclasses, `Dog` and `Cat`. Each subclass should override the `makeSound` method to produce their specific sounds.

- The Animal class should have a method makeSound that prints "Animal makes a sound."
- The Dog class should extend Animal and override the makeSound method to print "Dog barks."
- The Cat class should extend Animal and override the makeSound method to print "Cat meows."
- In the Main class, create instances of Animal, Dog, and Cat, and call the makeSound method on each of them in this order.
- Ensure that the program demonstrates the use of method overriding, with each subclass providing its specific implementation of the makeSound method.

Run the code in the IDE to understand the concept of method overriding.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:25:09.423Z  

```java
class Animal {
    void makeSound() {
        System.out.println("Animal makes a sound");
    }
}

class Dog extends Animal {
    @Override
    void makeSound() {
        System.out.println("Dog barks");
    }
}

class Cat extends Animal {
    @Override
    void makeSound() {
        System.out.println("Cat meows");
    }
}

class Codechef {
    public static void main(String[] args) {
        Animal genericAnimal = new Animal();
        Animal dog = new Dog();
        Animal cat = new Cat();

        genericAnimal.makeSound(); 
        dog.makeSound();          
        cat.makeSound();          
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA115)