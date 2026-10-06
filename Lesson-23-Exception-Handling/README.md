# Lesson 23 – Exception Handling

## Exception Handling

- Try
- Catch
- Throw
- Multiple Catch
- Catch All
- Nested Exception
- Exception Specification
- Stack Unwinding
- User Defined Exceptions

## Standard Exceptions

- std::exception
- runtime_error
- logic_error
- out_of_range
- bad_alloc


### topic 1

Try

- "try" is a C++ keyword used for exception handling.
- The "try" block contains code that may cause an exception.
- If an exception occurs, it can be handled by a "catch" block.
- A "try" block is followed by one or more "catch" blocks.

Syntax

try {
    // Code that may cause an exception
}
catch (...) {
    // Handle the exception
}

Example

#include <iostream>
using namespace std;

int main() {
    try {
        int age = -5;

        if (age < 0) {
            throw age;
        }

        cout << "Valid age";
    }
    catch (int x) {
        cout << "Invalid age: " << x;
    }

    return 0;
}

Output

Invalid age: -5

How It Works

- "try" → Contains the code that may cause an exception.
- "throw" → Sends the exception.
- "catch" → Handles the exception.

Flow

try
 ↓
Exception occurs
 ↓
throw
 ↓
catch
 ↓
Exception handled

Important Points

- "try" is used as part of C++ exception handling.
- The risky code is placed inside the "try" block.
- A "try" block must be followed by at least one "catch" block.

Key Point

"try" = Contains code that may cause an exception and allows that exception to be handled.


### topic 2

Catch

- "catch" is a C++ keyword used for handling exceptions.
- A "catch" block handles an exception thrown from a "try" block.
- The type of the "catch" parameter should match the type of the thrown exception.
- A "try" block can have multiple "catch" blocks.

Syntax

try {
    // Code that may cause an exception
}
catch (type variable) {
    // Handle the exception
}

Example

#include <iostream>
using namespace std;

int main() {
    try {
        throw 10;
    }
    catch (int x) {
        cout << "Exception: " << x;
    }

    return 0;
}

Output

Exception: 10

How It Works

try
 ↓
throw 10
 ↓
catch(int x)
 ↓
Exception handled

- "try" → Contains risky code.
- "throw" → Sends the exception.
- "catch" → Receives and handles the exception.

Matching Exception Type

throw 10;

The thrown value is an "int", so:

catch (int x)

can handle it.

Important Points

- "catch" must be associated with a "try" block.
- The "catch" parameter can receive the thrown exception.
- Multiple "catch" blocks can handle different exception types.
- If no matching "catch" is found, the exception is not handled by that "try" statement.

Key Point

"catch" = Catches and handles an exception thrown from a "try" block.


### topic 3

Throw

- "throw" is a C++ keyword used to generate and send an exception.
- It is used when an error or unexpected situation occurs.
- The exception is sent to a matching "catch" block.
- When "throw" executes, normal execution of the current "try" block stops.

Syntax

throw value;

Example

#include <iostream>
using namespace std;

int main() {
    int age = -5;

    try {
        if (age < 0) {
            throw age;
        }

        cout << "Valid age";
    }
    catch (int x) {
        cout << "Invalid age: " << x;
    }

    return 0;
}

Output

Invalid age: -5

How It Works

try
 ↓
Condition checked
 ↓
throw age
 ↓
Exception sent
 ↓
catch(int x)
 ↓
Exception handled

Types of Values That Can Be Thrown

throw 10;          // int
throw 3.14;        // double
throw "Error";     // string literal

Exception objects can also be thrown:

throw runtime_error("File not found");

Important Points

- "throw" sends an exception.
- A matching "catch" block receives the exception.
- After "throw", the remaining statements in that "try" block are skipped.
- "throw" can be used to report errors explicitly.

Key Point

"throw" = Generates and sends an exception to a matching "catch" block.


### topic 4

Multiple Catch

- Multiple catch means using more than one "catch" block with a single "try" block.
- Each "catch" block can handle a different type of exception.
- When an exception is thrown, C++ checks the "catch" blocks in order.
- Only the first matching "catch" block is executed.

Syntax

try {
    // Code that may cause an exception
}
catch (int x) {
    // Handle int exception
}
catch (double x) {
    // Handle double exception
}
catch (string x) {
    // Handle string exception
}

Example

#include <iostream>
using namespace std;

int main() {
    try {
        throw 10;
    }
    catch (int x) {
        cout << "Integer exception: " << x;
    }
    catch (double x) {
        cout << "Double exception: " << x;
    }

    return 0;
}

Output

