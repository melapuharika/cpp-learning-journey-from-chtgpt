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


### topic 6
Count

- "count()" is an STL algorithm used to count how many times a specific value occurs in a range.
- It is available in the "<algorithm>" header.
- It returns the number of matching elements.
- It does not modify the container.
- It searches the entire given range.

Syntax

count(begin, end, value);

Example

vector<int> v = {10, 20, 10, 30, 10};

int result = count(v.begin(), v.end(), 10);

cout << result;

Output:

3

Header

#include <algorithm>

Key Point

"count()" = Counts the number of times a specific value occurs in a range.


### topic 7

Count If

- "count_if()" is an STL algorithm used to count elements that satisfy a given condition.
- It is available in the "<algorithm>" header.
- It returns the number of elements that satisfy the condition.
- It uses a predicate (condition).
- It does not modify the container.

Syntax

count_if(begin, end, condition);

Example

vector<int> v = {10, 15, 20, 25, 30};

int result = count_if(v.begin(), v.end(), [](int x) {
    return x % 2 == 0;
});

Output:

3

The even numbers are "10", "20", and "30".

Header

#include <algorithm>

Difference

- "count()" → Counts a specific value.
- "count_if()" → Counts elements satisfying a condition.

Key Point

"count_if()" = Counts elements that satisfy a given condition.


### topic 8

Binary Search

- "binary_search()" is an STL algorithm used to check whether a specific value exists in a range.
- It is available in the "<algorithm>" header.
- The range must be sorted before using "binary_search()".
- It returns a Boolean value:
  - "true" → Element is found.
  - "false" → Element is not found.
- It does not return an iterator.

Syntax

binary_search(begin, end, value);

Example

vector<int> v = {10, 20, 30, 40, 50};

bool found = binary_search(v.begin(), v.end(), 30);

cout << found;

Output:

1

If Element Is Not Found

bool found = binary_search(v.begin(), v.end(), 35);

Output:

0

Header

#include <algorithm>

Difference

- "find()" → Returns an iterator.
- "binary_search()" → Returns true or false.

Key Point

"binary_search()" = Checks whether an element exists in a sorted range.


### topic 9

Lower Bound

- "lower_bound()" is an STL algorithm used to find the first position where a value can be inserted without breaking sorted order.
- It is available in the "<algorithm>" header.
- The range should be sorted.
- It returns an iterator.
- If the value exists multiple times, it returns the first occurrence.
- If the value does not exist, it returns the position where it can be inserted.

Syntax

lower_bound(begin, end, value);

Example

vector<int> v = {10, 20, 20, 30, 40};

auto it = lower_bound(v.begin(), v.end(), 20);

cout << *it;

Output:

20

Example: Value Not Present

auto it = lower_bound(v.begin(), v.end(), 25);

It returns the position before "30", where "25" can be inserted.

Header

#include <algorithm>

Key Point

"lower_bound()" = Returns an iterator to the first position where the value can be inserted.


### topic 10

Upper Bound

- "upper_bound()" is an STL algorithm used to find the first element greater than a given value.
- It is available in the "<algorithm>" header.
- The range should be sorted.
- It returns an iterator.
- If the value occurs multiple times, it skips all occurrences and returns the first greater element.

Syntax

upper_bound(begin, end, value);

Example

vector<int> v = {10, 20, 20, 30, 40};

auto it = upper_bound(v.begin(), v.end(), 20);

cout << *it;

Output:

30

Difference

- "lower_bound(20)" → first element ≥ 20
- "upper_bound(20)" → first element > 20

Header

#include <algorithm>

Key Point

"upper_bound()" = Returns an iterator to the first element greater than the given value.


### topic 11

Min

- "min()" is an STL function used to find the smaller of two values.
- It is available in the "<algorithm>" header.
- It returns the smaller value.
- It does not modify the original values.

Syntax

min(a, b);

Example

int a = 10;
int b = 20;

cout << min(a, b);

Output:

10

Example with Characters

