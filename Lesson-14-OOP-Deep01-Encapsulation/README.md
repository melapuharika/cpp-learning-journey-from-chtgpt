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

### topic 3

Inheritance

Definition

Inheritance is an OOP concept in which a derived class acquires or reuses the properties and methods of an existing base class.

It helps in code reusability and allows us to extend existing functionality.

Important Terms

- Base Class → Parent class
- Derived Class → Child class
- Inheritance → Reusing features of a base class in a derived class

Simple Example

Base Class
    ↓
Derived Class

For example:

Animal
  ↓
 Dog

"Dog" can inherit features from "Animal".

C++ Example

#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating";
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking";
    }
};

int main()
{
    Dog d;

    d.eat();
    d.bark();

    return 0;
}

Explanation

- "Animal" → Base class.
- "Dog" → Derived class.
- "Dog : public Animal" → "Dog" inherits from "Animal".
- "eat()" → Function inherited from "Animal".
- "bark()" → Function belonging to "Dog".
- "d.eat()" → Uses the inherited function.
- "d.bark()" → Uses the derived class function.

Syntax

class DerivedClass : accessSpecifier BaseClass
{
    // members
};

Example:

class Dog : public Animal
{
};

Advantages of Inheritance

1. Code Reusability – Existing code can be reused.
2. Less Duplication – Avoids writing the same code again.
3. Extensibility – New classes can extend existing functionality.
4. Maintainability – Common functionality can be kept in the base class.
5. Supports OOP Relationships – Represents relationships between classes.

Types of Inheritance

1. Single Inheritance
2. Multiple Inheritance
3. Multilevel Inheritance
4. Hierarchical Inheritance
5. Hybrid Inheritance

Key Idea

Existing Class
      ↓
Base Class
      ↓
Derived Class
      ↓
Reuse / Extend Features

One-Line Definition

Inheritance is the mechanism by which a derived class reuses and extends the features of a base class.


### topic 4

Single Inheritance

Definition

Single Inheritance is a type of inheritance in which one derived class inherits from one base class.

Structure

Base Class
    ↓
Derived Class

Only one parent class → one child class.

Simple Example

Animal
  ↓
 Dog

"Animal" is the Base Class.

"Dog" is the Derived Class.

C++ Example

#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking" << endl;
    }
};

int main()
{
    Dog d;

    d.eat();
    d.bark();

    return 0;
}

Explanation

- "Animal" → Base class.
- "Dog" → Derived class.
- "Dog : public Animal" → "Dog" inherits from "Animal".
- "eat()" → Function inherited from "Animal".
- "bark()" → Function defined in "Dog".
- "d.eat()" → Calls the inherited function.
- "d.bark()" → Calls the derived class function.

Syntax

class DerivedClass : public BaseClass
{
    // members
};

Advantages

1. Code reusability.
2. Reduces duplicate code.
3. Easy to understand.
4. Allows the derived class to extend the base class functionality.

Key Idea

One Base Class
      ↓
One Derived Class

One-Line Definition

Single Inheritance is the inheritance of one base class by one derived class.

### topic 5

Multiple Inheritance

Definition

Multiple Inheritance is a type of inheritance in which one derived class inherits from two or more base classes.

Structure

Base Class 1 ──┐
               ├──→ Derived Class
Base Class 2 ──┘

Simple Example

      Father        Mother
         ↓            ↓
          \          /
            Child

The "Child" class inherits features from both "Father" and "Mother".

C++ Example

#include <iostream>
using namespace std;

class Father
{
public:
    void driving()
    {
        cout << "Driving" << endl;
    }
};

class Mother
{
public:
    void cooking()
    {
        cout << "Cooking" << endl;
    }
};

class Child : public Father, public Mother
{
};

int main()
{
    Child c;

    c.driving();
    c.cooking();

    return 0;
}

Explanation

- "Father" → First Base Class.
- "Mother" → Second Base Class.
- "Child" → Derived Class.
- "Child : public Father, public Mother" → "Child" inherits from both classes.
- "driving()" → Inherited from "Father".
- "cooking()" → Inherited from "Mother".
- "c.driving()" → Calls the inherited "Father" function.
- "c.cooking()" → Calls the inherited "Mother" function.

Syntax

class DerivedClass : public BaseClass1, public BaseClass2
{
    // members
};

Advantages

1. Allows a class to reuse features from multiple classes.
2. Combines functionality from different classes.
3. Reduces duplicate code.
4. Useful when a class naturally needs features from multiple sources.

Important Point

