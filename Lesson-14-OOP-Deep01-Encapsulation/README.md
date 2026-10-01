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


### topic 11

Runtime Polymorphism

Definition

Runtime Polymorphism is a type of polymorphism in which the appropriate overridden function is selected during program execution (runtime).

It is also called Dynamic Polymorphism.

Simple Example

Animal
  ↓
 Dog

"Animal" has a "sound()" function.

"Dog" overrides the "sound()" function with its own implementation.

Animal::sound()
      ↓
Generic sound

Dog::sound()
      ↓
Dog barks

C++ Example

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    Animal* a = new Dog();

    a->sound();

    delete a;

    return 0;
}

Explanation

Base Class

class Animal
{
public:
    virtual void sound()

"virtual" tells C++ that the function can be overridden and should support dynamic dispatch.

Derived Class

class Dog : public Animal
{
public:
    void sound() override

"Dog" provides its own implementation of "sound()".

Important Line

Animal* a = new Dog();

Here:

- "a" → Pointer of type "Animal".
- Actual object → "Dog".

When we call:

a->sound();

the virtual function mechanism selects "Dog::sound()" at runtime.

Why "virtual"?

The "virtual" keyword enables dynamic dispatch for the function.

It allows a base-class pointer or reference to call the overridden function belonging to the actual derived object.

Flow

Base Class Pointer
       ↓
Actual Derived Object
       ↓
Runtime Selection
       ↓
Overridden Function
       ↓
Execution

Characteristics

1. Uses function overriding.
2. Commonly uses virtual functions.
3. Function selection happens at runtime.
4. Supports dynamic dispatch.
5. Works through base-class pointers or references.

Compile-Time vs Runtime Polymorphism

Compile-Time| Runtime
Decision during compilation| Decision during execution
Static polymorphism| Dynamic polymorphism
Function/operator overloading| Function overriding
Does not require virtual functions| Commonly uses virtual functions

Key Idea

Same Function
     ↓
Different Implementations
     ↓
Actual Object Decides at Runtime

One-Line Definition

Runtime Polymorphism is polymorphism in which an overridden function is selected based on the actual object during program execution.


### topic 12

Function Overloading

Definition

Function Overloading is an OOP feature in which multiple functions have the same name but different parameter lists.

It is a form of Compile-Time Polymorphism.

Simple Rule

Same Function Name
        +
Different Parameters
        ↓
Function Overloading

Example

void add(int a, int b)
{
    cout << a + b;
}

void add(double a, double b)
{
    cout << a + b;
}

Both functions have the same name:

add()

But their parameter lists are different:

add(int, int)
add(double, double)

Complete C++ Example

#include <iostream>
using namespace std;

class Calculator
{
public:
    void add(int a, int b)
    {
        cout << "Integer sum: " << a + b << endl;
    }

    void add(double a, double b)
    {
        cout << "Double sum: " << a + b << endl;
    }
};

int main()
{
    Calculator c;

    c.add(10, 20);
    c.add(10.5, 20.5);

    return 0;
}

How It Works

For:

c.add(10, 20);

The arguments are "int, int", so the compiler selects:

add(int, int)

For:

c.add(10.5, 20.5);

The arguments are "double, double", so the compiler selects:

add(double, double)

Valid Ways to Overload

Different Number of Parameters

add(int, int);
add(int, int, int);

Different Parameter Types

add(int, int);
add(double, double);

Different Parameter Order

add(int, double);
add(double, int);

Important Point

Changing only the return type is not enough for function overloading.

Invalid:

int add(int a, int b);

double add(int a, int b);

The parameter lists are the same, so this is not valid function overloading.

Advantages

1. Improves code readability.
2. Allows the same name to perform related operations.
3. Supports compile-time polymorphism.
4. Makes code easier to understand and use.

Key Idea

Same Name
    ↓
Different Parameter Lists
    ↓
Compiler Selects Matching Function

One-Line Definition

Function Overloading is defining multiple functions with the same name but different parameter lists.


### topic 13

Operator Overloading – C++ Notes

1. Definition

Operator Overloading is the process of giving a special meaning to an existing operator for user-defined types such as classes.

In simple words:

«Operator Overloading = Making operators work with objects.»

---

2. Example

Normally:

int a = 10;
int b = 20;

int c = a + b;

Here "+" adds two numbers.

Using operator overloading, we can make "+" work with class objects.

---

3. C++ Example

#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imag;

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }
};

