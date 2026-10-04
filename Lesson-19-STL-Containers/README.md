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

### topic 6

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


### topic 7

std::list

"std::list" is an STL sequence container implemented as a doubly linked list.

Each element is connected to both the previous and next element.

Features

- Dynamic size.
- Uses a doubly linked list.
- Fast insertion and deletion when the position is known.
- Does not support random access using "[]".
- "push_front()" → adds at the beginning.
- "push_back()" → adds at the end.
- "pop_front()" → removes from the beginning.
- "pop_back()" → removes from the end.
- "insert()" → inserts an element.
- "erase()" → removes an element.

Example

list<int> numbers = {10, 20, 30};

numbers.push_front(5);
numbers.push_back(40);

Output:

5 10 20 30 40

Key Point

"std::list" = Doubly Linked List

It is useful when frequent insertion and deletion are required.


### topic 8 

std::forward_list

"std::forward_list" is an STL sequence container implemented as a singly linked list.

Each element stores a link to the next element, so traversal is possible only in the forward direction.

Features

- Dynamic size.
- Uses a singly linked list.
- Supports forward traversal only.
- Does not support random access using "[]".
- Uses less memory than "std::list".
- "push_front()" → adds at the beginning.
- "pop_front()" → removes the first element.
- "insert_after()" → inserts after a given position.
- "erase_after()" → removes the element after a given position.

Example

forward_list<int> numbers = {10, 20, 30};

numbers.push_front(5);

Output:

5 10 20 30

Key Point

"std::list" → Doubly linked list → forward + backward

"std::forward_list" → Singly linked list → forward only

### topic 9

Container Adapters

Container adapters are STL components that provide a specific way to access and manage elements.

They use an underlying container and provide a restricted interface.

Types

1. stack

- Follows LIFO (Last In, First Out).
- "push()" → adds an element.
- "pop()" → removes the top element.
- "top()" → accesses the top element.

2. queue

- Follows FIFO (First In, First Out).
- "push()" → adds an element at the back.
- "pop()" → removes the front element.
- "front()" → accesses the first element.
- "back()" → accesses the last element.

3. priority_queue

- Highest-priority element is accessed first.
- By default, the largest element has the highest priority.
- "push()" → adds an element.
- "pop()" → removes the highest-priority element.
- "top()" → accesses the highest-priority element.

Key Point

"stack" → LIFO

"queue" → FIFO

"priority_queue" → Highest priority first

### topic 10

std::stack

"std::stack" is an STL container adapter that follows the LIFO (Last In, First Out) principle.

The element added last is removed first.

Example

stack<int> s;

s.push(10);
s.push(20);
s.push(30);

Stack:

30 ← Top
20
10

Important Functions

- "push()" → adds an element to the top.
- "pop()" → removes the top element.
- "top()" → accesses the top element.
- "empty()" → checks whether the stack is empty.
- "size()" → returns the number of elements.

Example

cout << s.top();  // 30
s.pop();          // removes 30

Key Point

"stack" → LIFO → Last In, First Out

Real-life example: Stack of plates — the last plate placed is the first plate removed.


### topic 11

std::priority_queue

"std::priority_queue" is an STL container adapter where the highest-priority element is accessed first.

By default, the largest element has the highest priority.

Example

priority_queue<int> pq;

pq.push(10);
pq.push(30);
pq.push(20);

"top()" returns:

30

Important Functions

- "push()" → adds an element.
- "pop()" → removes the highest-priority element.
- "top()" → accesses the highest-priority element.
- "empty()" → checks whether the queue is empty.
- "size()" → returns the number of elements.

Min Priority Queue

To make the smallest element have the highest priority:

priority_queue<int, vector<int>, greater<int>> pq;

Here, "10" will be accessed before "20" and "30".

Key Point

"priority_queue" → Highest-priority element first

Default → Largest element first


### topic 12

Associative Containers

Associative containers are STL containers that store elements in an organized way and provide efficient searching, insertion, and deletion.

They are generally based on keys and maintain elements in sorted order.

Types

