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


 ### topic 7:short

- "short" is an integer data type.
- It is used to store whole numbers.
- It usually has a smaller range than "int".
- It commonly uses 2 bytes of memory.
- The exact size and range can depend on the system and compiler.

Syntax

short variable_name = value;

Examples

short age = 22;
short students = 50;
short number = -100;

Example Program

#include <iostream>
using namespace std;

int main()
{
    short students = 50;

    cout << students;

    return 0;
}

Output

50

Remember: "short" → Smaller-range whole numbers.


 ### topic8:long

- "long" is an integer data type.
- It is used to store whole numbers.
- It can provide a larger range than "int" on some systems.
- The size and range of "long" depend on the system and compiler.
- On many Windows systems, "long" is 4 bytes.
- On many 64-bit Linux systems, "long" is 8 bytes.

Syntax

long variable_name = value;

Examples

long population = 1400000000L;
long distance = 500000L;

Example Program

#include <iostream>
using namespace std;

int main()
{
    long population = 1400000000L;

    cout << population;

    return 0;
}

Output

1400000000

Remember: "long" → Large-range whole numbers.


 ### topic 9:long long

- "long long" is an integer data type.
- It is used to store very large whole numbers.
- It provides at least 64 bits (8 bytes) of storage on standard-conforming implementations.
- It has a much larger range than "int" on typical systems.
- The suffix "LL" can be used to indicate a "long long" integer literal.

Syntax

long long variable_name = value;

Examples

long long population = 8000000000LL;
long long distance = 9876543210LL;

Example Program

#include <iostream>
using namespace std;

int main()
{
    long long population = 8000000000LL;

    cout << population;

    return 0;
}

Output

8000000000

Remember: "long long" → Very large whole numbers.


 ### topic :10 signed and unsigned

- "signed" and "unsigned" are type modifiers.
- They are commonly used with integer data types such as "int", "short", and "long".

signed

- "signed" can store positive, negative, and zero values.
- "int" is "signed" by default.

Syntax

signed int number = -50;

Examples

signed int age = 22;
signed int temperature = -5;

unsigned

- "unsigned" can store zero and positive values.
- It cannot represent negative values.
- It can provide a larger positive range than the corresponding signed type.

Syntax

unsigned int number = 50;

Examples

unsigned int age = 22;
unsigned int students = 100;

Example Program

#include <iostream>
using namespace std;

int main()
{
    signed int temperature = -5;
    unsigned int students = 50;

    cout << temperature << endl;
    cout << students;

    return 0;
}

Output

-5
50

Remember:

"signed" → negative + zero + positive
"unsigned" → zero + positive


 ### topic:11 wchar_t

- "wchar_t" is a wide character type.
- It is used to represent wide characters.
- It is written with the "L" prefix.
- The size of "wchar_t" depends on the system/compiler.
- It is different from the normal "char" type.

Syntax

wchar_t variable_name = L'character';

Example

wchar_t letter = L'A';

Example Program

#include <iostream>
using namespace std;

int main()
{
    wchar_t letter = L'A';

    wcout << letter;

    return 0;
}

Output

A

Remember

"char" → "'A'"
"wchar_t" → "L'A'"
