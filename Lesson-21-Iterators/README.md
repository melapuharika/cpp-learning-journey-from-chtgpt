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