Integer exception: 10

How It Works

try
 ↓
throw 10
 ↓
catch(int x) → MATCH
 ↓
Exception handled

The other "catch" blocks are skipped.

Different Exception Types

try {
    // Code
}
catch (int x) {
    // Integer exception
}
catch (double x) {
    // Double exception
}
catch (const char* msg) {
    // String literal exception
}

Important Points

- A single "try" block can have multiple "catch" blocks.
- Each "catch" can handle a different exception type.
- "catch" blocks are checked from top to bottom.
- Only the first matching handler executes.
- More specific exception handlers should generally be placed before broader handlers.

Key Point

Multiple Catch = Using multiple "catch" blocks to handle different types of exceptions.


### topic 5

Catch All

- Catch All is a "catch" block that can handle any type of exception.
- It is written using three dots: "...".
- It is useful when the exact type of exception is unknown or when we want a general exception handler.

Syntax

catch (...) {
    // Handle any exception
}

Example

#include <iostream>
using namespace std;

int main() {
    try {
        throw 10;
    }
    catch (...) {
        cout << "Exception caught";
    }

    return 0;
}

Output

Exception caught

Here, "throw 10" throws an "int", and "catch(...)" catches it.

With Multiple Catch

try {
    throw 10;
}
catch (int x) {
    cout << "Integer exception";
}
catch (...) {
    cout << "Some other exception";
}

- "catch(int x)" handles an "int" exception.
- "catch(...)" handles exceptions that were not matched by the previous handlers.

Important Points

- "catch(...)" can catch any type of exception.
- It does not provide a variable containing the thrown value.
- "catch(...)" should generally be placed last.
- It is useful as a general or fallback exception handler.

Key Point

"catch(...)" = Catches any type of exception.


### topic 6

Nested Exception

- Nested exception handling means placing a "try-catch" block inside another "try" or "catch" block.
- It allows exceptions to be handled at different levels.
- An inner "catch" can handle an exception or rethrow it to an outer "catch".

Example

#include <iostream>
using namespace std;

int main() {
    try {
        try {
            throw 10;
        }
        catch (int x) {
            cout << "Inner catch\n";
            throw;
        }
    }
    catch (int x) {
        cout << "Outer catch";
    }

    return 0;
}

Output

Inner catch
Outer catch

How It Works

Outer try
   ↓
Inner try
   ↓
throw 10
   ↓
Inner catch
   ↓
throw;
   ↓
Outer catch

- Inner "try" throws the exception.
- Inner "catch" catches it first.
- "throw;" rethrows the same exception.
- Outer "catch" receives and handles the rethrown exception.

Rethrowing an Exception

catch (int x) {
    cout << "Inner catch";
    throw;
}

- "throw;" without a value means rethrow the currently handled exception.
- The exception can then be handled by an outer "catch".

Important Points

- A "try-catch" block can be nested inside another "try-catch".
- Inner handlers get the first opportunity to handle an exception.
- "throw;" can rethrow the current exception.
- The outer "catch" can handle a rethrown exception.

Key Point

Nested Exception = Using exception-handling blocks inside other exception-handling blocks.


### topic 7

Exception Specification

- Exception specification describes whether a function can throw exceptions.
- In modern C++, the main exception specification is "noexcept".
- "noexcept" tells the compiler that a function is not expected to throw exceptions.

Syntax

void function() noexcept;

Example

#include <iostream>
using namespace std;

void display() noexcept {
    cout << "Hello";
}

int main() {
    display();

    return 0;
}

Output

Hello

"noexcept(false)"

A function can explicitly specify that it may throw exceptions.

void test() noexcept(false) {
    throw 10;
}

- "noexcept" → Function promises not to throw.
- "noexcept(false)" → Function may throw.

Older Exception Specification

Older C++ versions allowed dynamic exception specifications:

void test() throw(int);

This specified that the function could throw an "int".

However, dynamic exception specifications were:

- Deprecated in C++11
- Removed in C++17

Modern C++ uses "noexcept" instead.

Important Points

- "noexcept" is used to specify that a function should not throw exceptions.
- "noexcept(false)" means the function may throw.
- "noexcept" is important in modern C++.
- Old "throw(type)" exception specifications should not be used in modern C++.

Key Point

Exception Specification = Specifies whether a function can throw exceptions; modern C++ mainly uses "noexcept".


### topic 8

Stack Unwinding

- Stack unwinding is the process of removing function call frames from the stack when an exception is thrown.
- During stack unwinding, C++ searches for a matching "catch" block.
- Local objects are destroyed when their scopes are exited.
- Their destructors are called during this cleanup process.