1. "set"

- Stores unique elements.
- Elements are sorted.
- Duplicate values are not allowed.

2. "multiset"

- Stores elements in sorted order.
- Allows duplicate values.

3. "map"

- Stores data as key-value pairs.
- Keys are unique.
- Elements are sorted by key.

4. "multimap"

- Stores data as key-value pairs.
- Allows duplicate keys.
- Elements are sorted by key.

Key Points

- Associative containers generally maintain sorted order.
- Searching, insertion, and deletion are typically O(log n).
- "set" → unique values.
- "multiset" → duplicate values allowed.
- "map" → unique keys + values.
- "multimap" → duplicate keys + values.

Simple ga:
Associative containers → data ni keys/value relationships tho organized ga store chestayi.


### topic 13

std::set

"std::set" is an STL associative container that stores unique elements in sorted order.

Features

- Stores unique elements.
- Duplicate values are not allowed.
- Elements are automatically sorted.
- Searching, insertion, and deletion are typically "O(log n)".
- "insert()" → adds an element.
- "erase()" → removes an element.
- "find()" → searches for an element.
- "count()" → checks whether an element exists.
- "size()" → returns the number of elements.
- "empty()" → checks whether the set is empty.

Example

set<int> numbers = {30, 10, 20, 10};

Output:

10 20 30

The duplicate "10" is stored only once.

Key Point

"set" → Unique + Sorted


### topic 14

std::multiset

"std::multiset" is an STL associative container that stores elements in sorted order and allows duplicate values.

Features

- Allows duplicate elements.
- Elements are automatically sorted.
- Searching, insertion, and deletion are typically "O(log n)".
- "insert()" → adds an element.
- "erase()" → removes element(s).
- "find()" → searches for an element.
- "count()" → returns the number of occurrences.
- "size()" → returns the number of elements.
- "empty()" → checks whether the multiset is empty.

Example

multiset<int> numbers = {30, 10, 20, 10, 30};

Output:

10 10 20 30 30

Difference

"set" → Unique + Sorted

"multiset" → Duplicates + Sorted


### topic 15

std::map

"std::map" is an STL associative container that stores data as key-value pairs.

Each key is unique, and elements are automatically sorted by key.

Features

- Stores key-value pairs.
- Keys must be unique.
- Elements are sorted by key.
- Searching, insertion, and deletion are typically "O(log n)".
- "insert()" → adds a key-value pair.
- "erase()" → removes an element.
- "find()" → searches for a key.
- "count()" → checks whether a key exists.
- "size()" → returns the number of elements.
- "empty()" → checks whether the map is empty.

Example

map<int, string> students;

students[101] = "Harika";
students[102] = "Anu";
students[103] = "Ravi";

Data:

101 → Harika
102 → Anu
103 → Ravi

Key Point

"map" → Unique Keys + Key-Value Pairs + Sorted by Key

### topic 16

std::multimap

"std::multimap" is an STL associative container that stores data as key-value pairs and allows duplicate keys.

Elements are automatically sorted by key.

Features

- Stores key-value pairs.
- Allows duplicate keys.
- Elements are sorted by key.
- "insert()" → adds a key-value pair.
- "erase()" → removes elements.
- "find()" → searches for a key.
- "count()" → returns the number of elements with a key.
- "equal_range()" → returns the range of elements with the same key.
- Searching, insertion, and deletion are typically "O(log n)".

Example

multimap<int, string> students;

students.insert({101, "Harika"});
students.insert({101, "Anu"});
students.insert({102, "Ravi"});

Output:

101 -> Harika
101 -> Anu
102 -> Ravi

Difference

"map" → Unique Keys + Sorted

"multimap" → Duplicate Keys + Sorted

### topic 17

Unordered Containers

Unordered containers are STL associative containers that use hashing to store and access elements.

They do not maintain elements in sorted order.

Types

1. unordered_set

- Stores unique elements.
- Elements are not sorted.

2. unordered_multiset

- Allows duplicate elements.
- Elements are not sorted.

3. unordered_map

