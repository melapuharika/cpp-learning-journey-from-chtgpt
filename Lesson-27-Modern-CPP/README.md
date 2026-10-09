Lesson 27 – Modern C++

C++11

- C++11 Features
- auto Keyword
- nullptr
- Range-Based For Loop
- Lambda Expressions
- Move Semantics
- Smart Pointers
- constexpr
- enum class

C++14

- C++14 Features
- Generic Lambda
- Return Type Deduction

C++17

- C++17 Features
- Structured Bindings
- if constexpr
- std::optional
- std::variant
- std::any
- Filesystem Library
- Fold Expressions

C++20

- C++20 Features
- Concepts
- Ranges
- Coroutines
- Modules
- Three-Way Comparison ( <=> )
- consteval
- constinit
- std::span

C++23

- C++23 Features
- std::expected
- std::print
- std::generator
- More C++23 Features


### topic 1

Lesson 27 – Topic 1: C++11 Features

1. Introduction

C++11 is a major version of the C++ programming language introduced in 2011.

It introduced several new features that make C++ programming easier, safer, and more efficient.

C++11 is also known as Modern C++'s first major standard update.

2. Why Was C++11 Introduced?

C++11 was introduced to:

- Make code easier to write and understand.
- Reduce unnecessary code.
- Improve memory management.
- Support modern programming techniques.
- Improve performance and type safety.
- Provide new features for efficient software development.

3. Important Features of C++11

3.1 auto Keyword

The "auto" keyword allows the compiler to automatically determine a variable's type from its initializer.

Example:

auto age = 19;
auto price = 99.5;

Here, "age" is an "int", and "price" is a "double".

3.2 nullptr

"nullptr" represents a null pointer. It was introduced to provide a type-safe alternative to "NULL" and "0" when representing null pointers.

Example:

int* ptr = nullptr;

3.3 Range-Based For Loop

A range-based "for" loop makes it easy to access every element in an array or collection.

Example:

int numbers[] = {10, 20, 30};

for (int n : numbers) {
    cout << n << " ";
}

Output:

10 20 30

3.4 Lambda Expressions

Lambda expressions allow us to create small anonymous functions directly where they are needed.

Example:

auto add = [](int a, int b) {
    return a + b;
};

cout << add(5, 3);

Output:

8

3.5 Move Semantics

Move semantics allows certain resources to be transferred from one object to another instead of unnecessarily copying them.

It can improve performance, especially when working with large objects and dynamically allocated resources.

3.6 Smart Pointers

Smart pointers help manage dynamically allocated memory automatically according to ownership rules.

Important smart pointers:

- "std::unique_ptr"
- "std::shared_ptr"
- "std::weak_ptr"

They are available through the "<memory>" header.

3.7 constexpr

The "constexpr" keyword allows functions and variables to participate in compile-time evaluation when the required conditions are satisfied.

Example:

constexpr int square(int n) {
    return n * n;
}

constexpr int result = square(5);

Here, "result" is initialized to "25" at compile time.

3.8 enum class

"enum class" provides scoped, strongly typed enumerations.

Example:

enum class Color {
    Red,
    Green,
    Blue
};

Color c = Color::Red;

It helps avoid naming conflicts and unintended conversions between enumeration values and integers.

4. Complete C++11 Example

#include <iostream>
using namespace std;

int main() {
    auto age = 19;
    int numbers[] = {10, 20, 30};

    cout << "Age: " << age << endl;

    cout << "Numbers: ";
    for (int n : numbers) {
        cout << n << " ";
    }

    return 0;
}

Output:

Age: 19
Numbers: 10 20 30

5. Advantages of C++11

- Improves code readability.
- Reduces repetitive code.
- Supports safer memory management.
- Introduces useful modern programming techniques.
- Can improve performance through move semantics.
- Makes many common programming tasks simpler.

6. Summary

C++11 introduced many important features that form the foundation of Modern C++.

The major features include "auto", "nullptr", range-based for loops, lambda expressions, move semantics, smart pointers, "constexpr", and "enum class".

Understanding these features helps programmers write cleaner, safer, and more efficient C++ programs.

7. Practice Questions

