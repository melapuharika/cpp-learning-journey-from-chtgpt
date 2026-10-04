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