char a = 'A';
char b = 'B';

cout << min(a, b);

Output:

A

Header

#include <algorithm>

Key Point

"min()" = Returns the smaller of two values.

### topic 12

Max

- "max()" is an STL function used to find the larger of two values.
- It is available in the "<algorithm>" header.
- It returns the larger value.
- It does not modify the original values.

Syntax

max(a, b);

Example

int a = 10;
int b = 20;

cout << max(a, b);

Output:

20

Header

#include <algorithm>

Key Point

"max()" = Returns the larger of two values.


### topic 13

Min Element

- "min_element()" is an STL algorithm used to find the smallest element in a range.
- It is available in the "<algorithm>" header.
- It returns an iterator pointing to the smallest element.
- It does not modify the container.
- It searches the given range.

Syntax

min_element(begin, end);

Example

vector<int> v = {40, 10, 30, 20};

auto it = min_element(v.begin(), v.end());

cout << *it;

Output:

10

Header

#include <algorithm>

Difference

- "min()" → Finds the smaller of two values.
- "min_element()" → Finds the smallest element in a range.

Key Point

"min_element()" = Returns an iterator to the smallest element in a range.


### topic 14

Max Element

- "max_element()" is an STL algorithm used to find the largest element in a range.
- It is available in the "<algorithm>" header.
- It returns an iterator pointing to the largest element.
- It does not modify the container.
- It searches the given range.

Syntax

max_element(begin, end);

Example

vector<int> v = {40, 10, 30, 20};

auto it = max_element(v.begin(), v.end());

cout << *it;

Output:

40

Header

#include <algorithm>

Difference

- "max()" → Finds the larger of two values.
- "max_element()" → Finds the largest element in a range.

Key Point

"max_element()" = Returns an iterator to the largest element in a range.


### topic 15

Accumulate

- "accumulate()" is a numeric algorithm used to combine elements of a range into one result.
- It is commonly used to calculate the sum of elements.
- It is available in the "<numeric>" header.
- It takes an initial value as the third argument.
- It does not modify the container.

Syntax

accumulate(begin, end, initial_value);

Example

vector<int> v = {10, 20, 30, 40};

int sum = accumulate(v.begin(), v.end(), 0);

cout << sum;

Output:

100

Here, "0" is the initial value.

Header

#include <numeric>

Key Point

"accumulate()" = Combines elements of a range into one result.


### topic 16

For Each

- "for_each()" is an STL algorithm used to apply an operation to every element in a range.
- It is available in the "<algorithm>" header.
- It takes a function, function object, or lambda expression.
- It can read or modify elements depending on how the function is defined.

Syntax

for_each(begin, end, function);

Example

vector<int> v = {10, 20, 30, 40};

for_each(v.begin(), v.end(), [](int x) {
    cout << x << " ";
});

Output:

10 20 30 40

Modifying Elements

for_each(v.begin(), v.end(), [](int& x) {
    x *= 2;
});

Result:

20 40 60 80

Header

#include <algorithm>

Key Point

"for_each()" = Applies an operation to every element in a range.


### topic 17

Transform

- "transform()" is an STL algorithm used to apply an operation to each element.
- It stores the transformed result in an output range.
- It is available in the "<algorithm>" header.
- It is commonly used with lambda expressions.
- It can transform one range or combine two ranges.

Syntax

transform(begin, end, output, operation);

Example

vector<int> v = {1, 2, 3, 4};
vector<int> result(4);

transform(v.begin(), v.end(), result.begin(), [](int x) {
    return x * 2;
});

Result:

2 4 6 8

Header

#include <algorithm>

Key Point

"transform()" = Applies an operation to elements and stores the transformed results.


### topic 18

Remove

- "remove()" is an STL algorithm used to remove elements equal to a specific value from a range.
- It is available in the "<algorithm>" header.
- "remove()" does not actually reduce the container size.
- It rearranges the elements and returns an iterator to the new logical end.
- To actually remove the elements, use "erase()".

