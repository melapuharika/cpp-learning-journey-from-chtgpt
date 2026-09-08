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

### topic:4 Nested "if" Statement

What is a Nested "if"?

A nested "if" means an "if" statement placed inside another "if" statement.

Simple ga:

«"if" inside another "if" = Nested "if"»

It is used when we need to check a second condition only after the first condition is true.

---

Basic Structure

Outer if
   ↓
Condition 1
   ↓
TRUE
   ↓
Inner if
   ↓
Condition 2
   ↓
TRUE
   ↓
Execute code

---

Syntax

if (condition1) {

    if (condition2) {
        // statements
    }

}

Here:

- The first "if" is called the outer "if".
- The second "if" is called the inner "if".
- The inner "if" is inside the outer "if".

---

Real-Life Example

Suppose a student wants to write an exam.

There are two conditions:

1. Attendance must be at least 75%.
2. Fees must be paid.

First, we check attendance.

If attendance is sufficient, then we check fees.

Attendance >= 75%?
       ↓
     TRUE
       ↓
Fees paid?
   ↓       ↓
 TRUE     FALSE
   ↓         ↓
Eligible   Not eligible

This is a good situation for a nested "if".

---

Example 1 — Exam Eligibility

#include <iostream>
using namespace std;

int main() {

    int attendance = 80;
    bool feesPaid = true;

    if (attendance >= 75) {

        if (feesPaid == true) {
            cout << "Eligible for exam";
        }

    }

    return 0;
}

Output

Eligible for exam

---

How Does This Program Work?

First, the outer condition is checked:

attendance >= 75

The value is:

80 >= 75
   ↓
 TRUE

Because the first condition is true, the program enters the outer "if".

Then it checks the inner condition:

feesPaid == true

This is also true.

Therefore:

Eligible for exam

is printed.

---

Example 2 — First Condition is False

#include <iostream>
using namespace std;

int main() {

    int attendance = 60;
    bool feesPaid = true;

    if (attendance >= 75) {

        if (feesPaid == true) {
            cout << "Eligible for exam";
        }

    }

    return 0;
}

Output

No output

Why?

First condition:

60 >= 75
   ↓
 FALSE

Since the outer "if" is false, the program does not enter the outer block.

Therefore, the inner "if" is never checked.

---

Example 3 — Both Conditions

Consider:

int age = 20;
bool hasID = true;

if (age >= 18) {

    if (hasID == true) {
        cout << "You can enter";
    }

}

Flow

age >= 18?
     ↓
   TRUE
     ↓
hasID == true?
     ↓
   TRUE
     ↓
You can enter

Output

You can enter

---

What if the Inner Condition is False?

Suppose:

int age = 20;
bool hasID = false;

Outer condition:

20 >= 18
   ↓
 TRUE

So the inner "if" is checked.

Inner condition:

false == true
      ↓
    FALSE

Therefore, the inner block does not execute.

Output

No output

---

Important Concept

In nested "if", the inner condition depends on reaching the outer "if" block.

Outer condition
      ↓
   FALSE
      ↓
Inner condition is NOT checked

But:

Outer condition
      ↓
    TRUE
      ↓
Inner condition is checked

This is the most important thing to remember.

---

Nested "if" with "else"

We can also use "else" inside a nested "if".

int age = 20;
bool hasID = false;

if (age >= 18) {

    if (hasID == true) {
        cout << "Entry allowed";
    }
    else {
        cout << "ID required";
    }

}
else {
    cout << "Underage";
}

Output

ID required

Here:

- Age is 20 → outer "if" is true.
- Then "hasID" is checked.
- "hasID" is false.
- So the inner "else" executes.

---

Nested "if" vs "if-else"

"if-else"

Used when we have two alternatives:

Condition
  ↓
TRUE → if
FALSE → else

Nested "if"

Used when we need to check another condition inside an already-true condition:

Condition 1
    ↓
  TRUE
    ↓
Condition 2
    ↓
  TRUE
    ↓
  Code

---

Real-Life Examples of Nested "if"

Nested "if" can be useful for situations like:

Example 1 — Driving

If age >= 18
    If hasDrivingLicense
        Allow driving

Example 2 — Login

If username is correct
    If password is correct
        Login successful

Example 3 — Online Shopping

If product is available
    If payment is successful
        Order confirmed

---

Advantages

1. Allows us to check conditions step by step.
2. Useful when one condition depends on another.
3. Makes some decision-making logic easy to understand.
4. Useful when conditions have a clear hierarchy.

---

Disadvantages

Too many nested "if" statements can make code difficult to read.

Example:

if
    if
        if
            if
                if
                    code

Deep nesting can make programs confusing.

When the logic becomes complicated, other structures such as "else if", logical operators, or separate functions may sometimes be easier to understand.

---

Important Points

1. A nested "if" is an "if" statement inside another "if".
2. The outer "if" is checked first.
3. The inner "if" is checked only if the outer condition is true.
4. If the outer condition is false, the inner "if" is skipped.
5. Nested "if" can contain "else" statements.
6. Multiple levels of nesting are possible.
7. Too much nesting can make code difficult to read.

---

Easy Memory Trick

IF
 ↓
IF
 ↓
Code

Remember:

«First condition TRUE → Go inside → Check next condition.»

Or:

Outer IF = First gate 🚪

Inner IF = Second gate 🚪

Both gates open
      ↓
Reach the code

---

One-Line Definition

A nested "if" is an "if" statement placed inside another "if" statement to check multiple dependent conditions.

---

Quick Revision

             Outer if
                 ↓
          Condition 1?
           ↙       ↘
        FALSE      TRUE
          ↓          ↓
        Skip      Inner if
                     ↓
                Condition 2?
                 ↙       ↘
              FALSE      TRUE
                ↓          ↓
              Skip       Execute
              

### topic:5 "else if" Statement

What is an "else if" Statement?

The "else if" statement is used when we need to check multiple conditions.

Simple ga:

«First condition false aithe → next condition check cheyyi.»

