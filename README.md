# cpp-learning-journey-from-chtgpt
My journey of learning C++ from basics to advanced concepts, with notes, examples, and practice programs.

### Lesson 07 — Control Statements

1. Control Statements

What are Control Statements?

Control statements are statements used to control the flow of execution of a C++ program.

Normally, a C++ program executes statements from top to bottom, one after another.

But in real programs, we may need to:

- Make a decision
- Execute a block only when a condition is true
- Execute a block repeatedly
- Stop or skip part of the execution
- Change the normal flow of execution

For these purposes, we use Control Statements.

---

Why do we need Control Statements?

Suppose we want to check whether a student passed an exam.

We can write:

if (marks >= 40) {
    cout << "Pass";
}

Here, the program checks a condition before deciding what to execute.

Without control statements, programs would mostly execute every statement in the same sequence.

Control statements make programs dynamic and logical.

---

Types of Control Statements

In this lesson, we learn three major types:

Control Statements
│
├── 1. Conditional Statements
│
├── 2. Loops
│
└── 3. Jump Statements

---

1. Conditional Statements

Conditional statements are used to make decisions.

They check a condition and execute statements depending on whether the condition is true or false.

Types of Conditional Statements

Conditional Statements
│
├── if
├── if-else
├── Nested if
├── else if
├── switch
└── Nested switch

Example

int age = 20;

if (age >= 18) {
    cout << "Eligible";
}

Here:

- "age >= 18" is the condition.
- The condition is true.
- Therefore, ""Eligible"" is printed.

---

2. Loops

Loops are used when we want to execute the same block of code repeatedly.

Instead of writing the same code many times, we can use a loop.

Types of Loops

Loops
│
├── for
├── while
├── do-while
└── range-based for

Example

for (int i = 1; i <= 5; i++) {
    cout << i << endl;
}

Output

1
2
3
4
5

The "cout" statement is executed repeatedly using the loop.

---

3. Jump Statements

Jump statements are used to change the normal flow of execution.

Types of Jump Statements

Jump Statements
│
├── break
├── continue
├── return
└── goto

Example — break

for (int i = 1; i <= 5; i++) {

    if (i == 3) {
        break;
    }

    cout << i << endl;
}

Output

1
2

When "i" becomes "3", the "break" statement stops the loop.

---

Easy Way to Remember

Conditional Statements → Make a decision

Loops → Repeat something

Jump Statements → Change or interrupt the flow

Simple examples from real life

Conditional:

If it is raining → Take an umbrella.

Loop:

Repeat studying until the chapter is completed.

Jump:

Stop the activity when the teacher says "Stop".

---

Simple C++ Example

#include <iostream>
using namespace std;

int main() {

    int age = 20;

    if (age >= 18) {
        cout << "Adult";
    }

    return 0;
}

Output

Adult

How the program works

Start
  ↓
age = 20
  ↓
Check: age >= 18
  ↓
Condition is true
  ↓
Print "Adult"
  ↓
End

---

Important Points

1. Control statements control the execution flow of a program.
2. They help programs make decisions.
3. They allow code to be repeated.
4. They can change or interrupt the normal execution flow.
5. Conditional statements are used for decisions.
6. Loops are used for repetition.
7. Jump statements are used to change the flow of execution.

---

Quick Revision

Type| Purpose| Examples
Conditional| Decision making| "if", "if-else", "switch"
Loops| Repetition| "for", "while", "do-while"
Jump| Change execution flow| "break", "continue", "return", "goto"

One-Line Definition

Control statements are statements that control the flow of execution of a C++ program.


### topic:2 if Statement

What is an "if" Statement?

The "if" statement is a conditional statement used to execute a block of code only when a specified condition is true.

In simple words:

«If the condition is true → execute the code.
If the condition is false → skip the code.»

---

Real-Life Example

Suppose:

If it is raining
    Take an umbrella

If it is raining, we take an umbrella.

If it is not raining, we don't take the umbrella.

C++ uses the same idea with the "if" statement.

---

Syntax

if (condition) {
    // statements
}

Parts of the Syntax

- "if" → keyword used to check a condition.
- "condition" → expression that gives "true" or "false".
- "{ }" → contains the code that should execute when the condition is true.
- "statements" → code to be executed.