int main() {

    Complex c1(2, 3);
    Complex c2(4, 5);

    Complex c3 = c1 + c2;

    cout << c3.real << " + " << c3.imag << "i";

    return 0;
}

Output

6 + 8i

---

4. How It Works

When we write:

Complex c3 = c1 + c2;

C++ treats it approximately as:

c1.operator+(c2);

The function:

Complex operator+(Complex c)

defines what "+" should do for "Complex" objects.

---

5. Why Operator Overloading?

It makes code easier and more natural to read.

Without operator overloading:

Complex c3 = c1.add(c2);

With operator overloading:

Complex c3 = c1 + c2;

---

6. Operators That Can Be Overloaded

Examples:

+
-
*
/
%
==
!=
<
>
<=
>=
++
--

---

7. Operators That Cannot Be Overloaded

Some operators cannot be overloaded:

::
.
.*
?:
sizeof

---

8. Important Rules

Rule 1

Operator overloading does not create a new operator.

It gives a new meaning to an existing operator for user-defined types.

Rule 2

At least one operand must be a user-defined type such as a class or struct.

Rule 3

Operator precedence cannot be changed.

Rule 4

The number of operands cannot be changed.

---

9. Key Point

Operator Overloading is a type of Compile-Time Polymorphism.

One-Line Definition

«Operator Overloading allows existing C++ operators to work with user-defined objects.»


### topic 14

Function Overriding – C++ Notes

1. Definition

Function Overriding means redefining a function of the base class in the derived class using the same function signature.

«Parent class function → Child class gives its own implementation.»

Function overriding is mainly used for Runtime Polymorphism.

---

2. Simple Example

Animal
  ↓
Dog

"Animal" has:

sound()

"Dog" provides its own version:

sound() → Dog barks

---

3. C++ Example

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {

    Dog d;
    d.sound();

    return 0;
}

Output

Dog barks

---

4. "override" Keyword

void sound() override

"override" tells the compiler that the derived class function is overriding a base class function.

It helps the compiler detect mistakes.

---

5. Function Overriding and Runtime Polymorphism

For runtime polymorphism, the base class function is commonly declared using "virtual".

virtual void sound()

The derived class overrides it:

void sound() override

---

6. Function Overloading vs Function Overriding

Function Overloading| Function Overriding
Usually in the same class| Base and derived classes
Same function name| Same function name
Different parameters| Same function signature
Compile-time polymorphism| Runtime polymorphism
Inheritance not required| Inheritance required

---

7. Important Points

- Function overriding is related to inheritance.
- Base and derived classes have the same function signature.
- "virtual" is commonly used in the base class for runtime polymorphism.
- "override" is used in the derived class.
- It allows a child class to provide its own implementation of a parent function.

One-Line Definition

«Function Overriding is redefining a base class function in a derived class with the same function signature.»


### topic 15

Virtual Function – C++ Notes

1. Definition

A Virtual Function is a base class function that allows the appropriate overridden derived-class function to be selected at runtime.

«Virtual Function → Runtime Polymorphism → Dynamic Function Selection»

---

2. Why Virtual Function?

When a base class pointer points to a derived class object, "virtual" allows the derived class's overridden function to be called.

---

3. C++ Example

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {

    Animal* a = new Dog();

    a->sound();

    delete a;

    return 0;
}

Output

Dog barks

---

4. How It Works

Animal* a = new Dog();

Here:

- "a" is an Animal pointer.
- The actual object is a Dog object.

When we write:

a->sound();

because "sound()" is "virtual", C++ selects:

Dog::sound()

