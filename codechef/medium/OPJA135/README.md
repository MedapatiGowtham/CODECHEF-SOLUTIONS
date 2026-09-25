# OPJA135

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### School Management System

You are tasked with implementing a simple School Management System in Java using classes. The system should allow you to create a School and enroll Student objects into it. Each Student should have a name.

- Student Class: name (string): Represents the name of the student. Student(string name, int age): A constructor that initializes the name and age of the student. display(): A method that displays the student's name and age.
- School Class: schoolName (string): Represents the name of the school. student (Student): Represents a single student enrolled in the school. School(string schoolName, const Student& student): A constructor that initializes the school's name and the enrolled student. displaySchoolInfo(): A method that displays the school's name and the enrolled student's information.

 **Note** 

```
School.Student student("Alice") 

```

This code is creating an instance (object) of the nested class Student, which is defined within the School class. It specifies that you want to create an object of the Student class, which is nested inside the School class.

### Tasks

Execute this code to observe the functionality of the nested class implementation.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-25T17:47:57.809Z  

```java
class School {
    public static class Student {
        private String name;

        public Student(String name) {
            this.name = name;
        }

        public void display() {
            System.out.println(name);
        }
    }

    private String schoolName;
    private Student student;

    public School(String schoolName, Student student) {
        this.schoolName = schoolName;
        this.student = student;
    }

    public void displaySchoolInfo() {
        System.out.println(schoolName);
        student.display();
    }
}

class Codechef {
    public static void main(String[] args) {
        School.Student student = new School.Student("Alice");
        School school = new School("ABC School", student);

        school.displaySchoolInfo();
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA135)