---

Example 1 — Condition is True

#include <iostream>
using namespace std;

int main() {

    int age = 20;

    if (age >= 18) {
        cout << "You are eligible to vote";
    }

    return 0;
}

Output

You are eligible to vote

How it works

age = 20

Check:
age >= 18

20 >= 18
   ↓
 TRUE
   ↓
Execute if block
   ↓
Print the message

---

Example 2 — Condition is False

#include <iostream>
using namespace std;

int main() {

    int age = 15;

    if (age >= 18) {
        cout << "You are eligible to vote";
    }

    return 0;
}

Output

No output

Why?

age = 15

Check:
15 >= 18
   ↓
 FALSE
   ↓
Skip the if block

When the condition is false, the code inside the "if" block is not executed.

---

Example 3 — Checking Marks

#include <iostream>
using namespace std;

int main() {

    int marks = 75;

    if (marks >= 40) {
        cout << "Pass";
    }

    return 0;
}

Output

Pass

Because:

75 >= 40
    ↓
  TRUE
    ↓
Print "Pass"

---

Example 4 — Multiple Statements

We can have multiple statements inside an "if" block.

#include <iostream>
using namespace std;

int main() {

    int marks = 80;

    if (marks >= 40) {
        cout << "You passed!" << endl;
        cout << "Congratulations!" << endl;
    }

    return 0;
}

Output

You passed!
Congratulations!

Both statements execute because the condition is true.

---

Conditions in "if"

We can use relational operators to create conditions.

Examples:

if (a > b)
if (a < b)
if (a >= b)
if (a <= b)
if (a == b)
if (a != b)

Example

int a = 10;
int b = 5;

if (a > b) {
    cout << "a is greater";
}

Output:

a is greater

---

Using Logical Operators

We can also use logical operators inside an "if" condition.

AND "&&"

Both conditions must be true.

if (age >= 18 && age <= 60) {
    cout << "Eligible";
}

OR "||"

At least one condition must be true.

if (marks >= 40 || attendance >= 75) {
    cout << "Condition satisfied";
}

NOT "!"

Reverses the condition.

if (!isAbsent) {
    cout << "Present";
}

---

Important Points

1. "if" is a conditional statement.
2. It checks a condition before executing its block.
3. If the condition is true, the block executes.
4. If the condition is false, the block is skipped.
5. The condition is usually an expression that evaluates to "true" or "false".
6. Multiple statements can be placed inside "{ }".
7. Relational and logical operators can be used to create conditions.
8. An "if" statement can be used independently without "else".

---

Flowchart

        Start
          ↓
    Check condition
          ↓
     ┌────┴────┐
   TRUE       FALSE
     ↓           ↓
Execute block   Skip block
     ↓           ↓
     └────┬──────┘
          ↓
         End

---

Simple Memory Trick

if = Check → Decide → Execute

Condition TRUE
      ↓
Execute

Condition FALSE
      ↓
Skip

---

One-Line Definition

The "if" statement executes a block of code only when the specified condition is true.

### topic:3 if-else Statement

What is an "if-else" Statement?

The "if-else" statement is a conditional statement used to choose between two possible blocks of code.

Simple ga:

«Condition true aithe → "if" block execute avtundi.
Condition false aithe → "else" block execute avtundi.»

So, "if-else" is useful when we have two possible outcomes.

---

Real-Life Example

Suppose we want to check whether a student passed an exam.

Rule:

Marks >= 40 → Pass
Marks < 40  → Fail

Here there are two possibilities:

              Marks
                ↓
          marks >= 40 ?
           ↙         ↘
        TRUE         FALSE
          ↓             ↓
        PASS           FAIL

C++ lo:

if (marks >= 40) {
    cout << "Pass";
}
else {
    cout << "Fail";
}

---

Syntax

if (condition) {
    // statements when condition is true
}
else {
    // statements when condition is false
}

Meaning

- "if" → condition ni check chestundi.
- "condition" → "true" or "false" result istundi.
- "if" block → condition true ayithe execute avtundi.
- "else" block → condition false ayithe execute avtundi.

---

Example 1 — Pass or Fail

#include <iostream>
using namespace std;