Example

#include <iostream>
using namespace std;

void function2() {
    int x = 10;
    throw 100;
}

void function1() {
    int y = 20;
    function2();
}

int main() {
    try {
        function1();
    }
    catch (int x) {
        cout << "Exception caught: " << x;
    }

    return 0;
}

Output

Exception caught: 100

How It Works

main()
 ↓
function1()
 ↓
function2()
 ↓
throw 100
 ↓
function2() stack frame unwound
 ↓
function1() stack frame unwound
 ↓
main() catch
 ↓
Exception handled

Object Destruction

class Test {
public:
    ~Test() {
        cout << "Destructor called\n";
    }
};

void test() {
    Test obj;
    throw 10;
}

When "throw" occurs, "obj" goes out of scope during stack unwinding, so its destructor is called.

Important Points

- Stack unwinding starts when an exception is thrown.
- C++ searches for a matching "catch" block.
- Local objects are destroyed as their scopes are exited.
- Destructors are called during stack unwinding.
- If no matching handler is found, "std::terminate()" is called.

Key Point

Stack Unwinding = Cleaning up the call stack and destroying local objects while searching for a matching "catch".


### topic 9

User Defined Exceptions

- User-defined exceptions are custom exception types created by the programmer.
- They are used to represent specific errors in a program.
- We can create a custom exception using a class or struct.
- The custom exception object can be thrown using "throw".
- A matching "catch" block handles the custom exception.

Example

#include <iostream>
using namespace std;

class InvalidAge {
public:
    const char* message() {
        return "Age cannot be negative";
    }
};

int main() {
    try {
        int age = -5;

        if (age < 0) {
            throw InvalidAge();
        }
    }
    catch (InvalidAge& e) {
        cout << e.message();
    }

    return 0;
}

Output

Age cannot be negative

How It Works

Create custom exception class
        ↓
Condition occurs
        ↓
throw InvalidAge()
        ↓
catch(InvalidAge& e)
        ↓
Exception handled

Custom Exception Class

class InvalidAge {
public:
    const char* message() {
        return "Age cannot be negative";
    }
};

This class represents our custom exception.

Throwing the Exception

throw InvalidAge();

This creates and throws an object of the "InvalidAge" class.

Catching the Exception

catch (InvalidAge& e) {
    cout << e.message();
}

This catches the custom exception object.

Important Points

- User-defined exceptions allow programmers to create meaningful error types.
- They can contain custom messages and additional data.
- They are thrown using "throw".
- They are handled using a matching "catch".

Key Point

User-defined exception = A custom exception class created by the programmer to represent a specific error.


### topic 10

Standard Exception

- Standard exceptions are predefined exception classes provided by the C++ Standard Library.
- They are used to handle common errors in C++ programs.
- Instead of creating a custom exception, we can use standard exception classes.
- Most standard exceptions are derived from "std::exception".

Common Standard Exceptions

std::exception
runtime_error
logic_error
out_of_range
bad_alloc

Example

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        throw runtime_error("Something went wrong");
    }
    catch (const runtime_error& e) {
        cout << e.what();
    }

    return 0;
}

Output

Something went wrong

"what()"

e.what()

- "what()" is a member function used to get a description of the exception.
- It returns a C-style string ("const char*").

Catching Standard Exceptions

catch (const exception& e) {
    cout << e.what();
}

This can catch exceptions derived from "std::exception".

Important Points

- Standard exceptions are provided by the C++ Standard Library.
- They are useful for handling common programming errors.
- Most standard exceptions inherit from "std::exception".
- Use "const" reference when catching exception objects.
- "what()" provides an error description.

Headers

#include <exception>
#include <stdexcept>

Key Point

Standard Exception = A predefined exception class provided by the C++ Standard Library for handling common errors.


### topic 11

std::exception

- "std::exception" is the base class for many standard exceptions in C++.
- It is provided by the C++ Standard Library.
- Standard exception classes such as "runtime_error", "logic_error", "out_of_range", and "bad_alloc" are derived from "std::exception".
- It can be used to catch different standard exceptions using one general "catch" block.

Example

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        throw runtime_error("File error");
    }
    catch (const exception& e) {
        cout << e.what();
    }

    return 0;
}

Output

File error

"what()"

e.what()

- "what()" returns a description of the exception.
- It is commonly used to display the error message.

Important Points

- "std::exception" is a base exception class.
- Many standard exceptions inherit from it.
- It allows us to catch different standard exceptions using one catch block.
- Usually caught using a const reference.

Key Point

"std::exception" = Base class for many standard C++ exceptions.
