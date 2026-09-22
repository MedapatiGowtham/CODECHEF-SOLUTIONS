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
