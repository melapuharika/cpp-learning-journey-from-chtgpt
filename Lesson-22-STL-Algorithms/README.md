# Lesson 22 – STL Algorithms

## STL Algorithms

### Sorting Algorithms
- Sort
- Stable Sort
- Reverse

### Searching Algorithms
- Find
- Find If
- Binary Search
- Lower Bound
- Upper Bound

### Counting Algorithms
- Count
- Count If

### Min/Max Algorithms
- Min
- Max
- Min Element
- Max Element

### Numeric Algorithms
- Accumulate

### Modifying Algorithms
- For Each
- Transform
- Remove
- Remove If
- Unique


### topic 1

Sort

- "sort()" is an STL algorithm used to sort elements in a range.
- It is available in the "<algorithm>" header.
- By default, it sorts elements in ascending order.
- It can also sort elements in descending order using a comparator.

Syntax

sort(begin, end);

Ascending Order

vector<int> v = {40, 10, 30, 20};

sort(v.begin(), v.end());

Result:

10 20 30 40

Descending Order

sort(v.begin(), v.end(), greater<int>());

Result:

40 30 20 10

Header

#include <algorithm>

Key Point

"sort()" = Sorts elements in a range, ascending by default.


### topic 2

Stable Sort

- "stable_sort()" is an STL algorithm used to sort elements in a range.
- It preserves the relative order of equal elements.
- It is available in the "<algorithm>" header.
- By default, it sorts elements in ascending order.
- It can also use a custom comparator.

Syntax

stable_sort(begin, end);

Example

vector<pair<string, int>> students = {
    {"A", 80},
    {"B", 70},
    {"C", 80}
};

stable_sort(students.begin(), students.end(),
    [](auto a, auto b) {
        return a.second < b.second;
    });

Result:

B → 70
A → 80
C → 80

A and C have the same marks, so their original order is preserved.

Header

#include <algorithm>

Key Point

"stable_sort()" = Sort + Preserve the relative order of equal elements.


### topic 3

Reverse

- "reverse()" is an STL algorithm used to reverse the order of elements in a range.
- It is available in the "<algorithm>" header.
- It reverses the elements in the same container.
- It does not create a new container.
- It works with bidirectional iterators.

Syntax

reverse(begin, end);

Example

vector<int> v = {10, 20, 30, 40};

reverse(v.begin(), v.end());

Result:

40 30 20 10

Header

#include <algorithm>

Key Point

"reverse()" = Reverses the order of elements in a range.


### topic 4

Find

- "find()" is an STL algorithm used to search for a specific value in a range.
- It is available in the "<algorithm>" header.
- It returns an iterator pointing to the found element.
- If the value is not found, it returns "end()".
- It performs a linear search.

Syntax

find(begin, end, value);

Example

vector<int> v = {10, 20, 30, 40};

auto it = find(v.begin(), v.end(), 30);

if (it != v.end())
    cout << "Found";
else
    cout << "Not Found";

Result

Found

Header

#include <algorithm>

Key Point

"find()" = Searches for a specific value and returns an iterator to it.


### topic 5

Find If

- "find_if()" is an STL algorithm used to search for the first element that satisfies a condition.
- It is available in the "<algorithm>" header.
- It returns an iterator pointing to the first matching element.
- If no element satisfies the condition, it returns "end()".
- It uses a predicate (condition) to search.

Syntax

find_if(begin, end, condition);

Example

vector<int> v = {10, 15, 22, 30};

auto it = find_if(v.begin(), v.end(), [](int x) {
    return x % 2 == 0;
});

The first even number is "10".

Header

#include <algorithm>

Difference

- "find()" → Searches for a specific value.
- "find_if()" → Searches using a condition.

Key Point

"find_if()" = Finds the first element that satisfies a given condition.
