# OPJA95

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Aggregation in Java

Aggregation is a form of object composition in which one class contains or is composed of one or more objects of another class. Aggregation represents a "has-a" relationship between classes. It implies that one class (the whole or container) has objects of another class (the part or component).

In this example, the Person class will have an Address object as a member variable:

- The Address class represents an address with street, city, and postal code information.
- The Person class aggregates an Address object as a member variable. It has a displayInfo method to display the person's name, age, and address.
- In the main function, we create an Address object for a person and then create a Person object, passing the address as a parameter.

 **Note-**  Constructor of Person Class initializes a Person object by setting its name, age, and address member variables using the values provided as arguments to the constructor. The address_ member variable is initialized to reference the same Address object that was passed in, forming an aggregation relationship between Person and Address.

This example demonstrates a "has-a" relationship, where a Person "has" an Address, and it illustrates aggregation in Java where one class is composed of another as a part of its structure.

 **Run the code to see the output.**

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:20:21.701Z  

```java
class Address {
    String street;
    String city;
    String postalCode;

    Address(String street, String city, String postalCode) {
        this.street = street;
        this.city = city;
        this.postalCode = postalCode;
    }

    void displayAddress() {
        System.out.println("Street: " + street + ", City: " + city + ", Postal Code: " + postalCode);
    }
}

class Person {
    String name;
    int age;
    Address address;

    Person(String name, int age, Address address) {
        this.name = name;
        this.age = age;
        this.address = address;
    }

    void displayInfo() {
        System.out.println("Name: " + name + ", Age: " + age);
        System.out.print("Address: ");
        address.displayAddress();
    }
}

class Codechef {
    public static void main(String[] args) {
        Address personAddress = new Address("123 Main St", "Cityville", "12345");
        Person person = new Person("John Doe", 30, personAddress);

        person.displayInfo();
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA95)