at runtime.

---

5. "virtual" Keyword

Base class:

virtual void sound()

"virtual" tells C++ that the function can be overridden and that runtime function selection should be used.

---

6. "override" Keyword

Derived class:

void sound() override

"override" tells the compiler that the derived class function is overriding a base class virtual function.

It helps detect mistakes.

---

7. Important Points

- Virtual functions are mainly used for Runtime Polymorphism.
- They are declared in the base class using the "virtual" keyword.
- Derived classes can override them.
- Base class pointers/references can call the derived implementation.
- Function selection happens at runtime.
- "override" is recommended when overriding a virtual function.

One-Line Definition

«A virtual function enables runtime polymorphism by allowing a derived class's overridden function to be called through a base class pointer or reference.»


### topic 16

Pure Virtual Function – C++ Notes

1. Definition

A Pure Virtual Function is a virtual function declared with "= 0" that must be implemented by a derived class.

Syntax

virtual void sound() = 0;

«Pure Virtual Function = Child class must implement this function.»

---

2. Example

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {

    Dog d;
    d.sound();

    return 0;
}

Output

Dog barks

---

3. Meaning of "= 0"

virtual void sound() = 0;

The "= 0" makes the function a pure virtual function.

It means the base class does not provide a normal implementation, and derived classes are expected to implement it.

---

4. Normal Virtual vs Pure Virtual Function

Normal Virtual Function

virtual void sound() {
    cout << "Animal sound";
}

- Has an implementation.
- Derived class can override it.

Pure Virtual Function

virtual void sound() = 0;

- Has no normal implementation in the base class.
- Derived class must implement it to become a concrete class.

---

5. Abstract Class

A class containing at least one pure virtual function becomes an Abstract Class.

class Animal {
public:
    virtual void sound() = 0;
};

"Animal" is an abstract class.

We cannot directly create its object:

Animal a;   // Not allowed

But we can create an object of a derived class that implements the pure virtual function:

Dog d;

---

6. Important Points

- Pure virtual functions use "= 0".
- They are declared using the "virtual" keyword.
- They are mainly used to define a common interface/rule for derived classes.
- A class containing a pure virtual function is an abstract class.
- An abstract class cannot be instantiated directly.
- Derived classes must implement all inherited pure virtual functions to become concrete.

One-Line Definition

«A pure virtual function is a virtual function declared with "= 0" that requires derived classes to provide an implementation.»

### topic 17

Abstract Class – C++ Notes

1. Definition

An Abstract Class is a class that cannot be instantiated directly and is mainly used as a base class for derived classes.

«Abstract Class = Blueprint / Rule Book for Derived Classes»

---

2. Example

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {

    Dog d;
    Cat c;

    d.sound();
    c.sound();

    return 0;
}

Output

Dog barks
Cat meows

---

3. Why is "Animal" an Abstract Class?

Because it contains a pure virtual function:

virtual void sound() = 0;

Therefore, we cannot create an object directly:

Animal a;   // Not allowed

But we can create objects of derived classes:

Dog d;
Cat c;

---

4. Why Use Abstract Classes?

Abstract classes are useful when multiple derived classes must follow a common rule.

Example:

Shape
 ├── Circle
 ├── Rectangle
 └── Triangle

Every shape should have an "area()" function.

So the abstract class can define:

virtual void area() = 0;

Each derived class provides its own implementation.

---

5. What Can an Abstract Class Contain?

An abstract class can contain:

- Normal functions
- Data members
- Constructors
- Virtual functions
- Pure virtual functions

Example:

class Animal {
public:

    void eat() {
        cout << "Animal eats" << endl;
    }

    virtual void sound() = 0;
};

Here:

- "eat()" → Normal function
- "sound()" → Pure virtual function

---

6. Abstract Class vs Normal Class

Normal Class| Abstract Class
Object can be created| Direct object cannot be created
Pure virtual function is not required| Contains at least one pure virtual function
Can be used directly| Mainly used as a base class
Can provide complete implementation| Can define common rules for derived classes

