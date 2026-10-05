# Lesson 21 – Iterators

## Topics

1. Iterator Basics
2. begin() and end()
3. cbegin() and cend()
4. Reverse Iterators
5. Iterator Categories
6. Input Iterator
7. Output Iterator
8. Forward Iterator
9. Bidirectional Iterator
10. Random Access Iterator
11. Iterator Invalidation


### topic 1

Iterators – C++ Notes

1. Definition

An Iterator is an object used to traverse and access elements of an STL container.

Simple ga:

«Iterator = container elements madhya move avvadaniki pointer la work chese tool.»

---

2. Creating an Iterator

Example:

vector<int> numbers = {10, 20, 30};

vector<int>::iterator it;

Here, "it" is an iterator for the "vector".

---

3. "begin()"

"begin()" returns an iterator pointing to the first element.

it = numbers.begin();

Example:

10  20  30
↑
it

---

4. Dereferencing "*"

"*it" is used to access the value of the element pointed to by the iterator.

cout << *it;

Output:

10

---

5. Moving the Iterator

"++it" moves the iterator to the next element.

it++;

Before:

10  20  30
↑
it

After:

10  20  30
    ↑
    it

---

6. "end()"

"end()" returns an iterator pointing to the position after the last element.

For:

vector<int> numbers = {10, 20, 30};

Conceptually:

10  20  30  [end]
             ↑

"end()" does not point to the last element.

---

7. Traversing a Container

We can use an iterator to visit every element.

for (auto it = numbers.begin(); it != numbers.end(); ++it) {
    cout << *it << " ";
}

Output:

10 20 30

How it works

begin() → first element
*it     → current value
++it    → next element
end()   → stopping position

---

8. Simple Example

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30};

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}

Output:

10 20 30

---

9. Iterator as a Pointer

An iterator works similar to a pointer.

Example:

*it

accesses the element pointed to by the iterator.

But an iterator is designed specifically to work with STL containers.

---

10. Important Points

- Iterators are used with STL containers.
- They are used to traverse container elements.
- "begin()" points to the first element.
- "end()" points to the position after the last element.
- "*it" accesses the current element.
- "++it" moves to the next element.
- Iterators work similarly to pointers.
- Iterators are commonly used with loops and STL algorithms.

One-Line Definition

An iterator is an object used to traverse and access elements of an STL container.


### topic 2

"begin()" – C++ STL Notes

1. Definition

"begin()" is a container function that returns an iterator pointing to the first element of the container.

---

2. Example

vector<int> numbers = {10, 20, 30};

auto it = numbers.begin();

Now:

10   20   30
↑
it

The iterator "it" points to the first element.

---

3. Accessing the First Element

Use the dereference operator "*":

cout << *it;

Output:

10

We can also write:

cout << *numbers.begin();

Output:

10

---

4. Important Point

"begin()" does not directly return the value.

It returns an iterator that points to the first element.

begin()
   ↓
Iterator
   ↓
First Element

---

5. Example

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30};

    auto it = numbers.begin();

    cout << *it;

    return 0;
}

Output:

10

---

6. "begin()" and "*"

numbers.begin()

→ Returns an iterator pointing to the first element.

*numbers.begin()

→ Accesses the value of the first element.

---

7. Important Points

- "begin()" is used with STL containers.
- It returns an iterator.
- The returned iterator points to the first element.
- "*" is used to access the value pointed to by the iterator.
- "begin()" is commonly used when traversing containers.

One-Line Definition

"begin()" returns an iterator pointing to the first element of an STL container.


### topic 3
end() – C++ STL

Definition

"end()" returns an iterator pointing to the position just after the last element of a container.

It does not point to the last element.

Example

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30};

    auto it = numbers.end();

    --it;

    cout << *it;
}

Output

30

Important Points

- "end()" returns an iterator.
- It points after the last element.
- "end()" itself should not be dereferenced.
- "*end()" is invalid ❌
- "--end()" can be used to access the last element.
- "begin()" → first element
- "end()" → position after the last element

Example with Loop