1. What is C++11?
2. Why was C++11 introduced?
3. What is the purpose of the "auto" keyword?
4. What is "nullptr"?
5. What is a range-based for loop?
6. What are lambda expressions?
7. What is move semantics?
8. What are smart pointers?
9. What is the purpose of "constexpr"?
10. What is the difference between "enum" and "enum class"?


### topic 2

Topic 2: auto Keyword in C++

1. Introduction

The "auto" keyword was introduced in C++11.

It allows the compiler to automatically determine the data type of a variable based on the value used to initialize it.

Simple Meaning:

Manam variable data type ni "int", "float", "double" ani separate ga rayakunda, "auto" use chesthe compiler automatic ga data type ni decide chestundi.

2. Syntax

auto variable_name = value;

- "auto" – compiler data type ni determine chestundi.
- "variable_name" – variable peru.
- "value" – variable ki assign chese starting value.

3. Example Program

#include <iostream>
using namespace std;

int main() {
    auto age = 19;
    auto price = 99.5;
    auto letter = 'A';

    cout << age << endl;
    cout << price << endl;
    cout << letter << endl;

    return 0;
}

Output

19
99.5
A

Explanation

Line 1:

auto age = 19;

"19" anedi integer value. Kabatti compiler "age" data type ni "int" ga determine chestundi.

Line 2:

auto price = 99.5;

"99.5" anedi decimal literal. C++ lo idi "double" type. Kabatti "price" type "double" avutundi.

Line 3:

auto letter = 'A';

"'A'" anedi single character. Kabatti "letter" type "char" avutundi.

4. How Does auto Work?

Declaration| Data type determined
"auto a = 10;"| "int"
"auto b = 10.5;"| "double"
"auto c = 'A';"| "char"
"auto d = true;"| "bool"
"auto e = 10L;"| "long"

Compiler, initialize cheyadaniki use chesina expression type ni base chesukoni variable type ni determine chestundi.

5. Without auto vs With auto

Without auto

int age = 19;
double price = 99.5;
char grade = 'A';

Ikkada maname data types rayali.

With auto

auto age = 19;
auto price = 99.5;
auto grade = 'A';

Ikkada compiler data types ni determine chestundi.

Rendu examples lo final variable types same ga untayi.

6. Important Rule: Initializer Is Required

Ordinary local variable declaration lo "auto" use chesthe, compiler ki type determine cheyadaniki initializer avasaram.

Correct:

auto number = 100;

Incorrect:

auto number;

Second example lo compiler ki "number" type determine cheyadaniki starting value ledu. Kabatti compilation error vastundi.

7. Can the Data Type Change Later?

Ledu. "auto" type ni automatic ga determine chestundi; variable type ni prathi assignment ki malli decide cheyyadu.

Example:

auto number = 10;

number = 20;   // Valid
number = 5.5;  // Allowed, but value converts to int

Ikkada "number" type "int" gaane untundi. "5.5" assign chesinappudu fractional part discard avutundi, kabatti value "5" avutundi.

8. Advantages of auto

- Reduces repetitive type declarations.
- Makes code shorter and easier to read in suitable situations.
- Useful when working with complex types and iterators.
- Helps avoid manually writing lengthy type names.

9. Important Points to Remember

- "auto" was introduced in C++11.
- The compiler determines the type from the initializer.
- "auto" does not mean that a variable has no data type.
- Once deduced, the variable's type does not change.
- The initial value affects the type deduction.

10. Practice Questions

1. What is the "auto" keyword in C++?
2. In which C++ standard was "auto" introduced?
3. What is the data type of "auto x = 25;"?
4. What is the data type of "auto y = 25.5;"?
5. Why is an initializer needed for an ordinary local "auto" variable?
6. Can an "auto" variable change its type after declaration?
7. Write a program using "auto" with "int", "double", and "char".

Conclusion

The "auto" keyword allows the C++ compiler to determine a variable's type from its initializer. It reduces repetitive declarations and is an important feature of Modern C++.


### topic 3

Topic 3: nullptr in C++

1. Introduction

"nullptr" is a special keyword introduced in C++11 to represent a null pointer.

A null pointer does not point to any valid object or function.

Simple Meaning:

Pointer ante memory address ni store chese variable.

Pointer prastutaniki ye valid object ni point cheyyakapothe, daniki "nullptr" assign cheyochu.

Example:

int* ptr = nullptr;

Here, "ptr" is an integer pointer that currently points to no object.