Syntax

remove(begin, end, value);

Example

vector<int> v = {10, 20, 10, 30, 10};

v.erase(remove(v.begin(), v.end(), 10), v.end());

Result:

20 30

Erase-Remove Idiom

v.erase(remove(v.begin(), v.end(), value), v.end());

- "remove()" → Moves unwanted elements to the end.
- "erase()" → Actually removes them and reduces the container size.

Header

#include <algorithm>

Key Point

"remove()" = Removes a value logically; use "erase()" to actually remove the elements.


### topic 19

Remove If

- "remove_if()" is an STL algorithm used to remove elements that satisfy a given condition.
- It is available in the "<algorithm>" header.
- "remove_if()" does not actually reduce the container size.
- It rearranges the elements and returns an iterator to the new logical end.
- To actually remove the elements, use "erase()".

Syntax

remove_if(begin, end, condition);

Example

vector<int> v = {10, 15, 20, 25, 30};

v.erase(
    remove_if(v.begin(), v.end(), [](int x) {
        return x % 2 == 0;
    }),
    v.end()
);

Result

15 25

How It Works

- "remove_if()" checks every element.
- The condition "x % 2 == 0" checks whether the number is even.
- Elements satisfying the condition are moved toward the end.
- "erase()" actually removes those elements.
- The container size is reduced after "erase()".

Erase-Remove Idiom

v.erase(
    remove_if(v.begin(), v.end(), condition),
    v.end()
);

- "remove_if()" → Finds and rearranges elements that satisfy the condition.
- "erase()" → Actually removes them and reduces the container size.

Header

#include <algorithm>

Difference

- "remove()" → Removes a specific value.
- "remove_if()" → Removes elements based on a condition.

Key Point

"remove_if()" = Removes elements logically based on a condition; use "erase()" to actually remove them.


### topic 20

Unique

- "unique()" is an STL algorithm used to remove consecutive duplicate elements from a range.
- It is available in the "<algorithm>" header.
- "unique()" does not actually reduce the container size.
- It rearranges the elements and returns an iterator to the new logical end.
- To actually remove the duplicate elements, use "erase()".

Syntax

unique(begin, end);

Example

vector<int> v = {10, 10, 20, 20, 20, 30};

v.erase(unique(v.begin(), v.end()), v.end());

Result

10 20 30

How It Works

- "unique()" checks for consecutive duplicate elements.
- It moves unique elements toward the beginning.
- It returns an iterator pointing to the new logical end.
- "erase()" removes the remaining unwanted elements.

Erase-Unique Idiom

v.erase(unique(v.begin(), v.end()), v.end());

- "unique()" → Removes consecutive duplicates logically.
- "erase()" → Actually removes them and reduces the container size.

Important

"unique()" removes only consecutive duplicates.

Example:

vector<int> v = {10, 20, 10, 20};

Here, "unique()" will not remove the duplicate "10" or "20" because they are not next to each other.

Header

#include <algorithm>
Unique

- "unique()" is an STL algorithm used to remove consecutive duplicate elements from a range.
- It is available in the "<algorithm>" header.
- "unique()" does not actually reduce the container size.
- It rearranges the elements and returns an iterator to the new logical end.
- To actually remove the duplicate elements, use "erase()".

Syntax

unique(begin, end);

Example

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 10, 20, 20, 20, 30};

    v.erase(unique(v.begin(), v.end()), v.end());

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}

Output

10 20 30

How It Works

- "unique()" checks for consecutive duplicate elements.
- It moves unique elements toward the beginning.
- It returns an iterator pointing to the new logical end.
- "erase()" removes the remaining unwanted elements.

Erase-Unique Idiom

v.erase(unique(v.begin(), v.end()), v.end());

- "unique()" → Removes consecutive duplicates logically.
- "erase()" → Actually removes them and reduces the container size.

Important

"unique()" removes only consecutive duplicates.

Example:

vector<int> v = {10, 20, 10, 20};

