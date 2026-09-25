# OPJA136

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-25T17:48:00.067Z  

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

[View on CodeChef](https://www.codechef.com/problems/OPJA136)