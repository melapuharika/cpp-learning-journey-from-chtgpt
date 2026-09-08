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
