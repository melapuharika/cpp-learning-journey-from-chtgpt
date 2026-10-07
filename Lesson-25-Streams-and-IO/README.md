### Lesson 25 – Streams and I/O

1. Streams
2. iostream
3. istream
4. ostream
5. String Stream
6. istringstream
7. ostringstream
8. Formatting
9. Manipulators
10. Input Buffering
11. Output Buffering
12. I/O Redirection


### topic 1

Streams – Notes

- A stream is a flow of data between a program and an input/output device.
- Streams are used to perform input and output operations in C++.
- Input stream → Data flows into the program.
- Output stream → Data flows out of the program.
- C++ uses streams for handling data from sources such as the keyboard and files.

Examples

- "cin" → Standard input stream
- "cout" → Standard output stream
- "cerr" → Standard error stream
- "clog" → Standard logging stream

Key Point

Input → Program → Output

### topic 2

iostream – Notes

- "iostream" is a standard C++ header file used for input and output operations.
- It is included using:

#include <iostream>

Common Objects

- "cin" → used for input.
- "cout" → used for output.
- "cerr" → used for error messages.
- "clog" → used for logging messages.

Example

#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    cout << age;
}

Key Point

"iostream" provides the basic tools needed for standard input and output in C++.


### topic 3

istream – Notes

- "istream" stands for Input Stream.
- It is a C++ class used for input operations.
- It provides functions and operators to read data.
- "cin" is an object of the "istream" class.
- "istream" is defined in the "<iostream>" header.
- The extraction operator ">>" is commonly used with "istream".

Example

#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
}

Here, "cin" reads input from the keyboard.

Key Point

"istream" → used for input operations.
