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