int main() {

    int marks = 75;

    if (marks >= 40) {
        cout << "Pass";
    }
    else {
        cout << "Fail";
    }

    return 0;
}

Output

Pass

How it works

marks = 75

75 >= 40
    ↓
  TRUE
    ↓
if block
    ↓
Pass

Since the condition is true, the "if" block executes.

The "else" block is skipped.

---

Example 2 — Condition is False

#include <iostream>
using namespace std;

int main() {

    int marks = 30;

    if (marks >= 40) {
        cout << "Pass";
    }
    else {
        cout << "Fail";
    }

    return 0;
}

Output

Fail

How it works

marks = 30

30 >= 40
    ↓
  FALSE
    ↓
else block
    ↓
Fail

Since the condition is false, the "if" block is skipped and the "else" block executes.

---

Example 3 — Even or Odd

We can use "if-else" to check whether a number is even or odd.

#include <iostream>
using namespace std;

int main() {

    int number = 7;

    if (number % 2 == 0) {
        cout << "Even";
    }
    else {
        cout << "Odd";
    }

    return 0;
}

Output

Odd

Why?

7 % 2 = 1

So:

1 == 0
   ↓
 FALSE
   ↓
else block
   ↓
Odd

---

Example 4 — Voting Eligibility

#include <iostream>
using namespace std;

int main() {

    int age = 16;

    if (age >= 18) {
        cout << "Eligible to vote";
    }
    else {
        cout << "Not eligible to vote";
    }

    return 0;
}

Output

Not eligible to vote

Because:

16 >= 18
    ↓
  FALSE
    ↓
else block

---

"if" vs "if-else"

Only "if"

if (marks >= 40) {
    cout << "Pass";
}

If the condition is true:

Pass

If the condition is false:

No output

---

"if-else"

if (marks >= 40) {
    cout << "Pass";
}
else {
    cout << "Fail";
}

If the condition is true:

Pass

If the condition is false:

Fail

Easy Difference

if
↓
Only checks TRUE condition.

if-else
↓
Handles both TRUE and FALSE conditions.

---

Important Rule

In an "if-else" statement:

Condition TRUE
     ↓
if block executes
else block is skipped

OR

Condition FALSE
     ↓
if block is skipped
else block executes

Normally, only one of the two blocks executes.

---

Flowchart

             Start
               ↓
        Check condition
               ↓
         ┌─────┴─────┐
       TRUE         FALSE
         ↓             ↓
     if block      else block
         ↓             ↓
         └─────┬───────┘
               ↓
              End

---

Using Relational Operators

We can use relational operators in the condition.

if (a > b) {
    // code
}
else {
    // code
}

Other examples:

if (a < b)
if (a >= b)
if (a <= b)
if (a == b)
if (a != b)

---

Using Logical Operators

We can also combine conditions using logical operators.

Example — AND "&&"

if (age >= 18 && age <= 60) {
    cout << "Eligible";
}
else {
    cout << "Not eligible";
}

Both conditions must be true for the "if" block to execute.

---

Common Mistake

Assignment "=" and comparison "==" are different.

Wrong:

if (age = 18)

Correct for comparison:

if (age == 18)

- "=" → Assignment
- "==" → Comparison

---

Another Common Mistake

Don't write:

else (condition)

This is incorrect.

Correct:

if (condition) {
    // code
}
else {
    // code
}

"else" does not have a condition.

---

Easy Memory Trick

Remember:

if = If this condition is TRUE

else = If the condition is NOT TRUE

Or simply:

TRUE  → IF
FALSE → ELSE

---

Key Points

1. "if-else" is a conditional statement.
2. It is used for decision making.
3. It provides two possible execution paths.
4. If the condition is true, the "if" block executes.
5. If the condition is false, the "else" block executes.
6. Normally, only one block executes.
7. "else" does not have a separate condition.
8. Relational and logical operators can be used in the condition.
9. "=" is assignment, while "==" is comparison.

---

One-Line Definition

The "if-else" statement is used to execute one block of code when a condition is true and another block when the condition is false.

---

Quick Revision

              if-else
                 ↓
        Check a condition
                 ↓
          ┌──────┴──────┐
        TRUE           FALSE
          ↓               ↓
      if block        else block

Remember:

TRUE → IF ❤️

FALSE → ELSE ❤️
