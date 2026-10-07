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


### topic 5

Open / Close

- Open means connecting a file with the C++ program.
- Close means ending the connection with the file.
- Files can be opened using the constructor or the "open()" function.

Open Using Constructor

ofstream file("data.txt");

Open Using "open()"

ofstream file;
file.open("data.txt");

Close a File

file.close();

Example

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;

    file.open("data.txt");

    file << "Hello C++";

    file.close();

    return 0;
}

Check Whether File Is Open

if (file.is_open()) {
    cout << "File opened successfully";
}

- "open()" → Opens the file.
- "is_open()" → Checks whether the file is open.
- "close()" → Closes the file.

Important Points

- A file should be opened before performing file operations.
- Close the file after completing the required operations.
- "open()" can be used to open a file.
- "close()" is used to close a file.

Key Point

Open = Connect the file with the program.
Close = End the connection with the file.


### topic 6

Read / Write

- Read means getting data from a file into the program.
- Write means storing data from the program into a file.

Write Data

- "ofstream" is used to write data into a file.
- "<<" operator is used to write data.

ofstream file("data.txt");

file << "Hello C++";
file << 100;

Read Data

- "ifstream" is used to read data from a file.
- ">>" operator is used to read data.

ifstream file("data.txt");

string text;
file >> text;

cout << text;

Complete Example

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("data.txt");

    out << "Hello C++";
    out.close();

    ifstream in("data.txt");

    string text;
    in >> text;

    cout << text;

    in.close();

    return 0;
}

Output

Hello

- ">>" stops reading at whitespace.
- "getline()" can be used to read a complete line.

Important Points

- "ofstream" → Write
- "ifstream" → Read
- "<<" → Write data
- ">>" → Read data
- "getline()" → Read a complete line
- "close()" → Close the file

Key Point

Read = Get data from a file.
Write = Store data in a file.


### topic 7

Text Files

- Text File is a file that stores data in a human-readable text format.
- Text files can be opened and read using a normal text editor.
- Common text file extensions include:
  - ".txt"
  - ".csv"
  - ".cpp"
  - ".html"

Example File

Name: Harika
Course: BCA
Age: 22

Writing to a Text File

#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");

    file << "Name: Harika\n";
    file << "Course: BCA\n";
    file << "Age: 22\n";

    file.close();

    return 0;
}

Reading a Text File

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");

    string line;

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();

    return 0;
}

Important Points

- Text files store data as readable characters.
- "ofstream" → Write to a text file.
- "ifstream" → Read from a text file.
- "getline()" → Read a complete line.
- Text files are easy for humans to read and edit.

Key Point

Text File = Human-readable file used to store data in text format.


### topic 8

Binary Files

- Binary File stores data in raw binary/byte format.
- Binary files are generally not human-readable.
- They store data directly as bytes.
- Binary files can be useful for storing structured or non-text data.

Opening a Binary File

ofstream file("data.bin", ios::binary);

- "ios::binary" → Opens the file in binary mode.

Writing to a Binary File

int age = 22;

file.write(reinterpret_cast<char*>(&age), sizeof(age));

- "write()" → Writes raw bytes to the file.
- "sizeof()" → Gives the size of the data in bytes.

Reading a Binary File

int age;

file.read(reinterpret_cast<char*>(&age), sizeof(age));

- "read()" → Reads raw bytes from the file.

Example

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int age = 22;

    ofstream out("data.bin", ios::binary);
    out.write(reinterpret_cast<char*>(&age), sizeof(age));
    out.close();

    ifstream in("data.bin", ios::binary);
    in.read(reinterpret_cast<char*>(&age), sizeof(age));

    cout << age;

    in.close();

    return 0;
}

Output

22

Text File vs Binary File

Text File| Binary File
Human-readable| Usually not human-readable
Stores text characters| Stores raw bytes
"<<", ">>", "getline()"| "write()", "read()"
Easy to edit with a text editor| Not normally edited directly

Important Points

- Use "ios::binary" for binary mode.
- "write()" → Writes bytes.
- "read()" → Reads bytes.
- "sizeof()" → Determines the number of bytes.
- Binary files are usually not directly readable by humans.

Key Point

Binary File = File that stores data in raw binary/byte format.


### topic 9

File Position

- File Position means the current location of the reading or writing operation inside a file.
- We can imagine it like a cursor inside the file.
- When data is read or written, the file position usually moves forward.

Example

Suppose "data.txt" contains:

Hello

ifstream file("data.txt");

char ch;
file.get(ch);

cout << ch;

Output

H

After reading "H", the file position moves to the next character:

H e l l o
  ^

Types of File Positions

- Get Position → Current position used for reading.
- Put Position → Current position used for writing.

Related Functions

seekg()
seekp()
tellg()
tellp()

- "seekg()" → Change get/read position.
- "seekp()" → Change put/write position.
- "tellg()" → Get current read position.
- "tellp()" → Get current write position.

Important Points

- File position acts like a cursor.
- Reading moves the get position.
- Writing moves the put position.
- File positions can be checked and changed using file-position functions.

Key Point

File Position = Current location of reading or writing inside a file.


### topic 10

seekg()

- "seekg()" stands for Seek Get.
- It is used to change the get/read position in a file.
- The "g" in "seekg()" means get position.
- It is mainly used with input file streams such as "ifstream".

Syntax

file.seekg(position);

Example

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");

    file.seekg(5);

    char ch;
    file.get(ch);

    cout << ch;

    file.close();

    return 0;
}

Move to Beginning

file.seekg(0);

- Moves the reading position to the beginning of the file.

Move to End

file.seekg(0, ios::end);

- Moves the reading position to the end of the file.

Important Points

- "seekg()" → Changes the reading/get position.
- "g" → Get.
- "seekg(0)" → Moves to the beginning.
- "seekg(0, ios::end)" → Moves to the end.
- Commonly used with "ifstream".

Key Point

"seekg()" = Function used to change the reading/get position in a file.


### topic 11

seekp() – Notes

- "seekp()" stands for Seek Put.
- It is used to move the write (put) pointer to a specific position in a file.
- It is mainly used with "ofstream" and "fstream".
- The position is generally measured in bytes from the beginning of the file.

Syntax

file.seekp(position);

Example

fstream file("data.txt", ios::in | ios::out);

file.seekp(5);
file << "Hello";

Here:

- "seekp(5)" moves the write pointer to position "5".
- ""Hello"" is written from that position.

Using ios::beg

file.seekp(5, ios::beg);

Moves the write pointer 5 positions from the beginning of the file.

Key Point

"seekp()" → moves the write pointer.

"seekg()" → moves the read pointer.

### topic 12

tellg() – Notes

- "tellg()" stands for Tell Get.
- It is used to find the current position of the read (get) pointer in a file.
- It is mainly used with "ifstream" and "fstream".
- It returns the current file position.

Syntax

file.tellg();

Example

fstream file("data.txt", ios::in);

cout << file.tellg();

If the read pointer is at position "5", "tellg()" returns "5".

Key Point

"tellg()" → tells the current read position.

"tellp()" → tells the current write position.


### topic 13

tellp() – Notes

- "tellp()" stands for Tell Put.
- It is used to find the current position of the write (put) pointer in a file.
- It is mainly used with "ofstream" and "fstream".
- It returns the current file position.

Syntax

file.tellp();

Example

fstream file("data.txt", ios::in | ios::out);

cout << file.tellp();

If the write pointer is at position "5", "tellp()" returns "5".

Key Point

"tellp()" → tells the current write position.

"tellg()" → tells the current read position.
