# Lesson 24 – File Handling

## File Handling

- ifstream
- ofstream
- fstream
- Open / Close
- Read / Write
- Text Files
- Binary Files
- File Position
- seekg()
- seekp()
- tellg()
- tellp()


### topic 1

File Handling

- File Handling means working with files using a C++ program.
- It allows us to create, open, read, write, modify, and close files.
- Files are useful for storing data permanently.
- Data stored in a file remains available even after the program ends.

Why File Handling?

Normally, program data is stored in memory (RAM).

When the program ends, temporary data may be lost.

By storing data in a file, we can use it again later.

File Stream Classes

C++ provides three main file stream classes:

ifstream
ofstream
fstream

- "ifstream" → Used to read data from a file.
- "ofstream" → Used to write data to a file.
- "fstream" → Used to read and write data.

Header File

#include <fstream>

Basic Example

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");

    file << "Hello C++";

    file.close();

    return 0;
}

This creates/opens "data.txt" and writes "Hello C++" into it.

Important Points

- Header: "<fstream>"
- File handling is used for persistent data storage.
- "ifstream" → Read
- "ofstream" → Write
- "fstream" → Read + Write
- Always close a file after completing the required operations.

Key Point

File Handling = Using C++ programs to create, open, read, write, modify, and close files.

### topic 2

ifstream

- "ifstream" stands for Input File Stream.
- It is used to read data from a file.
- It is provided by the "<fstream>" header.
- "ifstream" is part of the C++ Standard Library.

Syntax

ifstream file("filename.txt");

Example

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");

    string text;
    file >> text;

    cout << text;

    file.close();

    return 0;
}

Example File

Hello C++

Output

Hello

Reading a Complete Line

string text;
getline(file, text);

- ">>" reads data and stops at whitespace.
- "getline()" reads the complete line.

Important Points

- "ifstream" → Read from file
- Header → "<fstream>"
- ">>" → Read formatted data
- "getline()" → Read a complete line
- "close()" → Closes the file

Key Point

"ifstream" = Input File Stream used to read data from files.
