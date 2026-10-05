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