Here, "unique()" will not remove the duplicate "10" or "20" because they are not next to each other.

Header

#include <algorithm>

Key Point

"unique()" = Removes consecutive duplicate elements logically; use "erase()" to actually remove them.
Key Point

"unique()" = Removes consecutive duplicate elements logically; use "erase()" to actually remove them.


### topic 21

Merge

- "merge()" is an STL algorithm used to combine two sorted ranges into one sorted range.
- It is available in the "<algorithm>" header.
- Both input ranges should be sorted.
- "merge()" does not modify the original containers.
- The merged result is stored in the destination range.

Syntax

merge(first1, last1, first2, last2, destination);

Example

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {1, 3, 5};
    vector<int> b = {2, 4, 6};

    vector<int> result(6);

    merge(a.begin(), a.end(),
          b.begin(), b.end(),
          result.begin());

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}

Output

1 2 3 4 5 6

How It Works

- "a" contains sorted elements: "1 3 5"
- "b" contains sorted elements: "2 4 6"
- "merge()" compares elements from both ranges.
- It places them into "result" in sorted order.

Important

Input ranges:

{1, 3, 5}
{2, 4, 6}

Merged result:

{1, 2, 3, 4, 5, 6}

The original vectors remain unchanged.

Header

#include <algorithm>

Key Point

"merge()" = Combines two sorted ranges into one sorted range.

## topic 22

Rotate

- "rotate()" is an STL algorithm used to change the position of elements in a range.
- It makes the element at the "middle" position the new first element.
- It is available in the "<algorithm>" header.
- "rotate()" modifies the original container.

Syntax

rotate(first, middle, last);

Example

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    rotate(v.begin(), v.begin() + 2, v.end());

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}

Output

3 4 5 1 2

How It Works

Original:

1 2 3 4 5

"v.begin() + 2" points to "3".

After rotation:

3 4 5 1 2

So, the element at "middle" becomes the new first element.

Important

rotate(v.begin(), v.begin() + 2, v.end());

- "v.begin()" → Starting position
- "v.begin() + 2" → Middle position / new beginning
- "v.end()" → Ending position

Header

#include <algorithm>

Key Point

"rotate()" = Makes the element at "middle" the new first element by rotating the range.


### topic 23
Swap

- "swap()" is a standard library function used to exchange the values of two objects.
- It can be used with variables, vector elements, strings, and other compatible objects.
- "swap()" modifies both objects.

Syntax

swap(a, b);

Example

#include <iostream>
#include <utility>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    swap(a, b);

    cout << a << " " << b;

    return 0;
}

Output

20 10

Vector Example

vector<int> v = {10, 20};

swap(v[0], v[1]);

Result

20 10

How It Works

Before "swap()":

a = 10
b = 20

After "swap()":

a = 20
b = 10

The values are exchanged.

Header

#include <utility>

Key Point

"swap()" = Exchanges the values of two objects.


### topic 24
Comparator

- A comparator is a function or function object used to define how two elements should be compared.
- It is commonly used with STL algorithms such as "sort()" and "stable_sort()".
- A comparator decides which element should come before another element.

Syntax

sort(begin, end, comparator);

Example – Descending Order

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 30, 20, 40};

    sort(v.begin(), v.end(), greater<int>());

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}

Output

40 30 20 10

Here, "greater<int>()" is a comparator that arranges elements from larger to smaller.

Custom Comparator

sort(v.begin(), v.end(), [](int a, int b) {
    return a > b;
});

- "a > b" → Larger elements come first.
- "a < b" → Smaller elements come first.

How Comparator Works

A comparator generally returns:

true  → first element should come before second
false → first element should not come before second

Example

[](int a, int b) {
    return a > b;
}

For:

a = 30
b = 10

"30 > 10" is "true", so "30" comes before "10".

Common Comparators

less<int>()

→ Ascending order

greater<int>()

→ Descending order

Header

#include <algorithm>
#include <functional>

Key Point

Comparator = Defines the rule used to compare and arrange elements.