---

7. Important Points

- An abstract class cannot be instantiated directly.
- It is mainly used as a base class.
- It contains at least one pure virtual function.
- Derived classes can inherit from it.
- Derived classes must implement inherited pure virtual functions to become concrete classes.
- Abstract classes can contain both normal and virtual functions.

One-Line Definition

«An Abstract Class is a class that cannot be instantiated directly and is used as a base class to define common rules for derived classes.»


### topic 18

Interface-Like Classes – C++ Notes

1. Definition

C++ does not have a separate "interface" keyword like Java.

Instead, an abstract class containing mostly or entirely pure virtual functions can be used as an interface-like class.

«Interface-Like Class = A class that defines rules/contract that derived classes must follow.»

---

2. Example

#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay() = 0;
};

class UPI : public Payment {
public:
    void pay() override {
        cout << "Payment using UPI" << endl;
    }
};

class CreditCard : public Payment {
public:
    void pay() override {
        cout << "Payment using Credit Card" << endl;
    }
};

int main() {

    UPI u;
    CreditCard c;

    u.pay();
    c.pay();

    return 0;
}

Output

Payment using UPI
Payment using Credit Card

---

3. How It Works

The base class defines a rule:

virtual void pay() = 0;

It means:

«Every derived payment class must provide its own "pay()" implementation.»

UPI:

void pay() override

provides the UPI implementation.

Credit Card:

void pay() override

provides the Credit Card implementation.

---

4. Why Use Interface-Like Classes?

They are useful when different classes should follow the same set of rules but have different implementations.

Example:

Payment
 ├── UPI
 ├── CreditCard
 └── NetBanking

All classes must have:

pay()

But each class can implement it differently.

---

5. Abstract Class vs Interface-Like Class

Abstract Class| Interface-Like Class
Can contain normal functions| Usually contains mostly/all pure virtual functions
Can contain data members| Mainly defines a contract
Can contain virtual functions| Mainly uses pure virtual functions
Can provide some implementation| Derived classes provide the implementations

---

6. Important Points

- C++ does not have a separate "interface" keyword.
- Interface-like behavior is achieved using abstract classes and pure virtual functions.
- It defines a common contract for derived classes.
- It cannot be instantiated directly.
- Derived classes implement the required functions.
- It is useful for achieving abstraction and runtime polymorphism.

One-Line Definition

«An Interface-Like Class in C++ is an abstract class mainly made of pure virtual functions that defines a common contract for derived classes.»


### topic 19

Virtual Table (vtable) – C++ Notes

1. Definition

A Virtual Table (vtable) is a compiler-generated table commonly used to support virtual function dispatch and runtime polymorphism.

«vtable = A table used to help find the correct virtual function at runtime.»

---

2. Example

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {

    Animal* a = new Dog();

    a->sound();

    delete a;

    return 0;
}

Output

Dog barks

---

3. Conceptual Working

When we write:

Animal* a = new Dog();

- Pointer type → "Animal*"
- Actual object → "Dog"

When we call:

a->sound();

Because "sound()" is virtual, runtime dispatch is used.

Conceptually:

Animal pointer
      ↓
Dog object
      ↓
vptr
      ↓
Dog's vtable
      ↓
Dog::sound()

---

4. vtable and Runtime Polymorphism

The relationship can be understood as:

Virtual Function
      ↓
Runtime Polymorphism
      ↓
Dynamic Dispatch
      ↓
vtable/vptr implementation

---

5. Important Points

- vtable is usually created/managed by the compiler.
- It is not a C++ keyword.
- Programmers normally do not create or access the vtable directly.
- It is commonly used to implement virtual function dispatch.
- It helps select the correct overridden function at runtime.
- The exact implementation of vtable is compiler-dependent and is not specified by the C++ standard.

One-Line Definition

«A vtable is a compiler-generated table commonly used to support virtual function dispatch and runtime polymorphism.»


### topic 20

Virtual Pointer (vptr) – C++ Notes

