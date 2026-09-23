# OPJA119

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Library Book Management System

You are tasked with creating a program to manage a library of books. Implement a class hierarchy with a base class `Book` and two derived classes: `FictionBook` and `NonFictionBook`. Each class should have the following properties and methods:

 **Book:** 

- Properties: title (string), author (string) and price (double)
- Methods: String getBookInfo()

 **FictionBook (Derived from Book):** 

- Additional Property: genre (string)
- Methods: Override getBookInfo() to return book information including the genre.

 **NonFictionBook (Derived from Book):** 

- Additional Property: topic (string)
- Methods: Override getBookInfo() to return book information including the topic.
### Task

Your task is to complete both `FictionBook` and `NonFictionBook` classes, to display the book information.

### Expected Output

```
Book Info: Title: "To Kill a Mockingbird", Author: Harper Lee, Price: $14.99, Genre: Drama
Book Info: Title: "A Brief History of Time", Author: Stephen Hawking, Price: $19.99, Topic: Cosmology

```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T17:26:52.955Z  

```java
class Book {
    private String title;
    private String author;
    private double price;

    public Book(String title, String author, double price) {
        this.title = title;
        this.author = author;
        this.price = price;
    }

    public String getBookInfo() {
        return "Title: \"" + title + "\", Author: " + author + ", Price: $" + price;
    }
}

class FictionBook extends Book {
    private String genre;

    public FictionBook(String title, String author, double price, String genre) {
        super(title, author, price);
        this.genre = genre;
    }

    @Override
    public String getBookInfo() {
        return super.getBookInfo() + ", Genre: " + genre;
    }
}

class NonFictionBook extends Book {
    private String topic;

    public NonFictionBook(String title, String author, double price, String topic) {
        super(title, author, price);
        this.topic = topic;
    }

    @Override
    public String getBookInfo() {
        return super.getBookInfo() + ", Topic: " + topic;
    }
}

class Codechef {
    public static void main(String[] args) {
        FictionBook fictionBook = new FictionBook("To Kill a Mockingbird", "Harper Lee", 14.99, "Drama");
        NonFictionBook nonFictionBook = new NonFictionBook("A Brief History of Time", "Stephen Hawking", 19.99, "Cosmology");

        // Display book information
        System.out.println("Book Info: " + fictionBook.getBookInfo());
        System.out.println("Book Info: " + nonFictionBook.getBookInfo());
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA119)