### Lesson 19 – STL Containers

Containers

1. STL Containers

Sequence Containers

2. Array
3. Vector
4. Deque
5. List
6. Forward List

Container Adaptors

7. Stack
8. Queue
9. Priority Queue

Associative Containers

10. Set
11. Multiset
12. Map
13. Multimap

Unordered Containers

14. Unordered Set
15. Unordered Multiset
16. Unordered Map
17. Unordered Multimap


### topic 1

STL (Standard Template Library)

STL is a collection of ready-made generic classes and functions provided by C++.

It helps us store, access, search, sort, and process data easily.

Main Components of STL

1. Containers

Used to store and organize data.

Examples:

- vector
- list
- deque
- set
- map
- unordered_map

2. Iterators

Used to access and traverse elements in containers.

3. Algorithms

Ready-made functions used for common operations.

Examples:

- sort()
- find()
- count()
- reverse()
- max_element()
- min_element()

4. Function Objects (Functors)

Objects that can be used like functions.

5. Allocators

Used for memory allocation and management in STL.

Advantages of STL

- Reduces code.
- Saves development time.
- Provides reusable components.
- Efficient and well-tested.
- Supports generic programming.
- Makes programs easier to maintain.

In Simple Words

STL = Containers + Iterators + Algorithms + Function Objects + Allocators


### topic 2

Containers

Containers are STL components used to store and organize multiple values or objects.

A container is like a box that stores data.

Types of STL Containers

1. Sequence Containers

Store elements in a sequence.

- "vector"
- "deque"
- "list"
- "forward_list"
- "array"

2. Associative Containers

Store data in an organized manner and support efficient searching.

- "set"
- "multiset"
- "map"
- "multimap"

3. Unordered Containers

Store elements using hashing and do not maintain a sorted order.

- "unordered_set"
- "unordered_multiset"
- "unordered_map"
- "unordered_multimap"

4. Container Adapters

Provide a specific way to access stored data.

- "stack"
- "queue"
- "priority_queue"

Advantages

- Easy data storage and management.
- Reusable and efficient.
- Provides different containers for different requirements.
- Reduces programming effort.
- Works with STL algorithms and iterators.

Example

vector<int> numbers = {10, 20, 30, 40};

Here, "vector" is the container and it stores multiple integer values.


### topic 3

Sequence Containers

Sequence containers are STL containers that store elements in a linear sequence.

Types of Sequence Containers

1. array

- Fixed-size container.
- Size cannot be changed after creation.

2. vector

- Dynamic array.
- Size can grow or shrink.
- Provides fast random access.

3. deque

- Double-ended queue.
- Supports fast insertion and deletion at both front and back.

4. list

- Doubly linked list.
- Supports fast insertion and deletion when the position is known.

5. forward_list

- Singly linked list.
- Elements can be traversed only in the forward direction.

Example

vector<int> numbers = {10, 20, 30, 40};

Here, "vector" is a sequence container and the elements are stored in a linear sequence.

Key Point

Sequence Containers:

"array → vector → deque → list → forward_list"


### topic 4

std::array

"std::array" is an STL sequence container used to store a fixed number of elements of the same data type.

Syntax

#include <array>

array<int, 5> numbers = {10, 20, 30, 40, 50};

Features

- Fixed size.
- Stores elements of the same data type.
- Index starts from "0".
- Supports random access.
- Supports iterators and STL algorithms.
- Size cannot be changed after creation.
- Provides functions like "size()", "front()", "back()", and "at()".

Example

array<int, 5> numbers = {10, 20, 30, 40, 50};

cout << numbers[0];
cout << numbers.size();

Key Point

"std::array" = Fixed-size array + STL features


### topic 5

std::vector

"std::vector" is an STL sequence container that works like a dynamic array.

Unlike "array", a vector can grow or shrink during runtime.

Syntax

#include <vector>

vector<int> numbers = {10, 20, 30};

Features

- Dynamic size.
- Stores elements of the same data type.
- Supports random access using index.
- Elements are stored contiguously in memory.
- "push_back()" adds an element at the end.
- "pop_back()" removes the last element.
- "size()" returns the number of elements.
- "capacity()" returns the currently allocated storage capacity.

Example

vector<int> numbers;

numbers.push_back(10);
numbers.push_back(20);
numbers.push_back(30);

Key Point

"array" → Fixed size
"vector" → Dynamic size

### topic 5

std::deque

"std::deque" stands for Double-Ended Queue.

It is an STL sequence container that allows fast insertion and deletion at both the front and back.

Syntax

#include <deque>

deque<int> numbers = {10, 20, 30};

Features

- Dynamic size.
- Fast insertion at the front and back.
- Fast deletion at the front and back.
- Supports random access.
- "push_front()" → adds an element at the front.
- "push_back()" → adds an element at the back.
- "pop_front()" → removes the front element.
- "pop_back()" → removes the last element.
- "front()" → accesses the first element.
- "back()" → accesses the last element.

Example

deque<int> numbers = {20, 30};

numbers.push_front(10);
numbers.push_back(40);

Result:

10 20 30 40

Key Point

"vector" → efficient insertion/deletion mainly at the end.

"deque" → efficient insertion/deletion at both ends.
