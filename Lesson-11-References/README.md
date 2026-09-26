# Lesson 11 – References

1. Reference
2. Reference Initialization
3. Reference as Pointer
4. Reference as Parameter
5. Reference as Return Value
6. Const Reference
7. L-value Reference
8. R-value Reference
9. Reference Collapsing
10. Forwarding Reference

## topic :1 
Lesson 11 – References

1. Reference

A reference is another name (alias) for an existing variable.

Syntax

dataType& referenceName = variableName;

Example

int age = 20;
int& myAge = age;

Here:

- "age" → original variable
- "myAge" → reference to "age"
- "&" → used to create a reference

Both "age" and "myAge" refer to the same variable.

Example Program

#include <iostream>
using namespace std;

int main()
{
    int age = 20;

    int& myAge = age;

    myAge = 25;

    cout << age << endl;
    cout << myAge << endl;

    return 0;
}

Output

25
25

When "myAge" is changed, "age" is also changed because both refer to the same variable.

Important Points

- A reference is an alias (another name) for an existing variable.
- It does not create a separate variable for the referred object.
- A reference must be initialized when it is declared.
- Once a reference is bound to a variable, it cannot be made to refer to another variable.
- Changes made through the reference affect the original variable.

Remember

Original Variable → age
Reference          → myAge

age and myAge refer to the same variable.

One-Line Definition

«A reference in C++ is another name (alias) for an existing variable.»

## topic:2
2. Reference Initialization

Definition

Reference Initialization ante reference create chesetappudu, adi ye existing variable ni refer cheyyalo specify cheyyadam.

Syntax

dataType& referenceName = existingVariable;

Example

int age = 20;

int& myAge = age;

Here:

- "age" → original variable
- "myAge" → reference
- "= age" → "myAge" ni "age" ki connect chestundi.

Both "age" and "myAge" refer to the same variable.

Example Program

#include <iostream>
using namespace std;

int main()
{
    int number = 10;

    int& ref = number;

    ref = 50;

    cout << number << endl;

    return 0;
}

Output

50

Important Points

- A reference must be initialized when it is declared.
- A reference must refer to an existing object/variable.
- A reference cannot be left uninitialized.
- Once a reference is bound to a variable, it cannot be changed to refer to another variable.
- Changing the reference changes the original variable.

Remember

int number = 10;
int& ref = number;

"ref" is another name for "number".

One-Line Definition:

«Reference Initialization is the process of binding a reference to an existing variable when the reference is declared.»


### topic:3 
Reference vs Pointer

Reference mariyu Pointer rendu existing variable ni access cheyyadaniki use chestam, kani rendu different concepts.

Reference

Reference ante existing variable ki inko peru (alias).

int number = 10;

int& ref = number;

"ref" anedi "number" ki another name.

ref = 20;

Ippudu "number" value "20" avutundi.

---

Pointer

Pointer ante oka variable yokka memory address ni store chese variable.

int number = 10;

int* ptr = &number;

Ikkada:

- "ptr" → pointer
- "&number" → "number" yokka address
- "*ptr" → aa address daggara unna value

*ptr = 30;

Ippudu "number" value "30" avutundi.

---

Reference vs Pointer

Reference| Pointer
Variable ki another name| Memory address ni store chestundi
"int& ref = number;"| "int* ptr = &number;"
Direct ga use cheyyachu| Value kosam "*" use cheyyali
Declaration time lo initialize cheyyali| Initialize cheyyakapothe uninitialized pointer avvachu
"nullptr" ga undadu| "nullptr" ga undavachu
Vere variable ki rebind cheyyalem| Vere address ni point cheyyagaladu

Example

#include <iostream>
using namespace std;

int main()
{
    int number = 10;

    int& ref = number;
    int* ptr = &number;

    ref = 20;
    *ptr = 30;

    cout << number << endl;

    return 0;
}

Output

30

Remember

Reference → Variable ki another name

Pointer → Variable yokka address ni store chestundi

One-Line Definition

«A reference is another name for an existing variable, while a pointer stores the memory address of a variable.»