Multiple conditions lo first true condition dorikina block execute avtundi.

---

Why do we use "else if"?

Suppose we want to assign a grade based on marks.

There are multiple possibilities:

90 or above → Grade A
75 or above → Grade B
60 or above → Grade C
40 or above → Grade D
Below 40   → Fail

Here, checking only one condition with "if" is not enough.

So we use an "else if" chain.

---

Syntax

if (condition1) {
    // statements
}
else if (condition2) {
    // statements
}
else if (condition3) {
    // statements
}
else {
    // statements when all conditions are false
}

How it works

The program checks the conditions from top to bottom.

Condition 1?
     ↓
   TRUE ─────→ Execute block → STOP
     ↓
   FALSE
     ↓
Condition 2?
     ↓
   TRUE ─────→ Execute block → STOP
     ↓
   FALSE
     ↓
Condition 3?
     ↓
   TRUE ─────→ Execute block → STOP
     ↓
   FALSE
     ↓
  else block

---

Example 1 — Grade System

#include <iostream>
using namespace std;

int main() {

    int marks = 82;

    if (marks >= 90) {
        cout << "Grade A";
    }
    else if (marks >= 75) {
        cout << "Grade B";
    }
    else if (marks >= 60) {
        cout << "Grade C";
    }
    else if (marks >= 40) {
        cout << "Grade D";
    }
    else {
        cout << "Fail";
    }

    return 0;
}

Output

Grade B

---

How Does This Program Work?

The value is:

marks = 82

Step 1

82 >= 90
    ↓
 FALSE

So the first "if" is skipped.

Step 2

82 >= 75
    ↓
 TRUE

So:

Grade B

is printed.

The program stops checking the remaining "else if" conditions.

---

⭐ Most Important Rule

In an "else if" chain:

«The first condition that becomes true is executed, and the remaining conditions are skipped.»

Example:

marks = 95

95 >= 90 → TRUE
       ↓
    Grade A
       ↓
    STOP

It will not check:

95 >= 75
95 >= 60
95 >= 40

because a matching condition has already been found.

---

Example 2 — All Conditions False

int marks = 25;

if (marks >= 90) {
    cout << "Grade A";
}
else if (marks >= 75) {
    cout << "Grade B";
}
else if (marks >= 60) {
    cout << "Grade C";
}
else if (marks >= 40) {
    cout << "Grade D";
}
else {
    cout << "Fail";
}

Output

Fail

Why?

25 >= 90 → FALSE
25 >= 75 → FALSE
25 >= 60 → FALSE
25 >= 40 → FALSE
             ↓
           else
             ↓
           Fail

Since all conditions are false, the "else" block executes.

---

Example 3 — Positive, Negative, or Zero

We can use "else if" to classify a number.

#include <iostream>
using namespace std;

int main() {

    int number = -5;

    if (number > 0) {
        cout << "Positive";
    }
    else if (number < 0) {
        cout << "Negative";
    }
    else {
        cout << "Zero";
    }

    return 0;
}

Output

Negative

Flow

number > 0?
     ↓
   FALSE
     ↓
number < 0?
     ↓
   TRUE
     ↓
Negative

---

Example 4 — Age Category

int age = 20;

if (age < 13) {
    cout << "Child";
}
else if (age < 20) {
    cout << "Teenager";
}
else {
    cout << "Adult";
}

Output

Adult

Because:

20 < 13 → FALSE
20 < 20 → FALSE
          ↓
        else
          ↓
        Adult

---

"if-else" vs "else if"

"if-else"

Used when there are mainly two possible outcomes.

Condition
   ↓
TRUE  → if
FALSE → else

Example:

if (marks >= 40) {
    cout << "Pass";
}
else {
    cout << "Fail";
}

---

"else if"

Used when there are multiple conditions or choices.

Condition 1
    ↓
Condition 2
    ↓
Condition 3
    ↓
Condition 4
    ↓
else

Example:

if (marks >= 90) {
    cout << "A";
}
else if (marks >= 75) {
    cout << "B";
}
else if (marks >= 60) {
    cout << "C";
}
else {
    cout << "Fail";
}

---

Important Difference

if-else
↓
Two main choices

else if
↓
Multiple choices

---

Order of Conditions Matters

The order of conditions is important because C++ checks them from top to bottom.

For example:

int marks = 95;

if (marks >= 40) {
    cout << "D";
}
else if (marks >= 75) {
    cout << "B";
}
else if (marks >= 90) {
    cout << "A";
}

Output

D

Why?

Because the first condition:

95 >= 40
    ↓
  TRUE

already matches.

So the program doesn't reach the later conditions.

Better order

if (marks >= 90) {
    cout << "A";
}
else if (marks >= 75) {
    cout << "B";
}
else if (marks >= 40) {
    cout << "D";
}
else {
    cout << "Fail";
}

Now the most specific/highest range is checked first.

---

"else" is Optional

An "else" block is not compulsory.

We can write:

if (marks >= 90) {
    cout << "A";
}
else if (marks >= 75) {
    cout << "B";
}
else if (marks >= 60) {
    cout << "C";
}

If all conditions are false, nothing is printed.

---

"else if" Chain

A complete structure looks like:

       if
        ↓
   condition 1
        ↓
      false
        ↓
    else if
        ↓
   condition 2
        ↓
      false
        ↓
    else if
        ↓
   condition 3
        ↓
      false
        ↓
      else

The program moves down the chain until it finds a true condition.

---

Real-Life Example

Suppose a traffic signal has different actions:

If signal is RED
    Stop

Else if signal is YELLOW
    Wait

Else if signal is GREEN
    Go

C++:

if (signal == "red") {
    cout << "Stop";
}
else if (signal == "yellow") {
    cout << "Wait";
}
else if (signal == "green") {
    cout << "Go";
}

This is a multiple-decision situation.

---

Common Mistake

Do not forget that each "else if" needs a condition.

Correct:

if (x > 10) {
    // code
}
else if (x > 5) {
    // code
}
else {
    // code
}

"else" alone does not have a condition.