2. Syntax

data_type* pointer_name = nullptr;

Example:

int* ptr = nullptr;
double* value = nullptr;
char* character = nullptr;

Ikkada moodu pointers kuda null pointers.

3. Simple Example Program

#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr;

    if (ptr == nullptr) {
        cout << "Pointer is null";
    }

    return 0;
}

Output

Pointer is null

Explanation

- "int* ptr" – integer pointer ni declare chestundi.
- "nullptr" – pointer ye object ni point cheyyatledu ani indicate chestundi.
- "if (ptr == nullptr)" – pointer null ga undo ledo check chestundi.
- Condition true kabatti message print avutundi.

4. Why Do We Use nullptr?

"nullptr" use cheyadaniki main reasons:

- Pointer currently ye object ni point cheyyatledu ani indicate cheyadaniki.
- Uninitialized or unavailable object address ni represent cheyadaniki, pointer ni explicit ga initialize cheyadaniki.
- Pointer valid object ni point chestundo ledo check cheyadaniki.
- Old-style null pointer constants valla vacche konni ambiguity problems ni avoid cheyadaniki.

Important: "nullptr" ni initialize cheyadam valla pointer safe ga null state lo untundi. Kaani tarvatha valid object address assign chesina appudu kuda correct lifetime and validity maintain cheyyali.

5. NULL vs nullptr

NULL| nullptr
Older code lo use chestaru| C++11 lo introduce chesaru
Usually integer constant "0" ga define chestaru| Special null pointer literal
Function overloading lo ambiguity ravachu| Pointer overload ni clear ga select chestundi
New C++ code lo less preferred| Null pointers kosam recommended

6. Function Overloading Example

#include <iostream>
using namespace std;

void show(int x) {
    cout << "Integer function";
}

void show(int* p) {
    cout << "Pointer function";
}

int main() {
    show(nullptr);

    return 0;
}

Output

Pointer function

Explanation

"show()" ane peru tho rendu functions unnayi:

- Oka function "int" argument teesukuntundi.
- Inko function "int*" argument teesukuntundi.

"nullptr" pointer argument kabatti "show(int*)" function call avutundi.

7. Important Safety Rule

Null pointer ni dereference cheyakudadhu.

Wrong:

int* ptr = nullptr;
cout << *ptr;

Ila null pointer ni dereference chesthe undefined behavior vastundi.

Correct:

int* ptr = nullptr;

if (ptr != nullptr) {
    cout << *ptr;
}

Ikkada pointer null kaakapothe matrame value access chestunnam.

8. Advantages of nullptr

- Pointer intent ni clear ga express chestundi.
- "NULL" kanna type-safe.
- Function overloading ambiguity ni avoid cheyagaladu.
- Code readability improve chestundi.
- Null pointers ni initialize cheyadaniki useful.

9. Important Points to Remember

- "nullptr" was introduced in C++11.
- It represents a null pointer.
- It is not the same as an uninitialized pointer.
- Null pointer ni dereference cheyakudadhu.
- Pointer null ga undo ledo "ptr == nullptr" tho check cheyochu.
- New C++ code lo null pointers kosam "nullptr" prefer cheyyali.

10. Practice Questions

1. What is "nullptr" in C++?
2. In which C++ standard was "nullptr" introduced?
3. What is a pointer?
4. What is the difference between "NULL" and "nullptr"?
5. Why should we avoid dereferencing a null pointer?
6. How can we check whether a pointer is null?
7. Write a program that initializes a pointer with "nullptr" and checks its value.

Conclusion

"nullptr" is a C++11 feature used to represent a null pointer. It makes pointer-related code clearer and safer than using older null pointer constants such as "0" or "NULL".


### topic 4

Topic 4: Range-Based For Loop in C++

1. Introduction

The Range-Based For Loop was introduced in C++11.

It is used to access each element in an array or a suitable collection without manually managing an index.

Simple Meaning:

Array lo 5 elements unnayi anukundam. Normal "for" loop lo "i = 0", "i < 5", "i++" ani rayali.

Range-based "for" loop lo array elements ni direct ga okkokkati access cheyochu.

2. Syntax

for (data_type variable : collection) {
    // Statements
}

Explanation

- "data_type" – element data type.
- "variable" – current element ni receive chestundi.
- ":" – collection nunchi elements ni okkokkati access cheyadaniki use chestaru.
- "collection" – array leda suitable iterable collection.

