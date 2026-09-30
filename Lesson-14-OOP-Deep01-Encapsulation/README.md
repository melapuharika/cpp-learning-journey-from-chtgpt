Lesson-14-OOP-Deep

01-Encapsulation
02-Abstraction

03-Inheritance
04-Single-Inheritance
05-Multiple-Inheritance
06-Multilevel-Inheritance
07-Hierarchical-Inheritance
08-Hybrid-Inheritance

09-Polymorphism
10-Compile-Time-Polymorphism
11-Runtime-Polymorphism

12-Function-Overloading
13-Operator-Overloading
14-Function-Overriding
15-Virtual-Function
16-Pure-Virtual-Function

17-Abstract-Class
18-Interface-Like-Classes
19-Virtual-Table-vtable
20-Virtual-Pointer-vptr
21-Multiple-Inheritance
22-Diamond-Problem
23-Virtual-Inheritance
24-override
25-final


### topic 1
Encapsulation

Definition

Encapsulation is the process of bundling data and the methods that operate on that data into a single unit called a class.

It also helps to protect data from direct access by using access specifiers such as "private", "public", and "protected".

Simple Example

Think about an ATM.

The ATM contains:

- Account information
- Balance
- Transaction logic

But we cannot directly access the internal data.

We use operations such as:

- Deposit
- Withdraw
- Check Balance

This is similar to Encapsulation in C++.

Encapsulation in C++

class BankAccount
{
private:
    double balance;

public:
    void deposit(double amount)
    {
        balance = balance + amount;
    }

    double getBalance()
    {
        return balance;
    }
};

Explanation

- "class BankAccount" → Creates a class.
- "private:" → Protects the data from direct outside access.
- "balance" → Data member.
- "public:" → Allows controlled access from outside.
- "deposit()" → Method used to modify the balance.
- "getBalance()" → Method used to access the balance.

Example Usage

BankAccount account;

account.deposit(5000);

cout << account.getBalance();

Here, we do not directly access "balance".

Instead, we use public methods to interact with it.

Why Encapsulation?

1. Protects data from unwanted direct access.
2. Provides controlled access to data.
3. Keeps data and related methods together.
4. Makes code easier to maintain.
5. Improves data security.

Key Idea

Data + Methods
      ↓
    Class
      ↓
Controlled Access

One-Line Definition

Encapsulation is the bundling of data and methods into a single class and restricting direct access to the data.


### topic 2 
Abstraction

Definition

Abstraction is the process of hiding unnecessary implementation details and showing only the essential features to the user.

Simple Example

Think about a car.

When we drive a car, we use:

- Steering → To turn the car
- Brake → To stop the car
- Accelerator → To increase speed

We do not need to know all the internal details of how the engine works.

This is Abstraction.

Abstraction in C++

Abstraction can be achieved using:

- Abstract classes
- Pure virtual functions

Example

class Vehicle
{
public:
    virtual void start() = 0;
};

Explanation

- "Vehicle" → Base class.
- "start()" → Virtual function.
- "= 0" → Makes it a pure virtual function.
- The class hides the implementation of "start()".
- Derived classes can provide their own implementation.

Why Abstraction?

1. Hides unnecessary implementation details.
2. Shows only essential features.
3. Reduces complexity.
4. Makes code easier to use.
5. Helps create a clear interface.

Encapsulation vs Abstraction

Encapsulation| Abstraction
Protects data| Hides implementation details
Bundles data and methods| Shows only essential features
Uses classes and access specifiers| Uses abstract classes and pure virtual functions

Key Idea

Unnecessary Details
        ↓
      Hidden
        ↓
Essential Features
        ↓
       User

One-Line Definition

Abstraction is the process of hiding unnecessary implementation details and showing only the essential features to the user.
