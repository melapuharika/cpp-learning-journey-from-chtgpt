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
