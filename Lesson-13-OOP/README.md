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


### topic 8

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


### topic 9

Private in C++

Definition

"private" is an access specifier that prevents class members from being accessed directly from outside the class.

Example

class Student {
private:
    int age;
};

Here, "age" is a private member.

Student s1;

s1.age = 20;   // ❌ Error

"age" cannot be accessed directly from outside the class.

Access Inside the Class

Private members can be accessed inside the class.

class Student {
private:
    int age;

public:
    void setAge() {
        age = 20;
    }
};

Remember

"private" → Members can be accessed inside the class but not directly from outside the class.


### topic 10

Protected in C++

Definition

"protected" is an access specifier that allows members to be accessed inside the class and its derived classes.

Example

class Parent {
protected:
    int age;
};

class Child : public Parent {
public:
    void showAge() {
        age = 20;
        cout << age;
    }
};

Here, "age" can be accessed by:

- "Parent" class → ✅
- "Child" (derived class) → ✅
- Outside the class → ❌

Access Table

Access Specifier| Class| Outside Class| Derived Class
"public"| ✅| ✅| ✅
"private"| ✅| ❌| ❌
"protected"| ✅| ❌| ✅

Remember

"protected" → Accessible inside the class and derived classes, but not directly from outside.


### topic 11

Constructors in C++

Definition

A Constructor is a special member function that is automatically called when an object is created.

Example

class Student {
public:
    Student() {
        cout << "Student object created";
    }
};

int main() {
    Student s1;
}

Output

Student object created

When "s1" is created, the constructor "Student()" is automatically called.

Rules

1. Constructor name must be the same as the class name.
2. A constructor has no return type.
3. It is called automatically when an object is created.
4. It is used to initialize an object.

Remember

Constructor → Object creation → Automatic call → Initialization


### topic 13

Default Constructor in C++

Definition

A Default Constructor is a constructor that has no parameters.

It is automatically called when an object is created without arguments.

Example

class Student {
public:
    Student() {
        cout << "Student created";
    }
};

int main() {
    Student s1;
}

Here, "Student()" is a Default Constructor because it has no parameters.

Key Points

- Has no parameters.
- Has no return type.
- Called automatically when an object is created without arguments.
- Used to initialize an object with default values or perform initial setup.

Remember

Default Constructor = Constructor with no parameters.


### topic 14

Parameterized Constructor in C++

Definition

A Parameterized Constructor is a constructor that accepts parameters to initialize an object with specific values.

Example

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {
        name = n;
        age = a;
    }
};

int main() {
    Student s1("Harika", 20);
}

Here:

- "Student(string n, int a)" → Parameterized Constructor
- ""Harika"" → Passed to "n"
- "20" → Passed to "a"

Key Points

- Has one or more parameters.
- Has no return type.
- Called automatically when an object is created with arguments.
- Used to initialize objects with specific values.

Remember

Parameterized Constructor = Constructor that accepts parameters.

### topic 15
Copy Constructor in C++

Definition

A Copy Constructor is a constructor used to create a new object by copying the values of an existing object.

Example

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {
        name = n;
        age = a;
    }

    Student(const Student &s) {
        name = s.name;
        age = s.age;
    }
};

int main() {
    Student s1("Harika", 20);
    Student s2 = s1;
}

Here, "s2" gets the values of "s1".

s1
name = Harika
age  = 20
   ↓ copy
s2
name = Harika
age  = 20

Common Syntax

ClassName(const ClassName &object)

Key Points

- Creates a new object from an existing object.
- Copies the values of the existing object.
- Usually takes a const reference to the same class.
- It is automatically called when an object is initialized from another object.

Remember

Copy Constructor → Existing Object → New Object

### topic 16

Move Constructor in C++

Definition

A Move Constructor creates a new object by moving resources/ownership from an existing object instead of copying them.

Example

class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }

    Student(Student&& s) {
        name = move(s.name);
    }
};

int main() {
    Student s1("Harika");
    Student s2(std::move(s1));
}

Here, the resource from "s1" is moved to "s2".

Syntax

ClassName(ClassName&& object)

"&&" represents an rvalue reference.

Copy vs Move

Copy Constructor| Move Constructor
Copies resources| Moves resources
Can require extra resources| Avoids unnecessary copying
Original remains unchanged| Original is left in a valid but unspecified state

Key Points

- Uses an rvalue reference ("&&").
- Transfers resources/ownership instead of copying them.
- Helps improve performance.
- Commonly used with resource-owning objects.

Remember

Copy → Copy the resource

Move → Transfer the resource/ownership

### topic 17

Constructor Overloading in C++

Definition

Constructor Overloading means having multiple constructors in the same class with different parameter lists.

Example

class Student {
public:

    Student() {
        cout << "Default Constructor";
    }

    Student(string name) {
        cout << "Name: " << name;
    }

    Student(string name, int age) {
        cout << "Name: " << name << ", Age: " << age;
    }
};

Here, the class has three constructors:

Student()
Student(string)
Student(string, int)

Creating Objects

Student s1;
Student s2("Harika");
Student s3("Harika", 20);

The correct constructor is selected based on the arguments passed.

Key Points

- Multiple constructors can exist in one class.
- Constructors must have different parameter lists.
- Helps initialize objects in different ways.

Remember

Constructor Overloading = One Class + Multiple Constructors + Different Parameters


### topic 18

Delegating Constructor in C++

Definition

A Delegating Constructor is a constructor that calls another constructor of the same class to perform initialization.

Example

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {
        name = n;
        age = a;
    }

    Student() : Student("Unknown", 0) {
    }
};

Here:

Student() : Student("Unknown", 0)

The "Student()" constructor delegates its initialization to "Student(string, int)".

Flow

Student()
   ↓
Student("Unknown", 0)
   ↓
name = "Unknown"
age = 0

Key Points

- One constructor calls another constructor in the same class.
- Helps avoid repeating initialization code.
- Uses the constructor initialization list.

Remember

Delegating Constructor → One constructor delegates initialization to another constructor of the same class.


