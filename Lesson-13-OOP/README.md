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