Multiple Inheritance can lead to the Diamond Problem when the same base class is inherited through multiple paths.

The Diamond Problem and Virtual Inheritance will be discussed separately.

Key Idea

Two or More Base Classes
          ↓
    One Derived Class

One-Line Definition

Multiple Inheritance is a type of inheritance in which one derived class inherits from two or more base classes.


### topic 6

Multilevel Inheritance

Definition

Multilevel Inheritance is a type of inheritance in which a derived class becomes the base class for another class, creating a chain of inheritance.

Structure

Base Class
    ↓
Derived Class
    ↓
Further Derived Class

Simple Example

Person
  ↓
Employee
  ↓
Manager

- "Person" → Base class
- "Employee" → Derived class of "Person"
- "Manager" → Derived class of "Employee"

C++ Example

#include <iostream>
using namespace std;

class Person
{
public:
    void speak()
    {
        cout << "Person can speak" << endl;
    }
};

class Employee : public Person
{
public:
    void work()
    {
        cout << "Employee is working" << endl;
    }
};

class Manager : public Employee
{
public:
    void manage()
    {
        cout << "Manager is managing" << endl;
    }
};

int main()
{
    Manager m;

    m.speak();
    m.work();
    m.manage();

    return 0;
}

Explanation

- "Person" → Base class.
- "Employee" → Inherits from "Person".
- "Manager" → Inherits from "Employee".
- "speak()" → Comes from "Person".
- "work()" → Comes from "Employee".
- "manage()" → Belongs to "Manager".

The "Manager" object can access all accessible inherited functions:

m.speak();
m.work();
m.manage();

Inheritance Chain

Person
  ↓
Employee
  ↓
Manager

Advantages

1. Provides code reusability.
2. Creates a clear inheritance hierarchy.
3. Allows each level to add new functionality.
4. Reduces duplicate code.

Key Idea

Base Class
    ↓
Derived Class
    ↓
Another Derived Class

One-Line Definition

Multilevel Inheritance is a type of inheritance in which inheritance occurs through multiple levels, forming a chain of classes.

### topic 7


Hierarchical Inheritance

Definition

Hierarchical Inheritance is a type of inheritance in which multiple derived classes inherit from a single base class.

Structure

          Base Class
          /       \
         ↓         ↓
    Derived 1   Derived 2

It represents a one parent → many children relationship.

Simple Example

          Animal
         /      \
        Dog     Cat

- "Animal" → Base class
- "Dog" → Derived class
- "Cat" → Derived class

Both "Dog" and "Cat" inherit common features from "Animal".

C++ Example

#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking" << endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat is meowing" << endl;
    }
};

int main()
{
    Dog d;
    Cat c;

    d.eat();
    d.bark();

    c.eat();
    c.meow();

    return 0;
}

Explanation

- "Animal" → Base class.
- "Dog" → Inherits from "Animal".
- "Cat" → Inherits from "Animal".
- "eat()" → Common function inherited by both "Dog" and "Cat".
- "bark()" → Function belonging to "Dog".
- "meow()" → Function belonging to "Cat".

Therefore:

d.eat();
c.eat();

Both objects can access "eat()" because it is inherited from "Animal".

Advantages

1. Reuses common functionality.
2. Reduces duplicate code.
3. Allows different derived classes to have their own functionality.
4. Makes class relationships easier to organize.

Key Idea

          One Base Class
             /     \
            ↓       ↓
      Derived 1   Derived 2

One-Line Definition

Hierarchical Inheritance is a type of inheritance in which multiple derived classes inherit from a single base class.

### topic 8

Hybrid Inheritance

Definition

Hybrid Inheritance is a type of inheritance that combines two or more types of inheritance.

It is a combination of different inheritance structures such as:

- Hierarchical Inheritance
- Multiple Inheritance
- Multilevel Inheritance

Structure

Example of Hierarchical + Multiple Inheritance:

          A
        /   \
       B     C
        \   /
          D

Here:

- "A → B" and "A → C" → Hierarchical Inheritance
- "B + C → D" → Multiple Inheritance
- Combination → Hybrid Inheritance

C++ Example

#include <iostream>
using namespace std;

class A
{
public:
    void showA()
    {
        cout << "Class A" << endl;
    }
};

class B : virtual public A
{
public:
    void showB()
    {
        cout << "Class B" << endl;
    }
};

class C : virtual public A
{
public:
    void showC()
    {
        cout << "Class C" << endl;
    }
};