3. Simple Example Program

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    for (int n : numbers) {
        cout << n << " ";
    }

    return 0;
}

Output

10 20 30 40 50

Explanation

Array lo five elements unnayi.

- First iteration: "n = 10"
- Second iteration: "n = 20"
- Third iteration: "n = 30"
- Fourth iteration: "n = 40"
- Fifth iteration: "n = 50"

Prathi iteration lo next element "n" loki vastundi. Anni elements process ayyaka loop automatically stop avutundi.

4. Normal For Loop vs Range-Based For Loop

Normal For Loop

int numbers[] = {10, 20, 30};

for (int i = 0; i < 3; i++) {
    cout << numbers[i] << " ";
}

Range-Based For Loop

int numbers[] = {10, 20, 30};

for (int n : numbers) {
    cout << n << " ";
}

Output for Both

10 20 30

Difference

Normal "for" loop lo index ni maintain cheyyali.

Range-based "for" loop lo elements ni direct ga access cheyochu. Kabatti code simple ga untundi.

5. Using Range-Based For Loop with Different Data Types

Example 1: Integer Array

int numbers[] = {1, 2, 3};

for (int n : numbers) {
    cout << n << " ";
}

Output:

1 2 3

Example 2: Character Array

char letters[] = {'A', 'B', 'C'};

for (char ch : letters) {
    cout << ch << " ";
}

Output:

A B C

Example 3: Double Array

double prices[] = {10.5, 20.5, 30.5};

for (double price : prices) {
    cout << price << " ";
}

Output:

10.5 20.5 30.5

6. Using auto in a Range-Based For Loop

C++11 lo "auto" keyword ni range-based loop tho kalipi use cheyochu.

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30};

    for (auto n : numbers) {
        cout << n << " ";
    }

    return 0;
}

Output:

10 20 30

Ikkada compiler "n" type ni array element type batti determine chestundi.

7. Important Point: Copy vs Reference

Using a Normal Variable

int numbers[] = {10, 20, 30};

for (int n : numbers) {
    n = n + 5;
}

Ikkada "n" anedi prathi element yokka copy. Kabatti original array values change avvavu.

Using a Reference

int numbers[] = {10, 20, 30};

for (int& n : numbers) {
    n = n + 5;
}

Output array values:

15 25 35

"int& n" use chesthe "n" original array element ni refer chestundi. Kabatti changes original array lo kuda reflect avutayi.

8. Advantages

- Code simple ga, readable ga untundi.
- Index ni manually manage cheyyalsina avasaram ledu.
- Arrays and suitable collections meeda iteration easy avutundi.
- "auto" and references tho kalipi use cheyochu.
- Index-related mistakes ni tagginchagaladu.

9. Limitations

- Current element ni access cheyadaniki suitable.
- Index kavali ante normal "for" loop convenient ga undochu.
- Collection lo elements add/remove chesthe, container rules follow avvali.
- Read-only access kosam "const auto&" use cheyochu.

Example:

for (const auto& n : numbers) {
    cout << n << " ";
}

10. Important Points to Remember

- Range-based "for" loop was introduced in C++11.
- It accesses elements one by one.
- Syntax lo colon (":") use chestaru.
- Loop elements anni process chesaka automatic ga stop avutundi.
- "auto" tho element type deduction cheyochu.
- "int&" use chesthe original elements ni modify cheyochu.
- "const auto&" read-only access ki useful.

11. Practice Questions

1. What is a range-based for loop?
2. In which C++ standard was it introduced?
3. Write the syntax of a range-based for loop.
4. What is the difference between a normal "for" loop and a range-based "for" loop?
5. How can we modify array elements using a range-based loop?
6. What is the purpose of "auto" in a range-based loop?
7. Write a program to print all elements of an integer array.
8. What is the difference between "int n" and "int& n" in a range-based loop?

Conclusion

The range-based for loop is a useful C++11 feature that simplifies iteration over arrays and suitable collections. It improves readability and works with variables, references, and "auto" for different programming needs.


### topic 5

Topic 5: Lambda Expressions in C++

1. Introduction

A lambda expression is an anonymous function that can be defined directly where it is needed.

Lambda expressions were introduced in C++11.

