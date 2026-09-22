# OPJA104

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Student Course Enrollment System

You are tasked with creating a C++ program to manage student enrollments in courses. Implement two classes, Course and Student, to represent courses and students, and develop a program that allows students to enroll in courses and list their enrolled courses.

Create a Course class with the following attributes:

- courseName (string): The name of the course.

Create a Student class with the following attributes and methods:

- studentName (string): The name of the student.
- courses (vector of Course objects): A collection of courses the student is enrolled in.
- listEnrolledCourses(): A method to list all the courses the student is enrolled in.

In the main function, we create instances of courses and students and demonstrate how students can enroll in courses.
Finally, we use the listEnrolledCourses method to display the courses enrolled by each student.

 **Debug the code to ensure everything works fine.** 

## Note

In the given code, the Students and their corresponding courses are

```
Alice - courses taken are Introduction to Programming and Data Structures 
Bob - course taken is Introduction to Programming 

```

Expected Output for given code is

```
Courses enrolled by Alice: Introduction to Programming Data Structures 
Courses enrolled by Bob: Introduction to Programming 

```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:22:28.155Z  

```java
import java.util.ArrayList;
import java.util.List;

class Course {
    String courseName;

    Course(String courseName) {
        this.courseName = courseName;
    }
}

class Student {
    String studentName;
    List<Course> courses;

    Student(String studentName) {
        this.studentName = studentName;
        this.courses = new ArrayList<>();
    }

    void listEnrolledCourses() {
        for (Course course : courses) {
            System.out.print(course.courseName + " ");
        }
        System.out.println();
    }
}

class Codechef {
    public static void main(String[] args) {
        Course course1 = new Course("Introduction to Programming");
        Course course2 = new Course("Data Structures");

        Student student1 = new Student("Alice");
        Student student2 = new Student("Bob");

        student1.courses.add(course1);
        student1.courses.add(course2);
        student2.courses.add(course1);

        System.out.print("Courses enrolled by Alice: ");
        student1.listEnrolledCourses();

        System.out.print("Courses enrolled by Bob: ");
        student2.listEnrolledCourses();
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA104)