- Stores key-value pairs.
- Keys are unique.
- Elements are not sorted.

4. unordered_multimap

- Stores key-value pairs.
- Allows duplicate keys.
- Elements are not sorted.

Features

- Based on hash tables.
- No guaranteed sorted order.
- Average insertion, deletion, and search: "O(1)".
- Worst-case: "O(n)".
- Useful when fast lookup is more important than ordering.

Key Point

"set/map" → Sorted + O(log n)

"unordered_set/unordered_map" → Unsorted + Average O(1)


### topic 18

std::unordered_set

"std::unordered_set" is an STL unordered associative container that stores unique elements using a hash table.

Elements are not stored in sorted order.

Features

- Stores unique elements.
- Duplicate values are not allowed.
- Elements are not sorted.
- Uses hashing.
- Average search, insertion, and deletion: "O(1)".
- Worst-case: "O(n)".
- "insert()" → adds an element.
- "erase()" → removes an element.
- "find()" → searches for an element.
- "count()" → checks whether an element exists.
- "size()" → returns the number of elements.
- "empty()" → checks whether the container is empty.

Example

unordered_set<int> numbers = {30, 10, 20, 10};

The duplicate "10" is stored only once.

Difference

"set" → Unique + Sorted + O(log n)

"unordered_set" → Unique + Unsorted + Average O(1)

### topic 19

std::unordered_multiset

"std::unordered_multiset" is an STL unordered associative container that stores multiple elements, including duplicates, using a hash table.

Elements are not stored in sorted order.

Features

- Duplicate elements are allowed.
- Elements are not sorted.
- Uses hashing.
- Average insertion, search, and deletion: "O(1)".
- Worst-case: "O(n)".
- "insert()" → adds an element.
- "erase()" → removes elements.
- "find()" → searches for an element.
- "count()" → returns how many times an element exists.
- "size()" → returns the total number of elements.
- "empty()" → checks whether the container is empty.

Example

unordered_multiset<int> numbers = {10, 20, 10, 30, 20};

Here, duplicate "10" and "20" are allowed.

Key Point

"unordered_multiset" → Duplicates + Unsorted + Hashing + Average O(1)

### topic 20

std::unordered_map

"std::unordered_map" is an STL unordered associative container that stores data in key-value pairs using a hash table.

Features

- Stores data as key-value pairs.
- Keys must be unique.
- Elements are not sorted.
- Uses hashing.
- Average insertion, search, and deletion: "O(1)".
- Worst-case: "O(n)".
- "insert()" → adds a key-value pair.
- "erase()" → removes a pair.
- "find()" → searches for a key.
- "count()" → checks whether a key exists.
- "at()" → accesses the value using a key.
- "[]" → accesses or creates a value using a key.
- "size()" → returns the number of key-value pairs.
- "empty()" → checks whether the container is empty.

Example

unordered_map<int, string> students;

students[101] = "Harika";
students[102] = "Anu";

Here:

- "101", "102" → Keys
- ""Harika"", ""Anu"" → Values

Key Point

"unordered_map" → Key-Value + Unique Keys + Unsorted + Hashing + Average O(1)

### topic 21

std::unordered_multimap

"std::unordered_multimap" is an STL unordered associative container that stores data in key-value pairs using a hash table.

Features

- Stores data as key-value pairs.
- Duplicate keys are allowed.
- Elements are not sorted.
- Uses hashing.
- Average insertion, search, and deletion: "O(1)".
- Worst-case: "O(n)".
- "insert()" → adds a key-value pair.
- "erase()" → removes pair/pairs.
- "find()" → searches for a key.
- "count()" → returns how many times a key exists.
- "equal_range()" → finds all pairs with the same key.
- "size()" → returns the total number of key-value pairs.

Example

unordered_multimap<int, string> students;

students.insert({101, "Harika"});
students.insert({101, "Anu"});
students.insert({102, "Ravi"});

Here, key "101" appears multiple times.

Key Point

"unordered_multimap" → Key-Value + Duplicate Keys + Unsorted + Hashing + Average O(1)
