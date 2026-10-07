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


### topic 3

ofstream

- "ofstream" stands for Output File Stream.
- It is used to write data into a file.
- It is provided by the "<fstream>" header.
- "ofstream" is part of the C++ Standard Library.

Syntax

ofstream file("filename.txt");

Example

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");

    file << "Hello C++";

    file.close();

    return 0;
}

File Content

Hello C++

How It Works

1. "ofstream" opens the file for writing.
2. "<<" writes data into the file.
3. "close()" closes the file.
4. If the file does not exist, "ofstream" can create it.

Important Points

- "ofstream" → Write to file
- Header → "<fstream>"
- "<<" → Writes data into the file.
- "close()" → Closes the file.
- Can create a new file if it does not exist.

Key Point

"ofstream" = Output File Stream used to write data into files.


### topic 4

fstream

- "fstream" stands for File Stream.
- It is used to read and write data in a file.
- It is provided by the "<fstream>" header.
- "fstream" supports both input and output operations.

Syntax

fstream file("filename.txt", ios::in | ios::out);

Example

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("data.txt", ios::in | ios::out);

    file << "Hello C++";

    file.seekg(0);

    string text;
    file >> text;

    cout << text;

    file.close();

    return 0;
}

File Modes

ios::in

- Opens the file for reading.

ios::out

- Opens the file for writing.

ios::in | ios::out

- Opens the file for both reading and writing.

Comparison

Class| Purpose
"ifstream"| Read
"ofstream"| Write
"fstream"| Read + Write

Important Points

- Header: "<fstream>"
- "<<" → Writes data.
- ">>" → Reads data.
- "ios::in" → Input mode.
- "ios::out" → Output mode.
- "close()" → Closes the file.

Key Point

"fstream" = File stream used to read and write data in files.