Simple Meaning:

Normal ga manam function ki oka name istam. Lambda expression ki separate name avasaram ledu. Small function ni required place lone create chesi use cheyochu.

Lambda expressions are useful for short operations, calculations, and working with collections.

2. Syntax

[capture](parameters) {
    // Function body
};

Parts of a Lambda Expression

- Capture "[ ]": Allows the lambda to access variables from the surrounding scope.
- Parameters "( )": Inputs passed to the lambda.
- Body "{ }": Statements executed when the lambda is called.

Example:

[]() {
    cout << "Hello";
};

Ikkada capture list empty, parameters levu, body lo ""Hello"" print cheyadaniki code undi.

3. Simple Lambda Example

#include <iostream>
using namespace std;

int main() {
    auto greet = []() {
        cout << "Hello C++";
    };

    greet();

    return 0;
}

Output

Hello C++

Explanation

- "auto greet" – lambda expression ni "greet" ane variable lo store chestunnam.
- "[]" – surrounding variables ni capture cheyyatledu.
- "()" – parameters levu.
- "{ cout << "Hello C++"; }" – lambda body.
- "greet()" – lambda ni execute chestundi.

4. Lambda with Parameters

Lambda expression ki inputs kuda pass cheyochu.

#include <iostream>
using namespace std;

int main() {
    auto add = [](int a, int b) {
        return a + b;
    };

    cout << add(10, 20);

    return 0;
}

Output

30

Explanation

- "a" and "b" are parameters.
- "add(10, 20)" call chesinappudu "a = 10", "b = 20".
- "return a + b" result "30" ni return chestundi.

5. Lambda without Return Value

Lambda expression value return cheyyakunda kuda pani cheyochu.

#include <iostream>
using namespace std;

int main() {
    auto message = []() {
        cout << "Learning C++";
    };

    message();

    return 0;
}

Output:

Learning C++

Ikkada lambda message print chestundi, kani value return cheyyadu.

6. Capture List

Capture list anedi lambda lopala bayata declare chesina variables ni access cheyadaniki use avutundi.

Example: Capture by Value

#include <iostream>
using namespace std;

int main() {
    int number = 10;

    auto show = [number]() {
        cout << number;
    };

    show();

    return 0;
}

Output:

10

"[number]" use chesinanduku lambda "number" yokka copy ni capture chestundi.

Example: Capture by Reference

#include <iostream>
using namespace std;

int main() {
    int number = 10;

    auto change = [&number]() {
        number = 20;
    };

    change();

    cout << number;

    return 0;
}

Output:

20

"[&number]" use chesinanduku lambda original variable ni reference dwara access chestundi. Kabatti value change avutundi.

Remember:

- "[number]" – capture by value.
- "[&number]" – capture by reference.

7. Advantages of Lambda Expressions

- Small functions ni quick ga create cheyochu.
- Separate named function avasaram leni situations lo useful.
- Code readability improve cheyagalavu.
- Algorithms tho kalipi use cheyadaniki convenient.
- Variables ni value or reference dwara capture cheyochu.

8. Lambda Expressions with Arrays

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30};

    auto print = [](int n) {
        cout << n << " ";
    };

    for (int n : numbers) {
        print(n);
    }

    return 0;
}

Output:

10 20 30

Ikkada range-based for loop array elements ni okkokkati access chestundi. "print" lambda prathi element ni print chestundi.

9. Important Points to Remember

- Lambda expressions were introduced in C++11.
- Lambda is an anonymous function.
- "[]" is the capture list.
- "()" contains parameters.
- "{}" contains the function body.
- "auto" can be used to store a lambda in a variable.
- "return" can be used to return a result.
- Capture by value copies a variable into the lambda.
- Capture by reference allows access to the original variable.

10. Practice Questions

1. What is a lambda expression?
2. In which C++ standard were lambda expressions introduced?
3. Write the syntax of a lambda expression.
4. What is the purpose of a capture list?
5. What is the difference between capture by value and capture by reference?
6. Write a lambda expression to add two numbers.
7. Write a lambda expression to print a message.
8. How can a lambda expression access a variable declared outside it?

Conclusion

Lambda expressions are a useful C++11 feature for writing small anonymous functions directly where they are needed. They support parameters, return values, and variable capture, making many programming tasks simpler.


### topic 6