1. Definition

vptr (Virtual Pointer) is a hidden/internal pointer commonly used by C++ implementations to connect an object with its virtual function table.

«vptr = A hidden pointer commonly used to point to the object's class vtable.»

---

2. Important Note

"vptr" is not a C++ keyword.

It is a common implementation technique used by compilers to support virtual function dispatch.

The C++ standard does not specify a particular vptr/vtable implementation.

---

3. Example

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {

    Animal* a = new Dog();

    a->sound();

    delete a;

    return 0;
}

Output

Dog barks

---

4. Conceptual Working

When we write:

Animal* a = new Dog();

the actual object is a "Dog".

Conceptually:

Dog Object
┌───────────────┐
│     vptr ─────────────┐
│   other data          │
└───────────────┘       ↓
                   Dog's vtable
                   ┌───────────────┐
                   │ Dog::sound()  │
                   └───────────────┘

Then:

a->sound();

can use the virtual-dispatch mechanism to select:

Dog::sound()

at runtime.

---

5. vptr vs vtable

vptr| vtable
Pointer| Table
Associated with an object in common implementations| Associated with virtual-function dispatch for a class
Commonly points/references to a vtable| Contains information used for virtual function dispatch
Helps locate virtual-function information| Helps select the appropriate virtual function

---

6. Important Points

- "vptr" is not a C++ keyword.
- It is a common compiler implementation detail.
- It is commonly associated with objects of classes that use virtual functions.
- It works together with the vtable in implementations that use this mechanism.
- It supports runtime polymorphism and dynamic dispatch.
- The exact implementation is compiler-dependent.

One-Line Definition

«vptr is a hidden implementation detail commonly used to connect an object to its virtual function table for runtime dispatch.»


### topic 21

Multiple Inheritance – Advanced – C++ Notes

1. Definition

Multiple Inheritance means a derived class inherits from two or more base classes.

Father ──┐
         ├── Child
Mother ──┘

Syntax

class Child : public Father, public Mother {
};

---

2. Simple Example

#include <iostream>
using namespace std;

class Father {
public:
    void fatherSkill() {
        cout << "Father's skill" << endl;
    }
};

class Mother {
public:
    void motherSkill() {
        cout << "Mother's skill" << endl;
    }
};

class Child : public Father, public Mother {
public:
    void childSkill() {
        cout << "Child's skill" << endl;
    }
};

int main() {

    Child c;

    c.fatherSkill();
    c.motherSkill();
    c.childSkill();

    return 0;
}

Output

Father's skill
Mother's skill
Child's skill

---

3. Ambiguity in Multiple Inheritance

If two base classes have functions with the same name:

class Father {
public:
    void show() {
        cout << "Father" << endl;
    }
};

class Mother {
public:
    void show() {
        cout << "Mother" << endl;
    }
};

And:

class Child : public Father, public Mother {
};

Then:

Child c;
c.show();

causes ambiguity because C++ does not know which "show()" function should be called.

---

4. Solving Ambiguity

Use the scope resolution operator "::":

c.Father::show();

or:

c.Mother::show();

This tells C++ exactly which base-class function to call.

---

5. Diamond Problem

Multiple inheritance can also create the Diamond Problem.

        A
       / \
      B   C
       \ /
        D

Here:

- "B" inherits from "A".
- "C" inherits from "A".
- "D" inherits from both "B" and "C".

As a result, "D" can receive two copies of "A".

This can cause ambiguity and duplicate base-class data.

---

6. Important Points

- Multiple inheritance allows one class to inherit from multiple base classes.
- Members from all accessible base classes can be used by the derived class.
- Same-named members in different base classes can cause ambiguity.
- Scope resolution "::" can be used to specify the required base class.
- Multiple inheritance can lead to the Diamond Problem.
- Virtual inheritance is used to solve the repeated common-base-class problem.

One-Line Definition

«Advanced Multiple Inheritance deals with issues such as ambiguity and repeated base-class members when a class inherits from multiple base classes.»