---

Important Points

1. "else if" is used for checking multiple conditions.
2. Conditions are checked from top to bottom.
3. The first true condition gets executed.
4. After one condition is executed, the remaining conditions are skipped.
5. "else" executes when all previous conditions are false.
6. "else" is optional.
7. The order of conditions is important.
8. "else if" is useful when there are multiple possible outcomes.
9. "else if" can be used with relational and logical operators.

---

Easy Memory Trick

Remember:

if
↓
First condition

else if
↓
Try another condition

else if
↓
Try another condition

else
↓
Nothing above was true

Super Simple Formula

IF TRUE → Execute

ELSE IF TRUE → Execute

ELSE → All above are FALSE

---

One-Line Definition

The "else if" statement is used to check multiple conditions one after another and execute the block of the first condition that is true.

---

Quick Revision

             Start
               ↓
          Check if
               ↓
          TRUE? ── Yes → Execute → Stop
            ↓ No
        Check else if
               ↓
          TRUE? ── Yes → Execute → Stop
            ↓ No
        Check else if
               ↓
          TRUE? ── Yes → Execute → Stop
            ↓ No
            else
             ↓
          Execute

### Topic 6 — switch Statement

1. What is a "switch" Statement?

A "switch" statement is a conditional control statement in C++.

It is used when we want to compare one value with multiple fixed values and execute the matching block of code.

Simple Meaning

"switch" ante:

«"Ee value denitho match avutundo chusi, aa matching case ni execute cheyyi."»

Real-Life Example

Restaurant menu lo:

- 1 → Biryani
- 2 → Fried Rice
- 3 → Noodles
- 4 → Pizza

User "2" enter chesthe, program "2" ki matching "case" ni find chesi Fried Rice print chestundi.

---

2. Syntax

switch (expression) {

    case value1:
        // statements
        break;

    case value2:
        // statements
        break;

    case value3:
        // statements
        break;

    default:
        // statements
}

---

3. Important Parts of "switch"

A "switch" statement mainly contains:

1. "switch"
2. Expression
3. "case"
4. "break"
5. "default"

---

4. "switch"

"switch" keyword tells the program that we want to perform a selection based on a value.

Example:

switch (choice) {
    // cases
}

Here:

choice

is the value that will be checked.

---

5. Expression

The expression is the value that the "switch" checks.

Example:

int choice = 2;