Topic 6: Move Semantics in C++

1. Introduction

Move Semantics was introduced in C++11.

It allows resources owned by one object to be transferred to another object instead of copying those resources unnecessarily.

Simple Meaning:

Oka object daggara dynamic memory lanti resource undi anukundam. Aa resource ni inko object ki copy cheyadam badulu, ownership ni transfer cheyadaniki move semantics help chestundi.

This can improve performance, especially when working with large objects and containers.

2. What Is Copying?

Copying means creating another object with its own copy of the original object's data.

Example:

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> first = {10, 20, 30};

    vector<int> second = first;

    second.push_back(40);

    cout << "First: ";
    for (int n : first) {
        cout << n << " ";
    }

    cout << "\nSecond: ";
    for (int n : second) {
        cout << n << " ";
    }

    return 0;
}

Output

First: 10 20 30
Second: 10 20 30 40

Explanation

- "first" vector lo three elements unnayi.
- "second = first" original vector elements ni copy chestundi.
- "second" lo new element add chesina, "first" change avvadu.

3. What Is Move Semantics?

Move semantics allows an object to transfer resources to another object when a suitable move operation is available.

For standard library containers such as "std::vector", moving can transfer ownership of their allocated storage instead of copying each element.

Example:

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    vector<int> first = {10, 20, 30};

    vector<int> second = move(first);

    cout << "Second: ";
    for (int n : second) {
        cout << n << " ";
    }

    return 0;
}

Output

Second: 10 20 30

Explanation

- "first" vector lo elements unnayi.
- "std::move(first)" "first" ni rvalue expression ga cast chestundi.
- Ee expression valla suitable move constructor use ayye avakasam untundi.
- "second" vector elements ni own chesukuntundi.

Important: "std::move()" okkate resource ni transfer cheyyadu. Adi expression ni rvalue ga cast chestundi. Actual transfer anedi selected constructor or assignment operation meeda depend avutundi.

4. Copy vs Move

Copy Semantics| Move Semantics
Data or resources copy cheyabadutayi| Resources transfer cheyabadavachu
Original object generally unchanged ga untundi| Source object valid but moved-from state lo untundi
Large data ki costly avvachu| Some cases lo faster ga untundi
Copy constructor or copy assignment use avutundi| Move constructor or move assignment use avvachu

5. What Is std::move()?

"std::move()" is a utility function provided by the "<utility>" header.

It converts an expression into an rvalue expression, allowing the compiler to select a move operation when one is available.

Syntax:

std::move(object);

Example:

#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
    string first = "Hello C++";

    string second = move(first);

    cout << second;

    return 0;
}

Output:

Hello C++

Here, "second" receives the string value through the string's move operation when applicable.

After moving, "first" remains valid, but its exact value is unspecified. We should not assume that it is necessarily empty.

6. Move Constructor

A move constructor creates a new object using resources from another object, typically an rvalue.

General syntax:

ClassName(ClassName&& other);

Here:

- "ClassName" is the class name.
- "&&" represents an rvalue reference.
- "other" is the source object.

Example:

#include <iostream>
#include <utility>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Default constructor\n";
    }

    Demo(Demo&& other) {
        cout << "Move constructor\n";
    }
};

int main() {
    Demo first;
    Demo second = move(first);

    return 0;
}

Output:

Default constructor
Move constructor

This example demonstrates how a move constructor can be selected. A real resource-owning class must also transfer ownership correctly and release resources safely.

7. Move Assignment Operator

A move assignment operator transfers resources into an object that already exists.

General syntax:

ClassName& operator=(ClassName&& other);

It is different from a move constructor because the destination object has already been created.

8. Advantages of Move Semantics

- Can avoid unnecessary copying.
- Can improve performance for large objects.
- Helps transfer ownership of dynamically allocated resources.
- Is useful with containers, strings, and resource-managing classes.
- Supports efficient return and transfer of objects.

9. Important Points to Remember

- Move semantics was introduced in C++11.
- "std::move()" is declared in the "<utility>" header.
- "std::move()" itself does not perform a move.
- Move operations can transfer resources instead of copying them.
- A moved-from standard library object remains valid, but its value may be unspecified.
- Move constructors use rvalue references, commonly written as "ClassName&&".
- Not every move is automatically faster than a copy.

