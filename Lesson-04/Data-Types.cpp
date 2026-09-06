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
