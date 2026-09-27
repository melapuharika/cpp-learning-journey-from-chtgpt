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


### topic:4. Reference as Parameter

Definition

Reference as Parameter ante function parameter ni reference ga declare chesi, function ki original variable ni directly access cheyyadam.

Syntax

returnType functionName(dataType& parameter)
{
    // code
}

Example

void change(int& x)
{
    x = 50;
}

Ikkada "x" anedi function ki pass chesina original variable ki reference.

Example Program

#include <iostream>
using namespace std;

void change(int& x)
{
    x = 50;
}

int main()
{
    int number = 10;

    change(number);

    cout << number << endl;

    return 0;
}

Output

50

How It Works

number = 10

change(number)
      ↓
x refers to number
      ↓
x = 50
      ↓
number = 50

Normal Parameter vs Reference Parameter

Normal Parameter

void change(int x)
{
    x = 50;
}

Ikkada "x" ki original value yokka copy vastundi.

Original variable change avvadu.

Reference Parameter

void change(int& x)
{
    x = 50;
}

Ikkada "x" original variable ni direct ga refer chestundi.

Original variable change avutundi.

Advantages

- Original variable ni directly modify cheyyachu.
- Unnecessary copy create avvadu.
- Large objects ni efficient ga function ki pass cheyyadaniki useful.

Remember

Normal Parameter → Copy

Reference Parameter → Original variable ni refer chestundi

One-Line Definition

«Reference as Parameter allows a function to access and modify the original variable directly through a reference.»

### topic 5 
5. Reference as Return Value

Definition

Reference as Return Value ante function oka existing variable yokka reference ni return cheyyadam.

Syntax

dataType& functionName()
{
    return variable;
}

Example

int number = 10;

int& getNumber()
{
    return number;
}

Ikkada "getNumber()" function "number" yokka reference ni return chestundi.

Example Program

#include <iostream>
using namespace std;

int number = 10;

int& getNumber()
{
    return number;
}

int main()
{
    getNumber() = 50;

    cout << number << endl;

    return 0;
}

Output

50

How It Works

number = 10
    ↑
    │
getNumber()
    │
    ↓
returns reference to number

getNumber() = 50
    ↓
number = 50

Because the function returns a reference, we can directly modify the original variable.

Important Point

Function nunchi local variable yokka reference ni return cheyyakudadhu.

Wrong

int& getNumber()
{
    int number = 10;

    return number;   // ❌
}

Function complete ayyaka local variable destroy avutundi. Kabatti dani reference ni return cheyyadam unsafe.

Safe

int number = 10;

int& getNumber()
{
    return number;   // ✅
}

Remember

Normal Return
→ Value ni return chestundi

Reference Return
→ Existing variable yokka reference ni return chestundi

One-Line Definition

«Reference as Return Value allows a function to return a reference to an existing variable.»


### topic:6
6. Const Reference

Definition

Const Reference ante existing variable ni reference dwara access cheyyachu, kani aa reference dwara variable value ni modify cheyyalem.

Syntax

const dataType& referenceName = variable;

Example

int number = 10;

const int& ref = number;

Ikkada "ref" anedi "number" ni refer chestundi, kani "ref" dwara "number" value ni change cheyyalem.

ref = 20;   // ❌ Error

Kani original variable ni direct ga change cheyyachu:

number = 20;   // ✅

Example Program

#include <iostream>
using namespace std;

int main()
{
    int number = 10;

    const int& ref = number;

    cout << ref << endl;

    return 0;
}

Output

10

Const Reference as Function Parameter

Const references functions lo chala useful.

void display(const string& name)
{
    cout << name;
}

Ikkada:

- "name" original string ni refer chestundi.
- String copy create avvadu.
- "name" ni function lopala modify cheyyalem.

Advantages

- Unnecessary copy create avvadu.
- Original data ni modify cheyyakunda access cheyyachu.
- Large objects ni function ki efficiently pass cheyyadaniki useful.

Remember

const reference
      ↓
Read / Access → ✅
Modify through reference → ❌

One-Line Definition

«A const reference is a reference that allows access to an existing variable but does not allow modification through that reference.»


### topic 7
7. L-value Reference

L-value

L-value ante memory lo identifiable location unna expression or value.

Example

int number = 10;

Ikkada "number" oka L-value, endukante "number" ki memory lo oka location untundi.

Kabatti:

number = 20;

ani cheyyachu.

---

L-value Reference

L-value Reference ante oka L-value ni refer chese reference.

Syntax

dataType& referenceName = lvalue;

Example

int number = 10;

int& ref = number;

Ikkada:

- "number" → L-value
- "ref" → L-value Reference

"ref" mariyu "number" same variable ni refer chestayi.

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

"ref" dwara "number" value change ayyindi.

---

L-value Reference ki L-value kavali

Correct

int number = 10;

int& ref = number;   // ✅

Wrong

int& ref = 10;       // ❌

"10" oka temporary value kabatti normal L-value kaadu.

---

Important Points

- L-value ki memory lo identifiable location untundi.
- L-value Reference oka L-value ni refer chestundi.
- L-value Reference ni "&" symbol tho declare chestam.
- L-value Reference dwara original variable ni modify cheyyachu.
- Normal non-const L-value Reference ni temporary value ki bind cheyyalem.

Remember

L-value
→ Memory lo identifiable location unna value/expression

L-value Reference
→ L-value ni refer chese reference

One-Line Definition

«An L-value reference is a reference that refers to an L-value.»