10. Practice Questions

1. What is Move Semantics in C++?
2. In which C++ standard was Move Semantics introduced?
3. What is the difference between copying and moving?
4. What is "std::move()"?
5. Which header file provides "std::move()"?
6. What is a move constructor?
7. What is a move assignment operator?
8. What happens to an object after it has been moved from?
9. Write a program that moves a "std::vector" using "std::move()".

Conclusion

Move Semantics is an important C++11 feature that can improve efficiency by allowing resources to be transferred between objects rather than copied unnecessarily. Understanding "std::move()", move constructors, and move assignment operators is essential for learning Modern C++.

### topic 7

1. What are Smart Pointers?

Smart pointers are used to manage memory automatically in C++.

They reduce the risk of memory leaks and avoid the need for manual "delete" in normal usage.

Header file:

#include <memory>

2. Types of Smart Pointers

1. "unique_ptr"

- Only one pointer owns the object.
- Memory is released automatically.

unique_ptr<int> p = make_unique<int>(10);
cout << *p;

Output: "10"

2. "shared_ptr"

- Multiple pointers can share ownership of one object.
- Memory is released when the last owner is gone.

shared_ptr<int> p1 = make_shared<int>(20);
shared_ptr<int> p2 = p1;

cout << *p2;

Output: "20"

3. "weak_ptr"

- Observes an object managed by "shared_ptr".
- Does not own the object or keep it alive.

shared_ptr<int> p = make_shared<int>(30);
weak_ptr<int> w = p;

3. Easy Difference

- "unique_ptr" → One owner.
- "shared_ptr" → Multiple owners.
- "weak_ptr" → Observes, but does not own.

4. Advantages

1. Automatic memory management.
2. Reduces memory leaks.
3. Makes code safer and easier to maintain.

5. Important Points

- Smart pointers are available in the "<memory>" header.
- Prefer "make_unique()" and "make_shared()".
- Do not manually "delete" an object managed by a smart pointer.

6. Interview Question

Q: What are smart pointers?

Smart pointers are C++ objects that automatically manage the lifetime of dynamically allocated memory.

Q: What are the three types?

"unique_ptr", "shared_ptr", and "weak_ptr".


### topic 8

1. What is constexpr?

"constexpr" is a C++ keyword that allows values and functions to be evaluated at compile time when possible.

Simple meaning: Program run avvakamunde value calculate cheyadaniki help chestundi.

2. Example

#include <iostream>
using namespace std;

constexpr int square(int n) {
    return n * n;
}

int main() {
    constexpr int result = square(5);
    cout << result;

    return 0;
}

Output:

25

3. Explanation

- "constexpr" — compile-time calculation ki allow chestundi.
- "square(5)" — 5 × 5 calculate chestundi.
- "result" value "25".

4. Advantages

1. Compile-time calculations cheyagaladu.
2. Code efficiency improve cheyadaniki help chestundi.
3. Constants define cheyadaniki use avuthundi.

5. Important Points

- "constexpr" is a C++ keyword.
- Compile time lo evaluate avvagaladu.
- "constexpr" function konni situations lo runtime lo kuda execute avvachu.

6. Interview Question

Q: What is "constexpr"?

"constexpr" is a C++ keyword that allows compile-time evaluation of values and functions when the required conditions are satisfied.


### topic 9

1. What is decltype?

"decltype" is a C++ keyword used to determine the type of a variable or expression.

Simple meaning: Oka variable type enti ani telusukoni, ade type ni vere variable ki use cheyadaniki help chestundi.

2. Example

#include <iostream>
using namespace std;

int main() {
    int a = 10;

    decltype(a) b = 20;

    cout << b;

    return 0;
}

Output:

20

3. Explanation

- "a" is an "int" variable.
- "decltype(a)" identifies the type of "a".
- So, "b" is also an "int" variable.

4. Difference Between auto and decltype

- "auto" → Initializer nunchi variable type ni deduce chestundi.
- "decltype" → Given expression yokka type ni determine chestundi.

5. Advantages

1. Type ni manually repeat cheyalsina avasaram taggutundi.
2. Complex expressions types ni identify cheyadaniki useful.
3. Generic programming lo help chestundi.

6. Interview Question

Q: What is "decltype" in C++?

"decltype" is a keyword used to determine the type of a variable or expression.
