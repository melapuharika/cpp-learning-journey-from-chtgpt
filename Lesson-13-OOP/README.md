Lesson 13 — OOP

Topics

1. OOP
2. Class and Object
3. Class
4. Object
5. Members
6. Methods
7. Access Specifiers
8. Public
9. Private
10. Protected
11. Constructors
12. Default Constructors
13. Parameterized Constructors
14. Copy Constructors
15. Move Constructor
16. Constructor Overloading
17. Delegating Constructor
18. Constructor Initialization List
19. Destructor
20. Destructor Order
21. Virtual Destructor


### topic 1

OOP — Object-Oriented Programming

Definition

OOP stands for Object-Oriented Programming.

It is a programming approach where programs are designed using classes and objects.

Example

class Car {
public:
    string color;

    void start() {
        cout << "Car started";
    }
};

Here:

- "Car" → Class
- "color" → Data member
- "start()" → Method
- Object can be created from the class.

Main Features

1. Encapsulation – Data and methods are combined into one unit.
2. Abstraction – Unnecessary details are hidden.
3. Inheritance – Existing class features can be reused.
4. Polymorphism – Same interface can behave in different ways.

POP vs OOP

POP → Functions / Procedures

OOP → Classes / Objects

Remember

«OOP = Object + Data + Methods»


### topic 2

Class and Object in C++

Class

A class is a blueprint or template used to create objects.

It defines the data and methods that its objects can have.

Example

class Car {
public:
    string color;

    void start() {
        cout << "Car started";
    }
};

Here:

- "Car" → Class
- "color" → Data member
- "start()" → Method

---

Object

An object is an instance of a class.

Objects are created using the class.

Car myCar;

Here, "myCar" is an object of the "Car" class.

Multiple Objects

Car myCar;
Car yourCar;

One class can create multiple objects.

Easy Example

Class → Blueprint

Object → Actual thing created from the blueprint

Remember

«Class = Design / Blueprint»

«Object = Instance of a class»


## topic 3 

Class in C++

Definition

A class is a user-defined data type that acts as a blueprint or template for creating objects.

A class can contain:

- Data Members → store data
- Member Functions / Methods → perform actions

Example

class Car {
public:
    string color;
    int speed;

    void start() {
        cout << "Car started";
    }
};

Here:

- "Car" → Class
- "color", "speed" → Data members
- "start()" → Member function / Method

Creating an Object

Car myCar;

Here, "myCar" is an object of the "Car" class.

Simple Example

Class → Blueprint

Object → Actual instance created from the blueprint

Remember

«Class = Blueprint / Design»

«Class defines Data + Methods»

### topic 4

Object in C++

Definition

An Object is an instance of a class.

- Class → Blueprint / template
- Object → Real instance created from the class

Example

class Car {
public:
    string color;

    void start() {
        cout << "Car started";
    }
};

Car car1;
Car car2;

Here:

- "Car" → Class
- "car1" → Object
- "car2" → Object

Accessing Object Members

We use the dot (".") operator to access an object's data members and methods.

car1.color = "Red";
car1.start();

Multiple Objects

One class can create multiple objects.

Car car1;
Car car2;

car1.color = "Red";
car2.color = "Blue";

Each object can have its own data values.

Remember

Class = Blueprint
Object = Instance of the Class

Object = A real instance created from a class.


### topic 5
Members in C++

Definition

Members are the variables and functions declared inside a class.

There are mainly two types:

1. Data Members → Variables inside a class
2. Member Functions → Functions inside a class

Example

class Car {
public:
    string color;     // Data Member
    int speed;        // Data Member

    void start() {    // Member Function
        cout << "Car started";
    }
};

Data Members

- "color"
- "speed"

These store the data/state of the object.

Member Functions

- "start()"

These define the actions/behavior of the object.

Remember

Members = Data Members + Member Functions

Class
  ↓
Members
 ├── Data Members
 └── Member Functions


### topic 6 
Methods in C++

Definition

A Method is a function defined inside a class.

Methods represent the actions or behavior of an object.

Example

class Car {
public:
    string color;

    void start() {
        cout << "Car started";
    }
};

- "color" → Data Member
- "start()" → Method

Calling a Method

Car car1;

car1.start();

Output:

Car started

The dot (".") operator is used to call a method using an object.

Remember

Data Member → What an object has

Method → What an object does

Method = Function inside a class


### topic 7

Access Specifiers in C++

Definition

Access Specifiers control where the members of a class can be accessed.

C++ has three main access specifiers:

1. "public"
2. "private"
3. "protected"

Example

class Student {
public:
    string name;

private:
    int age;

protected:
    string grade;
};

Access Table

Access Specifier| Class| Outside Class| Derived Class
"public"| ✅| ✅| ✅
"private"| ✅| ❌| ❌
"protected"| ✅| ❌| ✅

Remember

- public → Accessible from anywhere
- private → Accessible only inside the class
- protected → Accessible inside the class and derived classes

Access Specifiers = Rules that control access to class members.


### topic 7

Public in C++

Definition

"public" is an access specifier that allows class members to be accessed from outside the class.

Example

class Student {
public:
    string name;

    void study() {
        cout << "Student is studying";
    }
};

Accessing Public Members

Student s1;

s1.name = "Harika";
s1.study();

"name" and "study()" can be accessed because they are "public".

Important Point

In a C++ "class", members are private by default if no access specifier is written.

Remember

"public" → Members can be accessed from outside the class.
