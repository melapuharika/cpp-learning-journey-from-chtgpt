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


### topic 4

ostream – Notes

- "ostream" stands for Output Stream.
- It is a C++ class used for output operations.
- It provides functions and operators to write or display data.
- "cout" is an object of the "ostream" class.
- "ostream" is defined in the "<iostream>" header.
- The insertion operator "<<" is commonly used with "ostream".

Example

#include <iostream>
using namespace std;

int main() {
    cout << "Hello World";
}

Here, "cout" displays the output on the screen.

Key Point

"ostream" → used for output operations.


### topic 5

String Stream – Notes

- A String Stream is used to perform input and output operations on strings in memory.
- It is provided by the "<sstream>" header.
- It allows a string to be treated like a stream.
- It is useful for parsing and converting data stored in strings.

Main String Stream Classes

- "istringstream" → performs input from a string.
- "ostringstream" → performs output to a string.
- "stringstream" → performs both input and output.

Example

#include <sstream>
#include <string>
using namespace std;

int main() {
    string data = "100";
    istringstream stream(data);

    int number;
    stream >> number;
}

Key Point

String Stream → performs stream operations on strings in memory.


### topic 6

istringstream – Notes

- "istringstream" stands for Input String Stream.
- It is used to read data from a string.
- It is provided by the "<sstream>" header.
- It works like an input stream, but the source is a string.
- The extraction operator ">>" is used to read values.
- It is useful for parsing strings and converting string data into other data types.

Example

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string data = "100 200";

    istringstream input(data);

    int a, b;
    input >> a >> b;

    cout << a << " " << b;
}

Here, "istringstream" reads "100" and "200" from the string.

Key Point

"istringstream" → reads input from a string.


### topic 7

ostringstream – Notes

- "ostringstream" stands for Output String Stream.
- It is used to write data into a string.
- It is provided by the "<sstream>" header.
- It works like an output stream, but the destination is a string.
- The insertion operator "<<" is used to add data.
- The "str()" function is used to get the resulting string.
- It is useful for building and formatting strings.

Example

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    ostringstream output;

    output << "Age: " << 20;

    string result = output.str();

    cout << result;
}

Key Point

"ostringstream" → writes output into a string.


### topic 8

Formatting – Notes

- Formatting means controlling how input or output data is displayed.
- C++ provides formatting options for controlling width, precision, alignment, and number format.
- Formatting is mainly used with output streams such as "cout".
- Many formatting tools are provided through the "<iomanip>" header.

Common Formatting Tools

- "setw()" → sets the field width.
- "setprecision()" → controls decimal precision.
- "fixed" → displays floating-point numbers in fixed notation.
- "scientific" → displays numbers in scientific notation.
- "left" → aligns output to the left.
- "right" → aligns output to the right.

Example

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price = 123.4567;

    cout << fixed << setprecision(2) << price;
}

Output

123.46

Key Point

Formatting → controls how data is displayed.


### topic 9

Manipulators – Notes

- Manipulators are special functions or objects used to control the formatting and behavior of input/output streams.
- They are commonly used with "cin" and "cout".
- Some manipulators are available through "<iostream>".
- Formatting manipulators such as "setw()" and "setprecision()" are provided by "<iomanip>".

Common Manipulators

- "endl" → inserts a new line and flushes the output buffer.
- "setw()" → sets the field width.
- "setprecision()" → sets the decimal precision.
- "fixed" → uses fixed-point notation.
- "scientific" → uses scientific notation.
- "boolalpha" → displays "true" and "false" instead of "1" and "0".

Example

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double value = 12.3456;

    cout << fixed << setprecision(2) << value << endl;
}

Output

12.35

Key Point

Manipulators → control stream formatting and behavior.


### topic 10

Input Buffering – Notes

- Input buffering is the process of temporarily storing input data in a buffer before the program reads and processes it.
- A buffer is a temporary memory area.
- Input data is stored in the buffer before being processed by the program.
- It helps make input operations more efficient.
- "cin" reads input through the input stream.

Example

#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
}

When the user enters "20", the input is stored in the input stream and then "cin" extracts the value.

Key Point

Input buffering → temporarily stores input data before it is processed.


### topic 11

Output Buffering – Notes

- Output buffering is the process of temporarily storing output data in a buffer before it is sent to its destination.
- A buffer is a temporary memory area.
- Output data may be stored in the buffer before being displayed on the screen.
- It helps reduce the number of direct output operations.
- "cout" uses an output stream and works with buffering.
- "flush()" can be used to force buffered output to be written immediately.

Example

#include <iostream>
using namespace std;

int main() {
    cout << "Hello";
    cout.flush();
}

Here, "flush()" forces the buffered output to be sent immediately.

Key Point

Output buffering → temporarily stores output data before sending it to its destination.