class D : public B, public C
{
public:
    void showD()
    {
        cout << "Class D" << endl;
    }
};

int main()
{
    D obj;

    obj.showA();
    obj.showB();
    obj.showC();
    obj.showD();

    return 0;
}

Explanation

- "A" → Base class.
- "B" and "C" → Derived classes of "A".
- "D" → Inherits from both "B" and "C".
- "A → B" and "A → C" → Hierarchical inheritance.
- "B + C → D" → Multiple inheritance.
- The combination forms Hybrid Inheritance.
- "virtual" inheritance helps avoid duplicate copies of "A" in "D".

Structure

             A
           /   \
          B     C
           \   /
             D

Advantages

1. Combines different inheritance types.
2. Allows complex class relationships.
3. Provides code reusability.
4. Allows functionality from multiple inheritance paths.

Important Point

Hybrid inheritance can lead to the Diamond Problem.

Virtual Inheritance can be used to solve this problem.

Key Idea

Two or More Inheritance Types
            ↓
     Hybrid Inheritance

One-Line Definition

Hybrid Inheritance is the combination of two or more types of inheritance in a single inheritance structure.


### topic 9

Polymorphism

Definition

Polymorphism is an OOP concept that means “one name, multiple forms.”

The same function, interface, or operation can behave differently in different situations.

Meaning

- Poly → Many
- Morphism → Forms

Therefore:

Polymorphism = One thing/name with multiple forms or behaviors.

Simple Example

Suppose we have a "draw()" operation:

draw()
  ├── Circle → Draw Circle
  ├── Rectangle → Draw Rectangle
  └── Triangle → Draw Triangle

The name "draw()" is the same, but the behavior can be different.

Types of Polymorphism

             Polymorphism
                  │
        ┌─────────┴─────────┐
        ↓                   ↓
 Compile-Time           Runtime
 Polymorphism           Polymorphism

1. Compile-Time Polymorphism

The compiler determines which function or operation should be used during compilation.

Common examples:

- Function Overloading
- Operator Overloading

Example:

void add(int a, int b);
void add(double a, double b);

The same function name "add()" has different parameter types.

2. Runtime Polymorphism

The appropriate overridden function is determined at runtime.

Commonly achieved using:

- Function Overriding
- Virtual Functions

Example structure:

Animal
   ↓
  Dog

A derived class such as "Dog" can provide its own implementation of a function defined in "Animal".

Why Polymorphism?

1. Allows one interface to represent different behaviors.
2. Makes code more flexible.
3. Supports code reusability.
4. Makes OOP programs easier to design and maintain.
5. Allows different objects to be handled through a common interface.

Key Idea

One Name / Interface
        ↓
Different Behaviors

One-Line Definition

Polymorphism is the ability of one name, interface, or operation to have multiple forms or behaviors.

### topic 10

Compile-Time Polymorphism

Definition

Compile-Time Polymorphism is a type of polymorphism in which the compiler determines which function or operation to use during compilation.

It is also called Static Polymorphism.

Simple Example

             add()
              │
       ┌──────┴──────┐
       ↓             ↓
   int, int      double, double
       ↓             ↓
  add(int,int)  add(double,double)

The function name is the same, but the parameters are different.

The compiler selects the appropriate function based on the arguments.

Main Types

Compile-Time Polymorphism is commonly achieved using:

1. Function Overloading
2. Operator Overloading

1. Function Overloading

Function overloading means having multiple functions with the same name but different parameter lists.

Example

void add(int a, int b)
{
    cout << a + b;
}

void add(double a, double b)
{
    cout << a + b;
}

Function calls:

add(10, 20);       // Calls int version
add(10.5, 20.5);   // Calls double version

The compiler selects the correct function based on the arguments.

2. Operator Overloading

Operator overloading allows operators to have a specific meaning for user-defined types such as classes.

For example:

+  → Addition for numbers
+  → Can be defined for objects

The behavior of an operator can be defined according to the requirements of a class.

Working

Function / Operator Call
          ↓
Compiler checks arguments
          ↓
Finds matching function/operator
          ↓
Decision made during compilation

Advantages

1. Faster decision because selection happens at compile time.
2. Supports function overloading.
3. Supports operator overloading.
4. Improves code readability.
5. Allows the same function name to perform different tasks.

Key Idea

Same Name / Operator
        ↓
Different Parameters / Forms
        ↓
Compiler Selects
        ↓
Compile-Time Polymorphism

One-Line Definition

Compile-Time Polymorphism is polymorphism in which the compiler determines the appropriate function or operation during compilation.
