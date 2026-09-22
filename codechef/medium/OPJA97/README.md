# OPJA97

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Example of Aggregation

What is a common real-world example of aggregation in Java?

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:20:43.507Z  

```cpp
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

[View on CodeChef](https://www.codechef.com/problems/OPJA97)