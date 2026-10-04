# Lesson 20 – STL Utilities

## Topics

1. STL Utilities
2. Pair
3. Tuple
4. Optional
5. Variant
6. Any
7. Bitset
8. String View
9. Smart Pointers
10. Unique Pointer (unique_ptr)
11. Shared Pointer (shared_ptr)
12. Weak Pointer (weak_ptr)


### topic 1 

STL Utilities

STL Utilities are ready-made C++ classes and tools that help us handle data and memory efficiently.

Important STL Utilities

- Pair → Stores two values together.
- Tuple → Stores multiple values together.
- Optional → Represents a value that may or may not exist.
- Variant → Stores one value from different possible types.
- Any → Can store a value of almost any type.
- Bitset → Manages binary bits efficiently.
- String View → Provides a non-owning view of a string without copying it.
- Smart Pointers → Safely manage dynamically allocated memory.

Key Point

STL Utilities = Ready-made tools for handling data and memory efficiently.

### topic 2

std::pair

"std::pair" is an STL utility used to store two values together in a single object.

Features

- Stores exactly two values.
- The two values can have different data types.
- "first" → accesses the first value.
- "second" → accesses the second value.
- "make_pair()" → creates a pair easily.

Example

#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<string, int> student = {"Harika", 23};

    cout << student.first << endl;
    cout << student.second << endl;
}

Output:

Harika
23

Another Example

pair<int, string> p = {101, "Harika"};

Here:

- "101" → "first"
- ""Harika"" → "second"

Key Point

"pair" = Two values stored together.

### topic 3

std::tuple

"std::tuple" is an STL utility used to store multiple values together in a single object.

Features

- Can store multiple values.
- Values can have different data types.
- Values are accessed using "get<index>()".
- Index starts from 0.
- "make_tuple()" → creates a tuple easily.

Example

#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<string, int, float> student = {"Harika", 23, 8.5};

    cout << get<0>(student) << endl;
    cout << get<1>(student) << endl;
    cout << get<2>(student) << endl;
}

Accessing Values

get<0>(student);  // First value
get<1>(student);  // Second value
get<2>(student);  // Third value

Creating a Tuple

auto student = make_tuple("Harika", 23, 8.5);

Pair vs Tuple

- "pair" → exactly 2 values
- "tuple" → multiple values

Key Point

"tuple" = Multiple values stored together.

### topic 4

std::optional

"std::optional" is an STL utility that represents a value that may or may not exist.

Features

- Can contain a value or be empty.
- Useful when a value is not always available.
- "has_value()" → checks whether a value exists.
- "value()" → accesses the stored value.
- "value_or()" → returns the value or a default value.
- "reset()" → removes the stored value.

Example

#include <iostream>
#include <optional>
using namespace std;

int main() {
    optional<int> age = 23;

    if (age.has_value()) {
        cout << age.value();
    }
}

Output:

23

Empty Optional

optional<int> age;

cout << age.value_or(0);

If no value exists, "value_or(0)" returns "0".

Key Point

"optional" = A value may or may not exist.


### topic 5

std::variant

"std::variant" is an STL utility that can store a value of one of several different data types.

Features

- Can store different possible data types.
- Only one value is active at a time.
- Provides type-safe access to stored values.
- "get<>" → accesses the stored value.
- "holds_alternative<>" → checks which type is currently stored.

Example

#include <iostream>
#include <variant>
using namespace std;

int main() {
    variant<int, string> data;

    data = 100;
    cout << get<int>(data) << endl;

    data = "Harika";
    cout << get<string>(data) << endl;
}

Output:

100
Harika

Accessing Values

get<int>(data);
get<0>(data);

Checking the Type

holds_alternative<int>(data);

Returns "true" if the current value is an "int".

Key Point

"variant" = One active value from multiple possible types.

### topic 6

std::any

"std::any" is an STL utility that can store a value of almost any data type.

Features

- Can store different types of values.
- One value is stored at a time.
- "any_cast<>" → accesses the stored value with the correct type.
- "has_value()" → checks whether a value exists.
- "reset()" → removes the stored value.
- More flexible than "variant".

Example

#include <iostream>
#include <any>
using namespace std;

int main() {
    any data;

    data = 100;
    cout << any_cast<int>(data) << endl;

    data = "Harika";
    cout << any_cast<string>(data) << endl;
}

Output:

100
Harika

Variant vs Any

- "variant" → stores one value from a predefined list of types.
- "any" → can store a value of almost any type.

Key Point

"any" = Store a value of almost any type.

### topic 7

std::bitset

"std::bitset" is an STL utility used to store and manipulate a fixed number of binary bits (0 and 1).

Features

- Stores a fixed number of bits.
- Each bit can be "0" or "1".
- "set()" → sets bits to "1".
- "reset()" → sets bits to "0".
- "flip()" → changes "0" to "1" and "1" to "0".
- "count()" → returns the number of "1" bits.
- "test(index)" → checks the bit at a specific position.
- "size()" → returns the total number of bits.

Example

#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> bits(10);

    cout << bits;
}

Output:

00001010

Here, "bitset<8>" means the bitset contains 8 fixed bits.

Key Point

"bitset" = Fixed-size collection of binary bits (0 and 1).

### topic 8

std::string_view

"std::string_view" is an STL utility that provides a non-owning view of a string without copying its data.

Features

- Does not own the string data.
- Avoids unnecessary string copying.
- Lightweight and efficient.
- Can access characters using "[]".
- "size()" → returns the length.
- "empty()" → checks whether the view is empty.
- "substr()" → returns a part of the string.
- The original string must remain alive while the "string_view" is being used.

Example

#include <iostream>
#include <string>
#include <string_view>
using namespace std;

int main() {
    string name = "Harika";
    string_view view = name;

    cout << view;
}

Output:

Harika

Here, "view" does not create a copy of "name"; it only views the existing string.

Key Point

"string_view" = Lightweight, non-owning view of a string without copying its data.


### topic 9

Smart Pointers

Smart Pointers are C++ features used to automatically and safely manage dynamically allocated memory.

They help reduce memory leaks and remove the need to manually call "delete" in many cases.

Main Types

1. "unique_ptr" → Single ownership.
2. "shared_ptr" → Shared ownership.
3. "weak_ptr" → Non-owning observer of an object managed by "shared_ptr".

Example

int* p = new int(10);
delete p;

With smart pointers, memory is automatically released when it is no longer needed.

Simple Analogy

- "unique_ptr" → One owner
- "shared_ptr" → Multiple owners
- "weak_ptr" → Observer, not an owner

Key Point

Smart Pointers = Automatic and safer memory management.

### topic 10

std::unique_ptr

"std::unique_ptr" is a smart pointer that provides single ownership of a dynamically allocated object.

Features

- Only one "unique_ptr" can own an object at a time.
- Automatically releases memory when the owner is destroyed.
- Helps prevent memory leaks.
- Cannot be copied.
- Ownership can be transferred using "std::move()".
- "make_unique()" → creates a "unique_ptr".
- "get()" → returns the underlying raw pointer.
- "reset()" → releases the owned object.

Example

#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> p = make_unique<int>(10);

    cout << *p;
}

Output:

10

Ownership Transfer

unique_ptr<int> p1 = make_unique<int>(10);
unique_ptr<int> p2 = move(p1);

After "move()", "p2" becomes the owner and "p1" becomes empty.

Key Point

"unique_ptr" = Single ownership + Automatic memory management + No copying.
