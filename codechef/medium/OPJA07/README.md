# OPJA07

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Instance Variable

What is an instance variable in Java?

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-21T18:05:16.304Z  

```cpp
class BankAccount {
    private int accountNumber;
    private String accountHolder;
    private int balance;

    // Constructor to initialize the attributes
    public BankAccount(int accountNumber, String accountHolder) {
        this.accountNumber = accountNumber;
        this.accountHolder = accountHolder;
        this.balance = 0; // Initial balance is 0
    }

    // Deposit method
    public void deposit(int amount) {
        balance += amount;
        System.out.println("Deposited: $" + amount);
    }

    // Withdraw method
    public void withdraw(int amount) {
        balance -= amount;
        System.out.println("Withdrawn: $" + amount);
    }

    // Display account information
    public void getAccountInfo() {
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Account Holder: " + accountHolder);
        System.out.println("Balance: $" + balance); 
    }
}

public class Main {
    public static void main(String[] args) {
        // Create a BankAccount object
        BankAccount account = new BankAccount(12345, "John Doe");

        // Perform deposits and withdrawals and display account info
        account.deposit(1000);
        account.withdraw(500);
        account.deposit(200);

        // Display the final account information
        account.getAccountInfo();
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA07)