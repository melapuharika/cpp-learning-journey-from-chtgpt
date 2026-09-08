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