switch (choice) {

Here, the value of "choice" is "2".

So C++ searches for:

case 2:

---

6. "case"

A "case" represents a possible fixed value.

Example:

case 1:
    cout << "Biryani";
    break;

Meaning:

«"Value 1 ayithe, ee code execute cheyyi."»

Another example:

case 2:
    cout << "Fried Rice";
    break;

Meaning:

«"Value 2 ayithe, Fried Rice print cheyyi."»

---

7. "break"

"break" is used to exit the switch statement.

Example:

case 1:
    cout << "Biryani";
    break;

When "case 1" matches:

case 1 → execute → break → exit switch

Why is "break" important?

Suppose:

switch (choice) {

    case 1:
        cout << "Biryani";
        break;

    case 2:
        cout << "Fried Rice";
        break;
}

If "choice = 1":

case 1 matches
     ↓
"Biryani" printed
     ↓
break
     ↓
switch ends

Without "break", C++ may continue executing the following cases. This is called fall-through.

---

8. "default"

"default" executes when none of the cases match.

Example:

switch (choice) {

    case 1:
        cout << "Biryani";
        break;

    case 2:
        cout << "Fried Rice";
        break;

    default:
        cout << "Invalid choice";
}

If:

choice = 5;

There is no:

case 5:

So:

default
   ↓
Invalid choice

Important

"default" is optional.

A "switch" can work without "default", but using "default" is often useful for handling unexpected values.

---

9. Complete Example

#include <iostream>
using namespace std;

int main() {

    int choice;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {

        case 1:
            cout << "Biryani";
            break;

        case 2:
            cout << "Fried Rice";
            break;

        case 3:
            cout << "Noodles";
            break;

        case 4:
            cout << "Pizza";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}

Example Input

Enter your choice: 2

Output

Fried Rice

---

10. How "switch" Works

Suppose:

int choice = 3;

And:

switch (choice) {

    case 1:
        cout << "Biryani";
        break;

    case 2:
        cout << "Fried Rice";
        break;

    case 3:
        cout << "Noodles";
        break;

    default:
        cout << "Invalid choice";
}

Execution:

choice = 3
     ↓
switch checks the value
     ↓
case 1? ❌
     ↓
case 2? ❌
     ↓
case 3? ✅
     ↓
"Noodles" printed
     ↓
break
     ↓
switch ends

---

11. Another Example — Day Number

#include <iostream>
using namespace std;

int main() {

    int day = 2;

    switch (day) {

        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        default:
            cout << "Invalid day";
    }

    return 0;
}

Output

Tuesday

Because:

day = 2
   ↓
case 2
   ↓
Tuesday

---

12. Fall-Through

If we don't use "break", execution can continue into the next cases.

Example:

int number = 1;

switch (number) {

    case 1:
        cout << "One";

    case 2:
        cout << "Two";

    case 3:
        cout << "Three";
}

Output:

OneTwoThree

Why?

Because there is no "break".

case 1 matches
     ↓
One
     ↓
case 2 also executes
     ↓
Two
     ↓
case 3 also executes
     ↓
Three

This behavior is called fall-through.

Normal usage

Usually, we use "break" after each case:

case 1:
    cout << "One";
    break;

---

13. Multiple Cases With Same Code

Sometimes multiple values should perform the same action.

Example:

int day = 6;

switch (day) {

    case 6:
    case 7:
        cout << "Weekend";
        break;

    default:
        cout << "Weekday";
}

If "day = 6" or "day = 7":

Weekend

Here, both cases share the same code.

---

14. "switch" vs "if-else"

Both are conditional statements, but they are useful in different situations.

"if-else"| "switch"
Can check conditions| Mainly compares fixed values
Good for ranges| Good for fixed choices
Can use ">", "<", ">=", "<="| Case values must match
Can use complex logical conditions| Simpler for menu-like choices
Good for flexible conditions| Good for multiple fixed options

Example where "if-else" is better

if (marks >= 90) {
    cout << "A";
}
else if (marks >= 75) {
    cout << "B";
}
else {
    cout << "C";
}

Here we are checking ranges, so "if-else" is better.

Example where "switch" is better

switch (choice) {

    case 1:
        cout << "Add";
        break;

    case 2:
        cout << "Delete";
        break;

    case 3:
        cout << "Exit";
        break;
}

Here we have fixed choices, so "switch" is convenient.

---

15. Important Rules of "switch"

Rule 1: Cases must have fixed values

Example:

case 1:
case 2:
case 3:

These are fixed values.

---

Rule 2: Case values should be unique

Avoid:

case 1:
case 1:

The same case value cannot be repeated in one switch.

---

Rule 3: "break" is usually used

case 1:
    cout << "One";
    break;

Without "break", fall-through can happen.

---

Rule 4: "default" is optional

You can write:

switch (choice) {
    case 1:
        cout << "One";
        break;
}

But "default" is useful:

default:
    cout << "Invalid choice";

---

Rule 5: "switch" works with suitable integral/enum values

Common examples include:

int
char
enum

For example:

char grade = 'A';

switch (grade) {

    case 'A':
        cout << "Excellent";
        break;

    case 'B':
        cout << "Good";
        break;

    default:
        cout << "Other grade";
}

---

16. "switch" With "char"

"switch" can also check characters.

char choice = 'y';

switch (choice) {

    case 'y':
        cout << "Yes";
        break;

    case 'n':
        cout << "No";
        break;

    default:
        cout << "Invalid choice";
}

Output:

Yes

---

17. "switch" With User Input

#include <iostream>
using namespace std;

int main() {

    int choice;

    cout << "Enter 1 for Hello: ";
    cin >> choice;

    switch (choice) {

        case 1:
            cout << "Hello";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}

If user enters:

1

Output:

Hello

If user enters:

5

Output:

Invalid choice

---

18. Nested "switch"

A "switch" can also be placed inside another "switch".

This is called a Nested switch.

Example:

switch (category) {

    case 1:

        switch (choice) {

            case 1:
                cout << "Option 1";
                break;

            case 2:
                cout << "Option 2";
                break;
        }

        break;
}

Nested "switch" is covered separately in the next topic.

---

19. Real-Life Example

Imagine an ATM.

First, user chooses:

1 → Withdraw
2 → Deposit
3 → Check Balance
4 → Exit

This can be represented using "switch".

switch (choice) {

    case 1:
        cout << "Withdraw";
        break;

    case 2:
        cout << "Deposit";
        break;

    case 3:
        cout << "Check Balance";
        break;

    case 4:
        cout << "Exit";
        break;

    default:
        cout << "Invalid choice";
}

So:

User choice
     ↓
switch
     ↓
Matching case
     ↓
Execute code
     ↓
break
     ↓
Exit switch

---

20. Memory Trick

Remember:

VALUE
  ↓
MATCHING CASE
  ↓
EXECUTE
  ↓
BREAK
  ↓
EXIT SWITCH

And if no case matches:

VALUE
  ↓
No matching case
  ↓
default

---

21. One-Line Definition

«A "switch" statement is a conditional control statement used to select and execute one block of code from multiple fixed-value cases.»

---

22. Quick Revision

"switch"

Used for multiple fixed choices.

"case"

Represents a possible value.

"break"

Exits the switch and prevents unwanted fall-through.

"default"

Runs when no case matches.

Fall-through

When "break" is missing, execution continues into the next case.

Nested switch

A "switch" inside another "switch".

---

23. Basic Structure to Remember

switch (value) {

    case 1:
        // code
        break;

    case 2:
        // code
        break;

    case 3:
        // code
        break;

    default:
        // code
}

Easy Formula

switch → Check value
case → Match value
break → Stop switch
default → No match

### Topic 7 — Nested "switch"

1. What is a Nested "switch"?

A Nested "switch" is a "switch" statement placed inside another "switch" statement.

Simple Definition

«A nested "switch" is a "switch" statement inside another "switch" statement.»

Simple Meaning

Normal "switch":

One switch
   ↓
Check value
   ↓
Execute matching case

Nested "switch":

Outer switch
     ↓
Matching outer case
     ↓
Inner switch
     ↓
Matching inner case

---

2. Why is it called "Nested"?

The word nested means:

«One thing is placed inside another thing of the same or related type.»

For example:

switch (value1) {

    case 1:

        switch (value2) {

            case 1:
                // code
                break;
        }

        break;
}

Here, the second "switch" is inside the first "switch".

Therefore, it is called a Nested "switch".

---

3. Real-Life Example

Imagine a college application system.

First, the user selects a department:

1 → CSE
2 → BCA
3 → B.Com

If the user selects BCA, then the user gets another menu:

1 → Data Science
2 → Web Development
3 → AI

Here:

- Outer "switch" → selects department
- Inner "switch" → selects specialization

So:

Department
     ↓
BCA
     ↓
Specialization
     ↓
Data Science

This is a real-life example of a nested "switch".

---

4. Basic Syntax

switch (outerValue) {

    case 1:
        // code
        break;

    case 2:

        switch (innerValue) {

            case 1:
                // code
                break;

            case 2:
                // code
                break;

            default:
                // code
        }

        break;

    default:
        // code
}

---

5. Outer "switch"

The first "switch" is called the outer switch.

Example:

switch (department) {

It makes the first-level decision.

For example:

department = 2
       ↓
Outer switch
       ↓
case 2
       ↓
BCA

---

6. Inner "switch"

The "switch" inside the outer "switch" is called the inner switch.

Example:

switch (choice) {

It makes another decision based on the selected outer case.

Example:

Outer switch
     ↓
BCA selected
     ↓
Inner switch
     ↓
Choose specialization

---

7. Complete Example

#include <iostream>
using namespace std;

int main() {

    int department;
    int choice;

    cout << "Enter department: ";
    cin >> department;

    switch (department) {

        case 1:
            cout << "CSE";
            break;

        case 2:

            cout << "BCA\n";

            cout << "Choose specialization:\n";
            cout << "1. Data Science\n";
            cout << "2. Web Development\n";
            cout << "3. AI\n";

            cin >> choice;

            switch (choice) {

                case 1:
                    cout << "Data Science";
                    break;

                case 2:
                    cout << "Web Development";
                    break;

                case 3:
                    cout << "AI";
                    break;

                default:
                    cout << "Invalid specialization";
            }

            break;

        case 3:
            cout << "B.Com";
            break;

        default:
            cout << "Invalid department";
    }

    return 0;
}

---

8. Example Execution

Suppose the user enters:

2
1

First input:

2

means:

BCA

The outer switch finds:

case 2:

Then the inner switch starts.

Second input:

1

matches:

case 1:

So the output is:

BCA
Data Science

---

9. Execution Flow

The execution happens step-by-step.

Start
  ↓
Read department
  ↓
Outer switch
  ↓
Find matching case
  ↓
If that case contains inner switch
  ↓
Execute inner switch
  ↓
Read inner value
  ↓
Find matching inner case
  ↓
Execute inner case
  ↓
break
  ↓
Continue program

---

10. Important Concept

The inner switch does not execute automatically.

It executes only when the program reaches it.

For example:

switch (department) {

    case 1:
        cout << "CSE";
        break;

    case 2:

        switch (choice) {
            // inner switch
        }

        break;
}

If:

department = 1

then:

case 1
   ↓
CSE
   ↓
break

The inner switch is never reached.

But if:

department = 2

then:

case 2
   ↓
Inner switch
   ↓
Check choice

---

11. Nested "switch" With "break"

Both outer and inner switches can have their own "break".

Example:

switch (department) {

    case 2:

        switch (choice) {

            case 1:
                cout << "Data Science";
                break;

            case 2:
                cout << "Web Development";
                break;
        }

        break;
}

Here:

Inner "break"

break;

inside the inner switch exits the inner switch.

Outer "break"

break;

after the inner switch exits the outer switch.

---

12. Important: "break" Works on Its Own Switch

This is very important.

Suppose:

switch (a) {

    case 1:

        switch (b) {

            case 1:
                cout << "Hello";
                break;
        }

        break;
}

The first "break" belongs to the inner switch.

The second "break" belongs to the outer switch.

Think:

Inner break
     ↓
Exit inner switch

Outer break
     ↓
Exit outer switch

---

13. Nested "switch" Example — Food Menu

Imagine a food delivery application.

First choose food category:

1 → Indian
2 → Chinese
3 → Italian

Then choose food from that category.

Program

#include <iostream>
using namespace std;

int main() {

    int category;
    int food;

    cout << "1. Indian\n";
    cout << "2. Chinese\n";
    cout << "3. Italian\n";

    cin >> category;

    switch (category) {

        case 1:

            cout << "1. Biryani\n";
            cout << "2. Dosa\n";

            cin >> food;

            switch (food) {

                case 1:
                    cout << "Biryani";
                    break;

                case 2:
                    cout << "Dosa";
                    break;

                default:
                    cout << "Invalid food";
            }

            break;

        case 2:

            cout << "Chinese selected";
            break;

        case 3:

            cout << "Italian selected";
            break;

        default:

            cout << "Invalid category";
    }

    return 0;
}

If:

category = 1
food = 2

Output:

Dosa

---

14. Another Example — ATM

An ATM can also be designed using nested switches.

First:

1 → Savings
2 → Current

Then:

1 → Withdraw
2 → Deposit
3 → Balance

The outer switch selects the account type.

The inner switch selects the banking operation.

switch (accountType) {

    case 1:

        switch (operation) {

            case 1:
                cout << "Withdraw";
                break;

            case 2:
                cout << "Deposit";
                break;

            case 3:
                cout << "Balance";
                break;
        }

        break;

    case 2:

        switch (operation) {

            case 1:
                cout << "Withdraw";
                break;

            case 2:
                cout << "Deposit";
                break;

            case 3:
                cout << "Balance";
                break;
        }

        break;
}

---

15. Nested "switch" vs Normal "switch"

Normal "switch"| Nested "switch"
Contains one main switch| Contains a switch inside another switch
Makes one-level decision| Makes multi-level decisions
Simpler| More complex
Suitable for one menu| Useful for categories + sub-options

Example:

Normal

Choose food
   ↓
Biryani

Nested

Choose category
      ↓
Indian
      ↓
Choose food
      ↓
Biryani

---

16. Advantages of Nested "switch"

1. Handles multiple levels of choices

It can represent:

Category
   ↓
Subcategory
   ↓
Option

2. Useful for menu-based programs

Examples:

- ATM
- Restaurant menu
- College departments
- Banking systems
- Game menus
- Application settings

3. Organizes related choices

The inner switch handles options related to a particular outer choice.

---

17. Disadvantages

Too many nested switches can make code difficult to understand.

Example:

switch
  ↓
switch
  ↓
switch
  ↓
switch

This can become confusing.

Better practice

Keep nesting reasonable and use functions or other control structures when the program becomes too complex.

---

18. Important Rules

Rule 1

A "switch" can be placed inside another "switch".

switch (a) {

    case 1:

        switch (b) {
            // code
        }

        break;
}

Rule 2

The inner switch executes only when program flow reaches it.

Rule 3

Inner and outer switches have their own cases.

Rule 4

Each switch should handle its own "break".

Rule 5

"default" can be used in both switches.

Example:

switch (a) {

    case 1:

        switch (b) {

            case 1:
                cout << "Valid";
                break;

            default:
                cout << "Invalid inner choice";
        }

        break;

    default:
        cout << "Invalid outer choice";
}

---

19. Memory Trick

Remember:

OUTER SWITCH
     ↓
Choose Main Category
     ↓
INNER SWITCH
     ↓
Choose Sub-Option
     ↓
Execute
     ↓
Break

One-line memory trick

«Outer decides the category, Inner decides the option.»

---

20. One-Line Definition

«A nested "switch" is a "switch" statement placed inside another "switch" statement to handle multiple levels of fixed-value choices.»

---

21. Quick Revision

Nested "switch"

A switch inside another switch.

Outer switch

Makes the first-level decision.

Inner switch

Makes the second-level decision.

Inner "break"

Exits the inner switch.

Outer "break"

Exits the outer switch.

Common uses

- ATM
- Restaurant menus
- Banking systems
- College departments
- Application menus

---

22. Easy Example to Remember

switch (category) {

    case 1:

        switch (choice) {

            case 1:
                cout << "Option 1";
                break;

            case 2:
                cout << "Option 2";
                break;

            default:
                cout << "Invalid option";
        }

        break;

    default:
        cout << "Invalid category";
}

Remember:

Outer switch
     ↓
Category
     ↓
Inner switch
     ↓
Option

Outer → Category

Inner → Option

break → Exit

### Topic 8 — Loops

1. What is a Loop?

A loop is a control structure used to repeat a block of code multiple times as long as a specified condition is satisfied.

Simple Definition

«A loop is used to execute the same block of code repeatedly.»

Simple Meaning

Loop ante:

«Oka pani ni malli malli cheyyadam.»

---

2. Real-Life Example

Suppose teacher says:

«"Write "Hello" 5 times."»

Without a loop:

cout << "Hello\n";
cout << "Hello\n";
cout << "Hello\n";
cout << "Hello\n";
cout << "Hello\n";

Same statement 5 times rayali.

With a loop:

for (int i = 1; i <= 5; i++) {
    cout << "Hello\n";
}

One small block of code is enough.

---

3. Why Do We Use Loops?

Loops are useful when we need to perform the same operation repeatedly.

Common uses

- Printing numbers
- Reading multiple inputs
- Processing arrays
- Repeating calculations
- Searching data
- Processing each element of a collection
- Creating menus
- Performing an operation until a condition becomes false

---

4. Basic Idea of a Loop

Every loop generally works like this:

Start
  ↓
Check condition
  ↓
Is condition true?
  ↓
 YES
  ↓
Execute code
  ↓
Update / change value
  ↓
Check condition again
  ↓
...
  ↓
Condition becomes false
  ↓
Exit loop

Important

A loop should normally have a way to eventually make its condition false.

Otherwise, it may become an infinite loop.

---

5. Types of Loops in C++

C++ provides several ways to create loops.

The main types covered in this lesson are:

Loops
│
├── 1. for loop
├── 2. while loop
├── 3. do-while loop
└── 4. range-based for loop

---

6. "for" Loop

A "for" loop is commonly used when we know or can clearly define how the repetition should progress.

Syntax

for (initialization; condition; update) {
    // code
}

Example:

for (int i = 1; i <= 5; i++) {
    cout << i << "\n";
}

Output:

1
2
3
4
5

Three important parts

initialization
      ↓
condition
      ↓
update

Example:

for (int i = 1; i <= 5; i++)

- "int i = 1" → initialization
- "i <= 5" → condition
- "i++" → update

The "for" loop will be studied in detail separately.

---

7. "while" Loop

A "while" loop repeats a block of code as long as its condition is true.

Syntax

while (condition) {
    // code
}

Example:

int i = 1;

while (i <= 5) {
    cout << i << "\n";
    i++;
}

Output:

1
2
3
4
5

Important

The condition is checked before executing the loop body.

Therefore, a "while" loop is called an entry-controlled loop.

---

8. "do-while" Loop

A "do-while" loop executes the loop body first and checks the condition afterward.

Syntax

do {
    // code
} while (condition);

Example:

int i = 1;

do {
    cout << i << "\n";
    i++;
} while (i <= 5);

Output:

1
2
3
4
5

Important

The loop body executes at least once, because the condition is checked after the body.

Therefore, "do-while" is called an exit-controlled loop.

---

9. Range-Based "for" Loop

A range-based "for" loop is useful for going through each element of an array or another suitable range/collection.

Syntax

for (dataType variable : collection) {
    // code
}

Example:

int numbers[] = {10, 20, 30, 40};

for (int number : numbers) {
    cout << number << "\n";
}

Output:

10
20
30
40

Simple Meaning

Take each element
      ↓
Put it into variable
      ↓
Execute code
      ↓
Take next element
      ↓
Repeat

---

10. Comparing the Four Loops

Loop| Main Idea| Condition Check
"for"| Repeat with initialization, condition and update| Before execution
"while"| Repeat while condition is true| Before execution
"do-while"| Execute first, then check condition| After execution
Range-based "for"| Process each element in a range| Automatically handles elements

---

11. Entry-Controlled vs Exit-Controlled

Loops can also be understood based on when they check the condition.

Entry-Controlled Loops

Condition is checked before the loop body.

Examples:

for
while

Flow:

Condition
   ↓
True?
 ↓    ↓
Yes   No
 ↓     ↓
Code   Exit
 ↓
Repeat

---

Exit-Controlled Loop

Condition is checked after the loop body.

Example:

do-while

Flow:

Code
 ↓
Condition
 ↓
True?
 ↓    ↓
Yes   No
 ↓     ↓
Repeat Exit

---

12. Infinite Loop

An infinite loop is a loop that never ends because its condition never becomes false.

Example:

while (true) {
    cout << "Hello";
}

Here:

true
 ↓
execute
 ↓
true
 ↓
execute
 ↓
true
 ↓
...

The loop continues forever unless it is interrupted.

---

13. Example of an Accidental Infinite Loop

int i = 1;

while (i <= 5) {
    cout << i;
}

This is problematic because "i" is never changed.

"i" remains:

1

So:

i <= 5

always remains true.

Correct version

int i = 1;

while (i <= 5) {
    cout << i << "\n";
    i++;
}

Now "i" changes:

1 → 2 → 3 → 4 → 5 → 6

When "i = 6":

6 <= 5 → false

So the loop stops.

---

14. Loop Counter

A loop counter is a variable used to keep track of how many times a loop has executed or which iteration is currently running.

Example:

for (int i = 1; i <= 5; i++) {
    cout << i << "\n";
}

Here:

i

is the loop counter.

It changes as:

1
2
3
4
5

---

15. Loop Iteration

One complete execution of the loop body is called an iteration.

Example:

for (int i = 1; i <= 3; i++) {
    cout << "Hello\n";
}

The loop has 3 iterations.

Iteration 1 → Hello
Iteration 2 → Hello
Iteration 3 → Hello

---

16. Loop Example — Printing Numbers

for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}

Output:

1 2 3 4 5

Execution:

i = 1 → print 1
i = 2 → print 2
i = 3 → print 3
i = 4 → print 4
i = 5 → print 5
i = 6 → condition false → stop

---

17. Loop Example — Printing Even Numbers

for (int i = 2; i <= 10; i += 2) {
    cout << i << " ";
}

Output:

2 4 6 8 10

Here:

i += 2

means:

i = i + 2

---

18. Loop Example — Multiplication Table

int n = 5;

for (int i = 1; i <= 10; i++) {
    cout << n << " x " << i << " = " << n * i << "\n";
}

Output:

5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50

---

19. Nested Loops

A loop can also be placed inside another loop.

This is called a nested loop.

Example:

for (int i = 1; i <= 3; i++) {

    for (int j = 1; j <= 2; j++) {
        cout << i << " " << j << "\n";
    }
}

The outer loop controls one repetition level and the inner loop runs for each outer iteration.

Nested loops are commonly used with:

- Patterns
- Matrices
- 2D arrays
- Tables
- Grid-based problems

---

20. Why Loops Are Important in Programming

Without loops, repetitive tasks require writing the same code again and again.

For example, printing 1000 numbers without loops would require a huge amount of code.

With a loop:

for (int i = 1; i <= 1000; i++) {
    cout << i << "\n";
}

Only a few lines are required.

Therefore, loops make programs:

- Shorter
- Easier to maintain
- More efficient to write
- Less repetitive
- More flexible

---

21. Important Terms

Loop

A structure used to repeat code.

Condition

The expression that determines whether the loop continues.

Iteration

One complete execution of the loop body.

Loop Counter

A variable used to track iterations.

Infinite Loop

A loop that does not terminate because its condition remains true.

Nested Loop

A loop inside another loop.

---

22. Easy Comparison

"for"

I know how my repetition should progress.

"while"

Keep doing this while the condition is true.

"do-while"

Do this first, then check the condition.

Range-based "for"

Take each element one by one.

---

23. Memory Trick

Remember:

FOR
→ Initialization + Condition + Update

WHILE
→ Condition first

DO-WHILE
→ Code first, Condition later

RANGE-BASED FOR
→ Each element

Super Easy Trick

«FOR = How many / controlled repetition»

«WHILE = Until condition becomes false»

«DO-WHILE = At least once»

«RANGE FOR = Every element»

---

24. Quick Revision

Loops
│
├── for
│   └── initialization → condition → update
│
├── while
│   └── condition → code
│
├── do-while
│   └── code → condition
│
└── range-based for
    └── each element

Key Points

- Loops repeat code.
- "for" and "while" check the condition before execution.
- "do-while" checks the condition after execution.
- "do-while" executes at least once.
- Range-based "for" is useful for processing each element.
- A loop that never ends is an infinite loop.
- One execution of the loop body is called an iteration.
- A loop inside another loop is called a nested loop.

---

25. One-Line Definition

«A loop is a control structure that repeatedly executes a block of code while a specified condition is satisfied or while elements remain to be processed.»


### Topic 9 — for Loop

1. What is a "for" Loop?

A "for" loop is used to repeat a block of code multiple times.

It is especially useful when we know how the repetition should progress.

Simple Definition

«A "for" loop repeatedly executes a block of code as long as its condition is true.»

---

2. Syntax

for (initialization; condition; update) {
    // code
}

There are 3 main parts:

Part| Meaning
Initialization| Starting value
Condition| Checks whether loop should continue
Update| Changes the loop variable

---

3. Simple Example

#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 5; i++) {
        cout << i << "\n";
    }

    return 0;
}

Output

1
2
3
4
5

---

4. How It Works

For:

for (int i = 1; i <= 5; i++)

Step 1 — Initialization

int i = 1;

Loop starts with "i = 1".

Step 2 — Condition

i <= 5

If true, loop body executes.

Step 3 — Execute

cout << i;

The value is printed.

Step 4 — Update

i++

"i" increases by 1.

Then the condition is checked again.

Initialize → Check → Execute → Update → Check again

---

5. "i++"

i++;

means:

i = i + 1;

Example:

1 → 2 → 3 → 4 → 5 → 6

When "i = 6":

6 <= 5 → false

So the loop stops.

---

6. Printing Even Numbers

for (int i = 2; i <= 10; i += 2) {
    cout << i << " ";
}

Output:

2 4 6 8 10

Here:

i += 2;

means:

i = i + 2;

---

7. Reverse "for" Loop

We can also decrease the value.

for (int i = 5; i >= 1; i--) {
    cout << i << " ";
}

Output:

5 4 3 2 1

Here:

i--

means:

i = i - 1;

---

8. Infinite "for" Loop

A "for" loop can be written without a condition:

for (;;) {
    cout << "Hello";
}

This creates an infinite loop.

It continues until something stops it.

---

9. Important Points

- "for" loop is used for repetition.
- It has three main parts:
  - Initialization
  - Condition
  - Update
- The condition is checked before each iteration.
- If the condition is false initially, the loop body does not execute.
- "i++" increases by 1.
- "i--" decreases by 1.
- "i += 2" increases by 2.

---

10. Memory Trick

for (START; CHECK; CHANGE)

Example:

for (int i = 1; i <= 5; i++)

1       → Start
i <= 5  → Check
i++     → Change

One-Line Definition

«A "for" loop is a control statement used to repeatedly execute code based on initialization, condition, and update.»


### Topic 10 — while Loop

1. What is a "while" Loop?

A "while" loop is used to repeat a block of code as long as a condition is true.

Simple Definition

«A "while" loop repeatedly executes code while the given condition is true.»

---

2. Syntax

while (condition) {
    // code
}

Usually, initialization and update are written separately.

int i = 1;

while (i <= 5) {
    cout << i << "\n";
    i++;
}

---

3. Example

#include <iostream>
using namespace std;

int main() {

    int i = 1;

    while (i <= 5) {
        cout << i << "\n";
        i++;
    }

    return 0;
}

Output

1
2
3
4
5

---

4. How It Works

Initialize
    ↓
Check condition
    ↓
True?
 ↓      ↓
Yes     No
 ↓       ↓
Execute  Stop
 ↓
Update
 ↓
Check again

For example:

int i = 1;

while (i <= 5) {
    cout << i;
    i++;
}

Execution:

1 → 2 → 3 → 4 → 5 → 6

When "i = 6":

6 <= 5 → false

So the loop stops.

---

5. Important Point

"while" is an entry-controlled loop because the condition is checked before executing the loop body.

Example:

int i = 10;

while (i < 5) {
    cout << i;
}

Here:

10 < 5 → false

So the loop executes 0 times.

---

6. Infinite "while" Loop

If the condition never becomes false, the loop can run forever.

while (true) {
    cout << "Hello";
}

This is an infinite loop.

Always make sure the loop has a proper way to terminate when needed.

---

7. "while" vs "for"

"for"

Initialization, condition and update are usually written together:

for (int i = 1; i <= 5; i++) {
    cout << i;
}

"while"

They are usually written separately:

int i = 1;

while (i <= 5) {
    cout << i;
    i++;
}

---

8. Important Points

- "while" is used for repetition.
- Condition is checked before execution.
- If the condition is initially false, the loop executes 0 times.
- Initialization is generally done before the loop.
- Update is generally done inside the loop.
- Forgetting the update can cause an infinite loop.

---

9. Memory Trick

«while = Check first → Execute if true → Update → Check again»

CHECK → EXECUTE → UPDATE → CHECK → ...

One-Line Definition

«A "while" loop repeatedly executes a block of code as long as its condition remains true.»


#### Topic 11 — do-while Loop

1. What is a "do-while" Loop?

A "do-while" loop executes a block of code first and checks the condition afterwards.

Simple Definition

«A "do-while" loop executes the loop body at least once and then continues while the condition is true.»

---

2. Syntax

do {
    // code
} while (condition);

⚠️ The semicolon ";" after "while(condition)" is compulsory.

---

3. Example

#include <iostream>
using namespace std;

int main() {

    int i = 1;

    do {
        cout << i << "\n";
        i++;
    } while (i <= 5);

    return 0;
}

Output

1
2
3
4
5

---

4. How It Works

Execute code
     ↓
Update
     ↓
Check condition
     ↓
True → Repeat
False → Stop

For:

int i = 1;

do {
    cout << i;
    i++;
} while (i <= 5);

Execution:

1 → 2 → 3 → 4 → 5 → 6

When "i = 6":

6 <= 5 → false

So the loop stops.

---

5. Main Feature

The most important feature of "do-while":

«The loop body executes at least once.»

Example:

int i = 10;

do {
    cout << i;
} while (i < 5);

Output:

10

Even though:

10 < 5 → false

the code executes once because the condition is checked after the body.

---

6. "while" vs "do-while"

"while"| "do-while"
Condition checked first| Condition checked after
May execute 0 times| Executes at least once
Entry-controlled| Exit-controlled

Remember

while:
CHECK → EXECUTE

do-while:
EXECUTE → CHECK

---

7. Common Uses

"do-while" is useful when an operation must happen at least once.

Examples:

- Menu-driven programs
- Asking for user input
- Retry operations
- Simple validation programs

---

8. Important Points

- "do-while" is an exit-controlled loop.
- Loop body executes at least once.
- Condition is checked after execution.
- ";" after "while(condition)" is compulsory.
- If condition is true → loop repeats.
- If condition is false → loop stops.

---

9. Memory Trick

«DO first → CHECK later»

DO → CHECK → REPEAT if true

One-Line Definition

«A "do-while" loop executes the code at least once and then repeats it while the specified condition is true.»

### topic:12 
Range-based "for" Loop

Definition

A range-based "for" loop is used to access each element of an array or collection one by one without manually using an index.

Syntax

for (dataType variable : collection) {
    // statements
}

Example

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40};

    for (int number : numbers) {
        cout << number << "\n";
    }

    return 0;
}

Output

10
20
30
40

How It Works

For:

for (int number : numbers)

- "int" → data type of each element
- "number" → stores the current element
- "numbers" → array/collection
- ":" → takes elements from the collection

C++ automatically takes:

10 → 20 → 30 → 40

one by one.

Advantages

- No need to manage an index.
- Simple and readable.
- Useful when we need to access every element.
- Reduces the chance of index-related mistakes.

Important Point

Range-based "for" loop is mainly useful when we want to visit every element and don't need the element's index.

Memory Trick

Range-based "for" = Each element one by one.

One-line Definition

Range-based "for" loop automatically traverses each element of a collection one by one.

## topic:13 Jump Statements

Definition

Jump statements are used to change or interrupt the normal flow of program execution.

Types of Jump Statements

C++ has four main jump statements:

1. "break" → Stops the loop or switch.
2. "continue" → Skips the current iteration and moves to the next iteration.
3. "return" → Exits from a function.
4. "goto" → Jumps to a labelled statement.

Memory Trick

B → C → R → G

- Break → Stop
- Continue → Skip
- Return → Exit function
- Goto → Jump

One-line Definition

Jump statements change the normal flow of execution in a C++ program.
