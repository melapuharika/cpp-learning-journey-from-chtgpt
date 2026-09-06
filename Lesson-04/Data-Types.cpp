 Data Types

int
char
float
double
bool
void
short
long
long long
signed
unsigned
wchar_t
char8_t
char16_t
char32_t


## topic 1: int

- "int" is short for integer.
- It is used to store whole numbers.
- Whole numbers can be positive, negative, or zero.
- "int" normally does not store decimal values.

Syntax

int variable_name = value;

Examples

int age = 22;
int marks = 95;
int number = -10;
int count = 0;

Example Program

#include <iostream>
using namespace std;

int main()
{
    int age = 22;

    cout << age;

    return 0;
}

Output

22

Remember: "int" → Whole numbers.

 ### topic:2 char

- "char" is short for character.
- It is used to store a single character.
- A character is written inside single quotes "' '".
- A "char" can store letters, digits, or special characters.

Syntax

char variable_name = 'character';

Examples

char grade = 'A';
char letter = 'H';
char digit = '5';
char symbol = '#';

Example Program

#include <iostream>
using namespace std;

int main()
{
    char grade = 'A';

    cout << grade;

    return 0;
}

Output

A

Remember: "char" → Single character.

 ### topic :3 float

- "float" is used to store decimal numbers.
- It is a floating-point data type.
- It provides single precision for decimal values.
- It usually uses 4 bytes of memory.
- It is useful for values such as price, height, weight, and temperature.
- Adding "f" at the end of a decimal value indicates a "float" literal.

Syntax

float variable_name = value;

Examples

float price = 99.5f;
float height = 5.6f;
float temperature = 36.5f;

Example Program

#include <iostream>
using namespace std;

int main()
{
    float temperature = 36.5f;

    cout << temperature;

    return 0;
}

Output

36.5

Remember: "float" → Decimal numbers.

### topic 4:double

- "double" is used to store decimal numbers.
- It provides more precision than "float".
- It is a double-precision floating-point data type.
- It usually uses 8 bytes of memory.
- It is commonly used when more accurate decimal calculations are needed.

Syntax

double variable_name = value;

Examples

double pi = 3.141592653589793;
double price = 999.99;
double distance = 12345.6789;

Example Program

#include <iostream>
using namespace std;

int main()
{
    double pi = 3.141592653589793;

    cout << pi;

    return 0;
}

Output

3.141592653589793

Remember: "double" → Decimal numbers with higher precision.

 ### topic:5 bool

- "bool" stands for Boolean.
- It is used to store logical values.
- A "bool" can have only two values:
  - "true"
  - "false"
- "true" is represented as "1" when printed normally.
- "false" is represented as "0" when printed normally.
- "bool" is commonly used in conditions and decision-making.

Syntax

bool variable_name = true;

Examples

bool isStudent = true;
bool isPassed = false;

Example Program

#include <iostream>
using namespace std;

int main()
{
    bool isStudent = true;

    cout << isStudent;

    return 0;
}

Output

1

Remember: "bool" → "true" or "false".


 ### topic:6 void

- "void" means no value.
- "void" is mainly used with functions.
- A "void" function does not return a value.
- "void" cannot normally be used to create a variable.
- It is also used in other concepts such as "void*" pointers.

Syntax

void function_name()
{
    // statements
}

Example

void greet()
{
    cout << "Hello";
}

Here, the "greet()" function performs an action but does not return a value.

Remember: "void" → No value / Nothing to return.