for (auto it = numbers.begin(); it != numbers.end(); ++it) {
    cout << *it << " ";
}

Output

10 20 30

Difference

begin() → first element
end()   → position after the last element

Remember: "end()" is mainly used as a stopping point when traversing a container.


### topic 4

cend() – C++ STL

Definition

"cend()" returns a constant iterator pointing to the position just after the last element of a container.

Example

vector<int> numbers = {10, 20, 30};

auto it = numbers.cend();

--it;

cout << *it;

Output

30

Important Points

- "cend()" returns a constant iterator.
- It points to the position after the last element.
- "cend()" itself should not be dereferenced.
- "*cend()" is invalid ❌
- "--cend()" can be used to reach the last element.
- "c" in "cend()" means constant.

Example with Loop

for (auto it = numbers.cbegin(); it != numbers.cend(); ++it) {
    cout << *it << " ";
}

Output

10 20 30

Difference

begin()  → first element
end()    → position after last element

cbegin() → first element (constant)
cend()   → position after last element (constant)

Remember: "cend()" is mainly used for constant traversal of a container.


### topic 5

Reverse Iterators – C++ STL

Definition

A reverse iterator is used to traverse the elements of a container from the last element to the first element.

Normal Direction

10 → 20 → 30 → 40

Reverse Direction

40 → 30 → 20 → 10

"rbegin()"

"rbegin()" returns a reverse iterator pointing to the last element.

vector<int> numbers = {10, 20, 30, 40};

auto it = numbers.rbegin();

cout << *it;

Output

40

"rend()"

"rend()" returns a reverse iterator pointing to the position before the first element.

It is mainly used as the stopping point for reverse traversal.

Example

for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
    cout << *it << " ";
}

Output

40 30 20 10

Important Points

- "rbegin()" → points to the last element.
- "rend()" → position before the first element.
- Reverse iterators traverse from last to first.
- "++it" moves to the previous element in the original container.
- "rbegin()" and "rend()" are useful for reverse traversal.

Iterator Comparison

begin()  → first element
end()    → after last element

rbegin() → last element
rend()   → before first element

Remember: "rbegin()" = reverse begin, "rend()" = reverse end.


### topic 6

cbegin() – C++ STL

Definition

"cbegin()" returns a constant iterator pointing to the first element of a container.

Example

vector<int> numbers = {10, 20, 30};

auto it = numbers.cbegin();

cout << *it;

Output

10

Important Points

- "cbegin()" points to the first element.
- It returns a constant iterator.
- The element cannot be modified through the iterator.
- "c" in "cbegin()" means constant.
- "*cbegin()" can be used to access the first value.

Example

auto it = numbers.cbegin();

cout << *it;   // 10

Trying to modify:

*it = 100;   // ❌ Error

Difference

begin()  → first element → can modify
cbegin() → first element → cannot modify

Remember: "cbegin()" = constant begin.


### topic 7

Iterator Categories in C++

Iterator categories define the capabilities of an iterator and how it can move through a container.

1. Input Iterator

- Used to read elements.
- Moves only in the forward direction.
- Supports "++".
- Generally single-pass.

2. Output Iterator

- Used to write elements.
- Moves only in the forward direction.
- Supports "++".
- Generally single-pass.

3. Forward Iterator

- Supports reading and writing.
- Moves only forward.
- Supports multiple passes.
- Supports "++".

Examples: "forward_list", "unordered_set"

4. Bidirectional Iterator

- Supports reading and writing.
- Moves forward and backward.
- Supports "++" and "--".

Examples: "list", "set", "map"

5. Random Access Iterator

- Supports forward and backward movement.
- Can jump directly to positions.
- Supports "+", "-", "+=", "-=".
- Supports comparison operators like "<" and ">".

Examples: "vector", "deque", "array"

6. Contiguous Iterator

- Provides all random-access capabilities.
- Elements are stored in contiguous memory.
- Supports direct memory-based access.

Examples: "vector", "array", built-in arrays.

Order

Input → Forward → Bidirectional → Random Access → Contiguous

Key Point

Higher iterator categories provide more capabilities than lower categories.
