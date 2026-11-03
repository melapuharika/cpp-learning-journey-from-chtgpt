LESSON 28: MULTITHREADING IN C++

1. Multithreading
2. Process vs Thread
3. Creating Threads
4. std::thread
5. join()
6. detach()
7. mutex
8. lock_guard
9. unique_lock
10. scoped_lock
11. Race Condition
12. Critical Section
13. Deadlock
14. Starvation
15. Thread Synchronization
16. Condition Variables
17. std::condition_variable
18. Atomic Variables
19. std::atomic
20. Futures
21. Promises
22. async
23. Advanced Thread Pool
24. Lock-Free Programming Basics
25. Memory Ordering Basics


### topic 1

Topic 1: Introduction to Multithreading

1. What is Multithreading?

Multithreading is a programming technique in which multiple threads execute concurrently within a single process to perform different tasks.

A thread is the smallest unit of execution within a process.

Example:

In a YouTube application:

- One thread handles video playback.
- Another thread handles audio.
- Another thread loads comments.
- Another thread handles user interactions.

2. What is Single-threading?

Single-threading is a programming technique in which a program uses only one thread to execute tasks.

Tasks are generally executed one after another.

3. What is Multithreading?

Multithreading allows a program to create multiple threads to execute different tasks concurrently.

Multiple threads belonging to the same process share its memory and resources.

4. Why Do We Need Multithreading?

1. Better application responsiveness.
2. Efficient CPU utilization.
3. Concurrent execution of multiple tasks.
4. Background task processing.
5. Improved performance for suitable applications.

5. Applications of Multithreading

- Games – Handling graphics, sound and player movements.
- Web Browsers – Handling page loading and user interactions.
- Banking Applications – Processing multiple requests.
- Video Editing – Processing and rendering videos.
- Web Servers – Handling multiple client requests.

6. Advantages of Multithreading

1. Improves application responsiveness.
2. Makes better use of available CPU cores.
3. Allows multiple tasks to make progress concurrently.
4. Supports background processing.
5. Useful for large applications.

7. Disadvantages of Multithreading

1. Complex program design.
2. Race conditions.
3. Deadlocks.
4. Difficult debugging.
5. Synchronization overhead.

8. Important Terminology

Term| Meaning
Process| A running program
Thread| An execution unit within a process
Main Thread| The thread that starts program execution
Concurrency| Multiple tasks making progress over overlapping periods
Parallelism| Multiple tasks executing simultaneously
CPU Core| A hardware processing unit

9. Concurrency vs Parallelism

Concurrency: Multiple tasks make progress during overlapping periods, possibly by taking turns on one CPU core.

Parallelism: Multiple tasks execute at the same time, typically on different CPU cores.

10. Interview Questions

Q1. What is multithreading?

Multithreading is a programming technique that allows multiple threads to execute concurrently within a single process.

Q2. What is a thread?

A thread is the smallest unit of execution within a process.

Q3. What is the difference between concurrency and parallelism?

Concurrency means multiple tasks make progress over overlapping periods. Parallelism means multiple tasks execute simultaneously.

Q4. Where is multithreading used?

It is used in games, web browsers, banking applications, web servers and video-processing applications.

Lesson Summary

In this topic, we learned:

- Introduction to Multithreading
- Single-threading
- Multithreading
- Importance of Multithreading
- Applications
- Advantages and Disadvantages
- Important Terminology
- Concurrency vs Parallelism


### topic 2 

Topic 2: Process vs Thread

1. What is a Process?

A process is a program that is currently being executed.

When we open and run an application, the operating system creates a process for it.

Examples:

- Running Google Chrome
- Running VS Code
- Running Calculator
- Running a Music Player

Characteristics of a Process

1. Each process has its own virtual address space.
2. A process has its own system resources.
3. Processes are generally isolated from each other.
4. Processes communicate using Inter-Process Communication (IPC).

2. What is a Thread?

A thread is the smallest unit of execution within a process.

A process can contain one or more threads. Threads perform different tasks within the same process.

Example: YouTube Application

- Thread 1 – Video playback.
- Thread 2 – Audio processing.
- Thread 3 – User interactions.
- Thread 4 – Background loading.

Characteristics of a Thread

1. A process can contain multiple threads.
2. Threads within the same process share its address space.
3. Threads share global variables and dynamically allocated memory.
4. Each thread has its own stack and execution state.
5. Threads are generally lightweight compared to processes.

3. Process vs Thread

Process| Thread
A running program| An execution unit within a process
Has its own virtual address space| Shares the process address space
Generally requires more resources| Generally requires fewer resources
Communication uses IPC mechanisms| Can communicate through shared memory
Isolated from other processes| Shares resources with other threads in the same process
Failure is generally isolated| A thread failure can affect the entire process

4. Memory Difference

Process Memory

- Each process has its own virtual address space.
- One process normally cannot directly access another process's memory.
- Processes can communicate through IPC mechanisms.

Thread Memory

- Threads within a process share the same address space.
- They share global variables and dynamically allocated memory.
- Each thread has its own stack, registers and execution state.

5. Can a Process Have Multiple Threads?

Yes. A single process can contain multiple threads.

When a program starts, its main thread begins execution. Additional threads can be created to perform other tasks.

6. Real-Life Example

Consider a college:

- College – Process
- Teachers – Threads
- Classes – Tasks

A college has multiple teachers performing different tasks.

Similarly, a process can contain multiple threads performing different tasks.

7. Advantages of Threads

1. Lightweight execution units.
2. Better application responsiveness.
3. Efficient communication through shared memory.
4. Better utilization of multiple CPU cores.
5. Support concurrent task execution.

8. Important Interview Questions

Q1. What is a process?

A process is a program that is currently being executed.

Q2. What is a thread?

A thread is the smallest unit of execution within a process.

Q3. Can a process have multiple threads?

Yes, a process can contain multiple threads.

Q4. Do threads share memory?

Yes, threads within the same process share its address space, but each thread has its own stack and execution state.

Q5. Which is lightweight, a process or a thread?

A thread is generally lightweight compared to a process.

Q6. Can two processes share memory?

Yes, processes can share memory using inter-process communication mechanisms such as shared memory.

Q7. What is the main difference between a process and a thread?

A process has its own virtual address space, whereas threads within the same process share that address space.

9. Lesson Summary

In this topic, we learned:

- Definition of Process.
- Definition of Thread.
- Characteristics of Process.
- Characteristics of Thread.
- Process vs Thread.
- Process Memory vs Thread Memory.
- Multiple Threads in a Process.
- Advantages of Threads.


### topic 3

Topic 3: Creating Threads in C++

1. What is Creating a Thread?

A thread is a separate path of execution within a process.

In C++, we can create threads using the "std::thread" class from the "<thread>" header file.

A function can be passed to a thread, and that function will execute in a separate thread.

2. Required Header File

#include <thread>

The "<thread>" header provides the "std::thread" class.

3. Basic Syntax

std::thread threadName(functionName);

- "std::thread" – Class used to create a thread.
- "threadName" – Name of the thread object.
- "functionName" – Function that the thread will execute.

4. Creating a Simple Thread

Example

#include <iostream>
#include <thread>
using namespace std;

void printMessage()
{
    cout << "Hello from thread!" << endl;
}

int main()
{
    thread t(printMessage);

    t.join();

    cout << "Hello from main thread!" << endl;

    return 0;
}

Output

Hello from thread!
Hello from main thread!

Explanation

1. "#include <iostream>" – Allows us to use "cout".
2. "#include <thread>" – Allows us to create threads.
3. "printMessage()" – Function that will execute in a separate thread.
4. "thread t(printMessage);" – Creates a thread named "t".
5. "t.join();" – Makes the main thread wait until thread "t" finishes.
6. The final "cout" statement executes after the created thread completes.

5. Passing Arguments to a Thread

We can also pass arguments to a function when creating a thread.

Example

#include <iostream>
#include <thread>
using namespace std;

void display(int number)
{
    cout << "Number: " << number << endl;
}

int main()
{
    thread t(display, 100);

    t.join();

    return 0;
}

Output

Number: 100

Explanation

- "display" is the function passed to the thread.
- "100" is the argument passed to the function.
- The thread executes "display(100)".

6. Main Thread and Created Thread

When a C++ program starts, the "main()" function executes in the main thread.

When we create another thread using "std::thread", it runs separately from the main thread.

Example:

thread t(printMessage);

Here, "t" represents the newly created thread.

7. Compilation

When using GCC, compile a multithreaded C++ program with:

g++ main.cpp -o main -pthread

Run on Linux:

./main

On Windows, the run command and threading support depend on the compiler environment.

8. Important Points

- Use the "<thread>" header to create threads.
- Use "std::thread" to create a thread object.
- A function can be passed to a thread.
- Function arguments can also be passed to a thread.
- "join()" waits for the thread to finish.
- A joinable thread must be joined or detached before its thread object is destroyed. Otherwise, the program calls "std::terminate()".

9. Real-Life Example

Consider watching a YouTube video:

- One task plays the video.
- Another task plays the audio.
- Another task loads comments.

These tasks can be handled using separate threads.

10. Interview Questions

Q1. Which header file is required to create threads in C++?

Answer: "<thread>"

Q2. What is "std::thread"?

Answer: "std::thread" is a C++ class used to create and manage threads.

Q3. Can we pass arguments to a thread?

Answer: Yes. We can pass arguments after the function name.

Q4. Why do we use "join()"?

Answer: "join()" makes the calling thread wait until the target thread completes its execution.

Q5. What happens if a joinable thread object is destroyed?

Answer: The program calls "std::terminate()".

11. Lesson Summary

In this topic, we learned:

1. How to create a thread in C++.
2. How to use the "<thread>" header.
3. How to create threads using "std::thread".
4. How to pass functions to threads.
5. How to pass arguments to threads.
6. How "join()" works.

### topic 3

Topic 3: Creating Threads in C++

1. What is Creating a Thread?

A thread is a separate path of execution within a process.

In C++, we can create threads using the "std::thread" class from the "<thread>" header file.

A function can be passed to a thread, and that function will execute in a separate thread.

2. Required Header File

#include <thread>

The "<thread>" header provides the "std::thread" class.

3. Basic Syntax

std::thread threadName(functionName);

- "std::thread" – Class used to create a thread.
- "threadName" – Name of the thread object.
- "functionName" – Function that the thread will execute.

4. Creating a Simple Thread

Example

#include <iostream>
#include <thread>
using namespace std;

void printMessage()
{
    cout << "Hello from thread!" << endl;
}

int main()
{
    thread t(printMessage);

    t.join();

    cout << "Hello from main thread!" << endl;

    return 0;
}

Output

Hello from thread!
Hello from main thread!

Explanation

1. "#include <iostream>" – Allows us to use "cout".
2. "#include <thread>" – Allows us to create threads.
3. "printMessage()" – Function that will execute in a separate thread.
4. "thread t(printMessage);" – Creates a thread named "t".
5. "t.join();" – Makes the main thread wait until thread "t" finishes.
6. The final "cout" statement executes after the created thread completes.

5. Passing Arguments to a Thread

We can also pass arguments to a function when creating a thread.

Example

#include <iostream>
#include <thread>
using namespace std;

void display(int number)
{
    cout << "Number: " << number << endl;
}

int main()
{
    thread t(display, 100);

    t.join();

    return 0;
}

Output

Number: 100

Explanation

- "display" is the function passed to the thread.
- "100" is the argument passed to the function.
- The thread executes "display(100)".

6. Main Thread and Created Thread

When a C++ program starts, the "main()" function executes in the main thread.

When we create another thread using "std::thread", it runs separately from the main thread.

Example:

thread t(printMessage);

Here, "t" represents the newly created thread.

7. Compilation

When using GCC, compile a multithreaded C++ program with:

g++ main.cpp -o main -pthread

Run on Linux:

./main

On Windows, the run command and threading support depend on the compiler environment.

8. Important Points

- Use the "<thread>" header to create threads.
- Use "std::thread" to create a thread object.
- A function can be passed to a thread.
- Function arguments can also be passed to a thread.
- "join()" waits for the thread to finish.
- A joinable thread must be joined or detached before its thread object is destroyed. Otherwise, the program calls "std::terminate()".

9. Real-Life Example

Consider watching a YouTube video:

- One task plays the video.
- Another task plays the audio.
- Another task loads comments.

These tasks can be handled using separate threads.

10. Interview Questions

Q1. Which header file is required to create threads in C++?

Answer: "<thread>"

Q2. What is "std::thread"?

Answer: "std::thread" is a C++ class used to create and manage threads.

Q3. Can we pass arguments to a thread?

Answer: Yes. We can pass arguments after the function name.

Q4. Why do we use "join()"?

Answer: "join()" makes the calling thread wait until the target thread completes its execution.

Q5. What happens if a joinable thread object is destroyed?

Answer: The program calls "std::terminate()".

11. Lesson Summary

In this topic, we learned:

1. How to create a thread in C++.
2. How to use the "<thread>" header.
3. How to create threads using "std::thread".
4. How to pass functions to threads.
5. How to pass arguments to threads.
6. How "join()" works.

### topic 4

Topic 4: "std::thread" in Detail

1. What is "std::thread"?

"std::thread" is a class in the C++ Standard Library used to create and manage threads.

It allows a function to execute independently from the main thread.

Header file:

#include <thread>

2. Syntax

std::thread threadObject(functionName, arguments);

Example:

thread t(display, 10);

- "thread" – Class used to create a thread.
- "t" – Thread object name.
- "display" – Function to execute.
- "10" – Argument passed to the function.

3. Creating a Thread

#include <iostream>
#include <thread>
using namespace std;

void task()
{
    cout << "Thread is running!" << endl;
}

int main()
{
    thread t(task);

    t.join();

    return 0;
}

Output

Thread is running!

The statement "thread t(task);" creates a new thread that executes the "task()" function.

4. Creating Multiple Threads

We can create multiple threads in one C++ program.

Example

#include <iostream>
#include <thread>
using namespace std;

void task1()
{
    cout << "Task 1 is running" << endl;
}

void task2()
{
    cout << "Task 2 is running" << endl;
}

int main()
{
    thread t1(task1);
    thread t2(task2);

    t1.join();
    t2.join();

    cout << "Main thread completed" << endl;

    return 0;
}

Possible Output

Task 1 is running
Task 2 is running
Main thread completed

Note: The order of the first two messages is not guaranteed because the operating system schedules the threads.

5. Important Member Functions

Function| Purpose
"join()"| Waits until the thread finishes
"detach()"| Allows the thread to continue independently
"joinable()"| Checks whether the thread object is joinable
"get_id()"| Returns the thread ID
"hardware_concurrency()"| Returns an estimate of supported concurrent threads

6. "joinable()" Function

The "joinable()" function checks whether a thread object represents a thread that can still be joined or detached.

Example

#include <iostream>
#include <thread>
using namespace std;

void task()
{
    cout << "Thread running" << endl;
}

int main()
{
    thread t(task);

    cout << t.joinable() << endl;

    t.join();

    cout << t.joinable() << endl;

    return 0;
}

Output

1
0

Explanation

- "1" means the thread is joinable.
- "0" means it is no longer joinable after joining or detaching.

7. Thread ID

Every thread has an ID that can be used to identify it.

We can get the current thread ID using:

std::this_thread::get_id()

Example

#include <iostream>
#include <thread>
using namespace std;

void task()
{
    cout << "Worker Thread ID: "
         << this_thread::get_id() << endl;
}

int main()
{
    thread t(task);

    cout << "Main Thread ID: "
         << this_thread::get_id() << endl;

    t.join();

    return 0;
}

Explanation

- "this_thread::get_id()" returns the ID of the currently executing thread.
- Actual thread IDs vary between program executions.
- The order of the two messages may also vary.

8. "hardware_concurrency()"

This function returns an estimate of the number of hardware-supported concurrent threads.

Example

#include <iostream>
#include <thread>
using namespace std;

int main()
{
    unsigned int count =
        thread::hardware_concurrency();

    cout << "Hardware threads: " << count << endl;

    return 0;
}

Possible Output

Hardware threads: 8

Note: The returned number depends on the system. It may return "0" if the information is unavailable.

9. Difference Between "std::thread" and "std::this_thread"

"std::thread"| "std::this_thread"
Used to create and manage thread objects| Provides operations for the currently executing thread
Example: "thread t(task);"| Example: "this_thread::get_id();"
Represents a thread object| Refers to the current thread

Both are available through the "<thread>" header.

10. Compilation

Using GCC:

g++ main.cpp -o main -pthread

Run on Linux:

./main

11. Important Points

- "std::thread" is a class in the C++ Standard Library.
- It is available through the "<thread>" header.
- We can create multiple threads in one program.
- Each thread can execute a different function.
- We can pass arguments to thread functions.
- "joinable()" checks whether a thread object is joinable.
- "this_thread::get_id()" returns the current thread ID.
- "hardware_concurrency()" gives an estimate of hardware-supported concurrent threads.
- A joinable thread must be joined or detached before its object is destroyed.

12. Interview Questions

Q1. What is "std::thread"?

Answer: It is a C++ Standard Library class used to create and manage threads.

Q2. Which header file is required for "std::thread"?

Answer: "<thread>".

Q3. Can we create multiple threads in one program?

Answer: Yes, we can create multiple thread objects.

Q4. What does "joinable()" check?

Answer: It checks whether a thread object is joinable.

Q5. Which function returns the current thread ID?

Answer: "std::this_thread::get_id()".

Q6. What is "hardware_concurrency()"?

Answer: It returns an estimate of the number of concurrent threads supported by the hardware.

13. Lesson Summary

In this topic, we learned:

1. What "std::thread" is.
2. How to create thread objects.
3. How to create multiple threads.
4. How to use "joinable()".
5. How to get thread IDs.
6. How to use "hardware_concurrency()".

### topic 5

Topic 5: "join()" in C++

1. What is "join()"?

"join()" is a member function of the C++ "std::thread" class.

It makes the calling thread wait until the target thread finishes its execution.

In simple words, "join()" is used to wait for a thread to complete.

2. Syntax

threadObject.join();

Example:

thread t(task);
t.join();

Here, the main thread waits until thread "t" finishes.

3. Simple Example

#include <iostream>
#include <thread>
using namespace std;

void task()
{
    cout << "Thread is working..." << endl;
}

int main()
{
    thread t(task);

    t.join();

    cout << "Main thread is finished." << endl;

    return 0;
}

Output

Thread is working...
Main thread is finished.

Explanation

1. "#include <thread>" – Includes the thread library.
2. "void task()" – Function executed by the new thread.
3. "thread t(task);" – Creates a new thread.
4. "t.join();" – Waits until thread "t" completes.
5. The main thread continues after "join()" returns.

4. Without "join()" vs With "join()"

Without "join()"

#include <iostream>
#include <thread>
using namespace std;

void task()
{
    cout << "Thread running" << endl;
}

int main()
{
    thread t(task);

    cout << "Main running" << endl;

    return 0;
}

Result: The program calls "std::terminate()" when the joinable thread object "t" is destroyed.

With "join()"

#include <iostream>
#include <thread>
using namespace std;

void task()
{
    cout << "Thread running" << endl;
}

int main()
{
    thread t(task);

    cout << "Main running" << endl;

    t.join();

    return 0;
}

Possible Output

Main running
Thread running

Or:

Thread running
Main running

The order of the first two messages is not guaranteed because both threads may execute concurrently.

However, the worker thread always finishes before "join()" returns.

5. Multiple Threads with "join()"

We can use "join()" for multiple threads.

Example

#include <iostream>
#include <thread>
using namespace std;

void task1()
{
    cout << "Task 1 completed" << endl;
}

void task2()
{
    cout << "Task 2 completed" << endl;
}

int main()
{
    thread t1(task1);
    thread t2(task2);

    t1.join();
    t2.join();

    cout << "All tasks completed" << endl;

    return 0;
}

Possible Output

Task 1 completed
Task 2 completed
All tasks completed

The order of Task 1 and Task 2 messages may change.

But "All tasks completed" is printed only after both threads finish.

6. Important Rules of "join()"

1. "join()" can be called only when the thread object is joinable.
2. We cannot call "join()" again after the same thread has already been joined.
3. "join()" blocks the calling thread until the target thread completes.
4. After "join()" returns, the target thread has finished execution.
5. A joinable thread object must be joined or detached before destruction.

7. Real-Life Example

Imagine ordering food:

- Task 1: Food preparation.
- Task 2: Food delivery.
- Main task: Receiving the food.

We need to wait until the required work is complete.

Similarly, "join()" makes one thread wait until another thread finishes.

8. Interview Questions

Q1. What is "join()" in C++?

Answer: "join()" is a member function of "std::thread" that waits for the target thread to finish execution.

Q2. Why do we use "join()"?

Answer: To ensure that a thread completes before the calling thread continues.

Q3. What happens if we don't call "join()" or "detach()"?

Answer: If a joinable thread object is destroyed, the program calls "std::terminate()".

Q4. Can we call "join()" twice on the same thread object?

Answer: No. Calling "join()" when the thread is no longer joinable results in a "std::system_error".

Q5. Does "join()" block the main thread?

Answer: Yes. When called from the main thread, it waits until the target thread completes.

9. Important Points

- "join()" waits for a thread to finish.
- It blocks the calling thread.
- It does not create a new thread.
- It does not detach a thread.
- After joining, the thread object is no longer joinable.
- Each joinable thread must be joined or detached before its object is destroyed.

10. Lesson Summary

In this topic, we learned:

1. What "join()" is.
2. Syntax of "join()".
3. How to use "join()" with a single thread.
4. How to use "join()" with multiple threads.
5. Difference between using and not using "join()".
6. Important rules and interview questions.

### topic 6

Topic 6: "detach()" in C++

1. What is "detach()"?

"detach()" is a member function of the C++ "std::thread" class.

It separates a thread from its "std::thread" object, allowing the thread to continue executing independently.

In simple words, "detach()" allows a thread to run independently without making the calling thread wait for it.

2. Syntax

threadObject.detach();

Example:

thread t(task);
t.detach();

3. Simple Example

#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void task()
{
    cout << "Thread started!" << endl;

    this_thread::sleep_for(chrono::seconds(2));

    cout << "Thread completed!" << endl;
}

int main()
{
    thread t(task);

    t.detach();

    cout << "Main thread completed!" << endl;

    return 0;
}

Important Note

The main function may finish before the detached thread completes.

When the main process exits, all remaining threads, including detached threads, stop.

Therefore, the message ""Thread completed!"" may not appear.

4. How Does "detach()" Work?

1. "thread t(task);" – Creates a new thread.
2. "t.detach();" – Separates the thread from its thread object.
3. The main thread continues its execution.
4. The detached thread continues independently.
5. When the process terminates, all remaining threads stop.

Important: "detach()" does not separate the thread from its process. It only removes the association between the thread and its "std::thread" object.

5. Difference Between "join()" and "detach()"

"join()"| "detach()"
Waits for the target thread to finish| Does not wait for the target thread
Blocks the calling thread| Allows the calling thread to continue
Keeps the thread associated with its object until completion| Separates the thread from its object
Useful when completion must be guaranteed before continuing| Useful for carefully managed background tasks

After either operation, the thread object is no longer joinable.

6. Example Using "join()"

If the main thread must wait until the worker thread completes, use "join()".

#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void task()
{
    this_thread::sleep_for(chrono::seconds(2));

    cout << "Worker completed!" << endl;
}

int main()
{
    thread t(task);

    t.join();

    cout << "Main completed!" << endl;

    return 0;
}

Output

Worker completed!
Main completed!

The main thread waits until the worker thread finishes.

7. Important Rules of "detach()"

1. "detach()" can only be called on a joinable thread.
2. Once detached, the same thread object cannot be used to join that thread.
3. A detached thread executes independently.
4. The main thread does not automatically wait for a detached thread.
5. When the process terminates, remaining detached threads also stop.
6. Be careful when accessing local variables or objects through references in detached threads. Those objects may be destroyed before the thread finishes.
7. Exceptions and errors in detached-thread tasks must be handled carefully.

8. Real-Life Example

Imagine starting a file download on a mobile application.

- The download continues in the background.
- You can use other features of the application.
- You do not need to wait for the download to finish before continuing.

This is a simple analogy for independent background execution.

Real applications still need proper thread-lifetime and synchronization management.

9. Interview Questions

Q1. What is "detach()" in C++?

Answer: "detach()" separates a thread from its "std::thread" object and allows it to execute independently.

Q2. What is the difference between "join()" and "detach()"?

Answer: "join()" waits for a thread to finish, whereas "detach()" allows it to continue independently without waiting.

Q3. Can we join a detached thread?

Answer: No. After detaching, the thread object is no longer joinable.

Q4. Does "detach()" stop a thread?

Answer: No. It allows the thread to continue independently.

Q5. What happens when the main process exits?

Answer: All remaining threads, including detached threads, stop when the process terminates.

10. Important Points

- "detach()" is a member function of "std::thread".
- It separates a thread from its thread object.
- It does not make the thread wait for the main thread.
- A detached thread continues independently while the process is running.
- Detached threads require careful lifetime management.
- Use "join()" when you need to guarantee that a thread has completed.

11. Lesson Summary

In this topic, we learned:

1. What "detach()" is.
2. Syntax of "detach()".
3. How detached threads work.
4. Difference between "join()" and "detach()".
5. Important rules and risks of detached threads.
6. Real-life applications and interview questions.

### topic 7

Topic 7: "mutex" in C++

1. What is a Mutex?

"mutex" stands for Mutual Exclusion.

A mutex is a synchronization mechanism in C++ used to protect shared data from simultaneous access by multiple threads.

It allows only one thread at a time to access a protected section of code using the same mutex.

Header file:

#include <mutex>

2. Why Do We Need a Mutex?

Imagine a bank account has a balance of ₹1,000.

Two threads are working at the same time:

- Thread 1 deposits ₹500.
- Thread 2 withdraws ₹200.

If both threads access and modify the shared balance without proper synchronization, a race condition can occur.

A mutex helps protect the shared data and prevents conflicting simultaneous updates.

3. Mutex Syntax

Creating a Mutex

std::mutex mtx;

Locking a Mutex

mtx.lock();

Unlocking a Mutex

mtx.unlock();

- "lock()" – Acquires the mutex. If another thread owns it, the calling thread waits.
- "unlock()" – Releases the mutex so another thread can acquire it.

4. Simple Mutex Example

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int balance = 1000;

mutex mtx;

void deposit()
{
    mtx.lock();

    balance += 500;

    cout << "Balance after deposit: "
         << balance << endl;

    mtx.unlock();
}

void withdraw()
{
    mtx.lock();

    balance -= 200;

    cout << "Balance after withdrawal: "
         << balance << endl;

    mtx.unlock();
}

int main()
{
    thread t1(deposit);
    thread t2(withdraw);

    t1.join();
    t2.join();

    cout << "Final Balance: " << balance << endl;

    return 0;
}

Possible Output 1

Balance after deposit: 1500
Balance after withdrawal: 1300
Final Balance: 1300

Possible Output 2

Balance after withdrawal: 800
Balance after deposit: 1300
Final Balance: 1300

Note: The order of execution may change because the operating system schedules the threads.

The final balance is ₹1,300 because both updates are protected by the same mutex.

5. How Does Mutex Work?

1. Thread 1 requests the mutex.
2. Thread 1 acquires the lock.
3. Thread 2 tries to acquire the same mutex and waits.
4. Thread 1 accesses and updates the shared data.
5. Thread 1 releases the mutex using "unlock()".
6. Thread 2 can now acquire the mutex and access the shared data.

Only one thread can own a normal mutex at a time.

6. Lock and Unlock

Example:

mtx.lock();

// Critical Section

mtx.unlock();

A critical section is a part of the program where shared data is accessed or modified.

Important: If an exception occurs after "lock()" but before "unlock()", the mutex may remain locked.

To avoid this problem, C++ provides RAII-based tools such as "std::lock_guard", which automatically releases the mutex.

7. Real-Life Example

Imagine a college has only one computer available for students.

- Student 1 uses the computer.
- Student 2 waits.
- Student 1 finishes and releases the computer.
- Student 2 gets a chance to use it.

In this analogy:

- Computer – Shared Resource
- Students – Threads
- Lock – Mutex

8. Important Points

- Mutex stands for Mutual Exclusion.
- "std::mutex" is available in the "<mutex>" header.
- It is used to protect shared data.
- "lock()" acquires the mutex.
- "unlock()" releases the mutex.
- Only one thread can own a normal mutex at a time.
- Mutex helps prevent race conditions when shared data is accessed correctly.
- Always release a manually acquired mutex.
- Prefer RAII tools such as "lock_guard" for safer mutex management.

9. Interview Questions

Q1. What is a mutex in C++?

Answer: A mutex is a synchronization mechanism used to protect shared data from simultaneous access by multiple threads.

Q2. What does mutex stand for?

Answer: Mutual Exclusion.

Q3. Which header file is required for mutex?

Answer: "<mutex>".

Q4. What is the purpose of "lock()"?

Answer: It acquires the mutex. If another thread owns it, the calling thread waits.

Q5. What is the purpose of "unlock()"?

Answer: It releases the mutex so another thread can acquire it.

Q6. Can multiple threads lock the same normal mutex simultaneously?

Answer: No. Only one thread can own a normal mutex at a time.

Q7. Why should we avoid manual locking and unlocking when possible?

Answer: If an exception or early return occurs before "unlock()", the mutex may remain locked. RAII tools help release it automatically.

10. Lesson Summary

In this topic, we learned:

1. What a mutex is.
2. Why mutex is required.
3. How to create a mutex.
4. How "lock()" and "unlock()" work.
5. How to protect shared data.
6. How mutex helps prevent race conditions.
7. Why automatic mutex management is safer.

### topic 8


# Topic: std::unique_lock in C++

## 1. Definition

`std::unique_lock` is a C++ class template used to manage mutex locking in multithreaded programs.

It follows the RAII (Resource Acquisition Is Initialization) principle.

It is more flexible than `std::lock_guard` because it supports manual locking, unlocking and transferring lock ownership.

## 2. Header File

```cpp
#include <mutex>
```

## 3. Why Do We Use unique_lock?

- To protect shared resources.
- To prevent race conditions.
- To support manual locking and unlocking.
- To support deferred locking.
- To transfer lock ownership.
- To provide flexible mutex management.

## 4. Syntax

```cpp
std::mutex mtx;

{
    std::unique_lock<std::mutex> lock(mtx);

    // Critical Section
}
```

## 5. How Does It Work?

1. Create a mutex object.
2. Create a unique_lock object.
3. The mutex gets locked automatically.
4. Execute the critical section.
5. You can manually unlock the mutex if needed.
6. When the object goes out of scope, it unlocks the mutex if it still owns the lock.

## 6. Example Program

```cpp
#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;

void display()
{
    std::unique_lock<std::mutex> lock(mtx);

    std::cout << "Thread is executing\n";

    lock.unlock();

    std::cout << "Mutex is unlocked\n";
}

int main()
{
    std::thread t1(display);

    t1.join();

    return 0;
}
```

### Output

```text
Thread is executing
Mutex is unlocked
```

## 7. Important Functions

| Function | Purpose |
|---|---|
| `lock()` | Locks the mutex |
| `unlock()` | Unlocks the mutex |
| `try_lock()` | Tries to lock without waiting |
| `owns_lock()` | Checks whether the lock is owned |
| `release()` | Releases ownership without unlocking the mutex |
| `mutex()` | Returns a pointer to the associated mutex |

## 8. Deferred Locking

Deferred locking means creating a unique_lock object without locking the mutex immediately.

```cpp
std::mutex mtx;

std::unique_lock<std::mutex> lock(mtx, std::defer_lock);

lock.lock();

// Critical Section

lock.unlock();
```

Here, `std::defer_lock` tells the constructor not to lock the mutex immediately.

## 9. Advantages

- Supports automatic locking and unlocking.
- Allows manual locking and unlocking.
- Supports deferred locking.
- Supports transferring lock ownership.
- Provides flexibility in multithreaded programming.
- Provides exception safety.

## 10. Limitations

- Slightly more overhead than lock_guard.
- More complex to understand.
- Requires careful handling of manual unlocking.

## 11. Difference Between lock_guard and unique_lock

| Feature | lock_guard | unique_lock |
|---|---|---|
| Automatic locking | Yes | Yes |
| Automatic unlocking | Yes | Yes |
| Manual unlock | No | Yes |
| Manual lock | No | Yes |
| Deferred locking | No | Yes |
| Try locking | No | Yes |
| Ownership transfer | No | Yes |
| Flexibility | Limited | High |
| Overhead | Lower | Slightly higher |

## 12. Important Interview Questions

1. What is `std::unique_lock`?
2. Why do we use unique_lock?
3. What is the difference between lock_guard and unique_lock?
4. What is deferred locking?
5. What is `std::defer_lock`?
6. What is the purpose of `try_lock()`?
7. What does `owns_lock()` do?
8. Can we manually unlock unique_lock?
9. What is ownership transfer?
10. Why is unique_lock more flexible than lock_guard?

## 13. Key Takeaway

`std::unique_lock` is a flexible RAII-based mutex wrapper that supports automatic and manual locking, unlocking, deferred locking and ownership transfer.

**Remember:**
- `lock_guard` = Simple automatic locking.
- `unique_lock` = Flexible locking and unlocking.

### topic 9


LESSON 28 – RACE CONDITION

1. Definition

A Race Condition occurs when two or more threads access and modify the same shared data concurrently, and the final result depends on the timing or order of their execution.

2. Shared Data

Shared Data is data that can be accessed by multiple threads.

Examples:
- Global variables
- Shared counters
- Bank account balance

3. Real-Life Example

Imagine a bank account has ₹1000.

- Thread 1 withdraws ₹500.
- Thread 2 withdraws ₹500.
- Both threads read the balance as ₹1000.
- Both subtract ₹500.
- Both write ₹500.

Expected Balance: ₹0
Actual Balance: ₹500

This is an example of Race Condition.

4. C++ Example Without Mutex

#include <iostream>
#include <thread>
using namespace std;

int counter = 0;

void increment()
{
    for(int i = 0; i < 100000; i++)
    {
        counter++;
    }
}

int main()
{
    thread t1(increment);
    thread t2(increment);

    t1.join();
    t2.join();

    cout << counter;

    return 0;
}

Expected Output: 200000

Actual output may be incorrect due to Race Condition.
In C++, this program has a data race and therefore undefined behavior.

5. How to Prevent Race Conditions?

Race Conditions can be prevented using synchronization mechanisms.

Methods:
- Mutex
- Lock Guard
- Unique Lock
- Scoped Lock
- Atomic Variables

6. Preventing Race Condition Using Mutex

A Mutex (Mutual Exclusion) allows only one thread at a time to access a protected critical section.

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int counter = 0;
mutex mtx;

void increment()
{
    for(int i = 0; i < 100000; i++)
    {
        mtx.lock();

        counter++;

        mtx.unlock();
    }
}

int main()
{
    thread t1(increment);
    thread t2(increment);

    t1.join();
    t2.join();

    cout << counter;

    return 0;
}

Output: 200000

7. Preventing Race Condition Using Lock Guard

lock_guard automatically locks the mutex when entering its scope and unlocks it when leaving its scope.

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int counter = 0;
mutex mtx;

void increment()
{
    for(int i = 0; i < 100000; i++)
    {
        lock_guard<mutex> lock(mtx);

        counter++;
    }
}

int main()
{
    thread t1(increment);
    thread t2(increment);

    t1.join();
    t2.join();

    cout << counter;

    return 0;
}

Output: 200000

8. Important Terms

Race Condition:
Unexpected result due to concurrent access to shared data.

Thread:
A unit of execution within a process.

Shared Data:
Data accessed by multiple threads.

Mutex:
A synchronization mechanism used to protect shared data.

Critical Section:
Part of a program where shared resources are accessed.

Synchronization:
Coordinating multiple threads to execute safely.

9. Advantages of Preventing Race Conditions

1. Ensures data consistency.
2. Prevents unexpected results.
3. Protects shared resources.
4. Makes multithreaded programs reliable.
5. Avoids data corruption.

10. Interview Definition

A Race Condition is a situation in multithreaded programming where multiple threads access shared data concurrently, and the final result depends on the timing or order of execution.

IMPORTANT POINTS:

- Race Condition = Unsafe concurrent access.
- Mutex = Protects shared data.
- Lock Guard = Automatically manages locking and unlocking.
- Critical Section = Protected code accessing shared resources.

### topic 10


TOPIC: CRITICAL SECTION

1. Definition

A Critical Section is a part of a program where a thread accesses or modifies shared resources (shared data).

2. Real-Life Example

Imagine a bank account containing ₹1000.

- Thread 1 withdraws ₹500.
- Thread 2 withdraws ₹300.
- Both threads access the same account balance.

The code that reads, modifies and updates the account balance is called the Critical Section.

3. Characteristics of Critical Section

1. It accesses shared resources.
2. It must be protected from unsafe simultaneous access.
3. It should be properly synchronized.
4. Mutex and Lock Guard can protect critical sections.
5. It helps prevent race conditions.

4. C++ Example

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int counter = 0;
mutex mtx;

void increment()
{
    mtx.lock();

    // Critical Section
    counter++;

    mtx.unlock();
}

int main()
{
    thread t1(increment);
    thread t2(increment);

    t1.join();
    t2.join();

    cout << counter;

    return 0;
}

Output:
2

5. Important Terms

- Critical Section: Code that accesses shared resources.
- Mutex: Synchronization mechanism used to protect shared data.
- Race Condition: Unexpected result due to unsafe concurrent access.
- Synchronization: Coordinating multiple threads safely.

6. Difference Between Critical Section and Mutex

Critical Section:
A part of code that accesses shared resources.

Mutex:
A synchronization mechanism used to protect shared resources.

7. Interview Definition

A Critical Section is a part of a program where shared resources are accessed or modified. It must be properly synchronized to prevent race conditions.

IMPORTANT POINT:

Critical Section = Code
Mutex = Protection
Race Condition = Unsafe concurrent access

### topic 11


TOPIC: DEADLOCK

1. Definition

A Deadlock is a situation where two or more threads wait indefinitely for resources held by each other, and none of them can continue execution.

2. Real-Life Example

Imagine two friends writing an exam.

- Friend 1 has a Pen but needs a Book.
- Friend 2 has a Book but needs a Pen.
- Friend 1 waits for the Book.
- Friend 2 waits for the Pen.
- Neither friend releases their resource.

This situation is called Deadlock.

3. C++ Example of Deadlock

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m1, m2;

void thread1()
{
    m1.lock();
    m2.lock();

    cout << "Thread 1 running\n";

    m2.unlock();
    m1.unlock();
}

void thread2()
{
    m2.lock();
    m1.lock();

    cout << "Thread 2 running\n";

    m1.unlock();
    m2.unlock();
}

int main()
{
    thread t1(thread1);
    thread t2(thread2);

    t1.join();
    t2.join();

    return 0;
}

Explanation:

1. Thread 1 locks m1.
2. Thread 2 locks m2.
3. Thread 1 waits for m2.
4. Thread 2 waits for m1.
5. Both threads wait indefinitely.

This creates a Deadlock.

Note: Deadlock depends on execution timing. It is a possible outcome of this program.

4. Four Necessary Conditions for Deadlock

Deadlock can occur when all four conditions exist together.

1. Mutual Exclusion:
Only one thread can use a resource at a time.

2. Hold and Wait:
A thread holds one resource while waiting for another resource.

3. No Preemption:
Resources cannot be forcibly taken away from a thread.

4. Circular Wait:
Two or more threads wait for resources held by each other in a circular order.

5. How to Prevent Deadlock?

1. Always acquire mutexes in the same order.
2. Use std::lock() to lock multiple mutexes safely.
3. Use std::scoped_lock for multiple mutexes.
4. Avoid unnecessary locking.
5. Release locks properly.

6. C++ Example Using Scoped Lock

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m1, m2;

void thread1()
{
    scoped_lock lock(m1, m2);

    cout << "Thread 1 running\n";
}

void thread2()
{
    scoped_lock lock(m1, m2);

    cout << "Thread 2 running\n";
}

int main()
{
    thread t1(thread1);
    thread t2(thread2);

    t1.join();
    t2.join();

    return 0;
}

Output:

Thread 1 running
Thread 2 running

The order of output may vary.

7. Important Terms

- Deadlock: Threads waiting indefinitely for each other.
- Mutex: Synchronization mechanism used to protect shared resources.
- Mutual Exclusion: Only one thread can access a resource at a time.
- Hold and Wait: Holding one resource while waiting for another.
- No Preemption: Resources cannot be forcibly taken away.
- Circular Wait: Threads waiting for each other's resources.

8. Interview Definition

A Deadlock is a situation in multithreaded programming where two or more threads wait indefinitely for resources held by each other, preventing further execution.

9. Difference Between Race Condition and Deadlock

Race Condition:
Multiple threads access shared data unsafely, causing unexpected results.

Deadlock:
Multiple threads wait indefinitely for resources held by each other.

IMPORTANT POINTS:

- Race Condition = Unexpected results.
- Critical Section = Code accessing shared resources.
- Mutex = Protects shared resources.
- Deadlock = Threads waiting forever.
- Scoped Lock = Safely locks multiple mutexes.

### topic 12


TOPIC: STARVATION

1. Definition

Starvation is a situation where a thread waits for a long time or indefinitely because other threads continuously get access to the required resources.

2. Real-Life Example

Imagine a hospital with three patients.

- Patient 1 has high priority.
- Patient 2 has high priority.
- Patient 3 has low priority.
- High-priority patients continuously arrive.
- Patient 3 keeps waiting and never gets treatment.

This situation is called Starvation.

3. Causes of Starvation

1. Priority Scheduling.
2. Unfair Resource Allocation.
3. Continuous Access by Other Threads.
4. Unfair Locking Mechanisms.
5. Lack of Proper Scheduling.

4. How to Prevent Starvation?

1. Use Fair Scheduling.
2. Avoid unnecessary thread priorities.
3. Use FIFO-based resource allocation.
4. Ensure every thread gets a chance.
5. Use proper synchronization mechanisms.

5. Important Terms

- Starvation: A thread waits indefinitely or excessively for resources.
- Fair Scheduling: Giving threads a fair chance to execute.
- Resource Allocation: Assigning resources to threads.
- Thread Priority: Importance assigned to a thread.

6. Difference Between Deadlock and Starvation

Deadlock:
Two or more threads wait indefinitely for resources held by each other.

Starvation:
A thread waits for a long time because other threads continuously get the required resources.

7. Interview Definition

Starvation is a situation in multithreaded programming where a thread waits indefinitely or for an excessively long time because other threads continuously get access to the required resources.

IMPORTANT POINTS:

- Deadlock = Threads waiting for each other.
- Starvation = A thread does not get a chance.
- Fair Scheduling = Helps prevent starvation.


### topic 13


TOPIC: THREAD SYNCHRONIZATION

1. Definition

Thread Synchronization is a technique used to coordinate multiple threads so that they can access shared resources safely without causing conflicts.

2. Real-Life Example

Imagine two students using one computer.

- Student 1 uses the computer first.
- Student 1 finishes and releases the computer.
- Student 2 gets a chance to use it.

This is an example of controlled resource access through synchronization.

3. Why Do We Need Thread Synchronization?

1. Prevents Race Conditions.
2. Protects Shared Data.
3. Controls Access to Shared Resources.
4. Avoids Unexpected Results.
5. Improves Program Reliability.

4. Types of Thread Synchronization in C++

1. Mutex
2. Lock Guard
3. Unique Lock
4. Scoped Lock
5. Atomic Variables
6. Condition Variables
7. Semaphores

5. C++ Example Using Mutex

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int counter = 0;
mutex mtx;

void increment()
{
    for(int i = 0; i < 1000; i++)
    {
        lock_guard<mutex> lock(mtx);

        counter++;
    }
}

int main()
{
    thread t1(increment);
    thread t2(increment);

    t1.join();
    t2.join();

    cout << counter;

    return 0;
}

Output:
2000

6. Important Concepts

- Mutual Exclusion: Only one thread accesses a protected critical section at a time.
- Race Condition: Unexpected result due to unsafe concurrent access.
- Critical Section: Part of code accessing shared resources.
- Deadlock: Threads waiting indefinitely for each other.
- Starvation: A thread waits excessively for resources.

7. Advantages of Thread Synchronization

1. Ensures Data Consistency.
2. Prevents Race Conditions.
3. Protects Shared Resources.
4. Improves Program Reliability.
5. Coordinates Multiple Threads Safely.

8. Interview Definition

Thread Synchronization is a technique used in multithreaded programming to coordinate multiple threads and ensure safe access to shared resources.

IMPORTANT POINT:

Thread Synchronization = Safe Coordination of Multiple Threads.


### topic 14


Condition Variables in C++
1. Definition
A condition variable is a synchronization mechanism in C++ that allows one or more threads to wait until a particular condition becomes true.

It is used to coordinate communication between threads.

Header file:
#include <condition_variable>

2. Why Do We Need Condition Variables?

Condition variables are used to:
1. Make threads wait until a condition is satisfied.
2. Avoid unnecessary continuous checking (busy waiting).
3. Coordinate communication between threads.
4. Improve CPU efficiency.
5. Synchronize multiple threads.

 3. Important Functions

1. wait()
   - Makes a thread wait until it receives a notification.
   - Releases the mutex while waiting.
   - Locks the mutex again before returning.

2. notify_one()
   - Wakes up one waiting thread.

3. notify_all()
   - Wakes up all waiting threads.

4. wait_for()
   - Waits for a specified duration.

5. wait_until()
   - Waits until a specified time.

4. How Condition Variables Work

1. A thread locks a mutex.
2. It checks whether the required condition is true.
3. If the condition is false, the thread waits.
4. While waiting, it temporarily releases the mutex.
5. Another thread changes the shared condition.
6. The other thread sends a notification.
7. The waiting thread wakes up and checks the condition again.
8. If the condition is true, it continues execution.

 5. Example Program

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

using namespace std;

mutex mtx;
condition_variable cv;

bool ready = false;

void worker()
{
    unique_lock<mutex> lock(mtx);

    cv.wait(lock, [] {
        return ready;
    });

    cout << "Worker thread is working!" << endl;
}

int main()
{
    thread t(worker);

    {
        lock_guard<mutex> lock(mtx);
        ready = true;
    }

    cv.notify_one();

    t.join();

    return 0;
}

6. Explanation of the Program

1. mutex mtx:
   Creates a mutex to protect shared data.

2. condition_variable cv:
   Creates a condition variable.

3. bool ready = false:
   Stores the condition's initial state.

4. unique_lock<mutex> lock(mtx):
   Locks the mutex.

5. cv.wait(lock, [] { return ready; }):
   Makes the worker thread wait until ready becomes true.

6. ready = true:
   The main thread changes the condition.

7. cv.notify_one():
   Wakes up one waiting thread.

8. t.join():
   Waits for the worker thread to finish.

7. Important Points

- Condition variables are generally used with mutexes.
- They help threads communicate with each other.
- wait() releases the mutex while waiting.
- The mutex is locked again before wait() returns.
- notify_one() wakes one waiting thread.
- notify_all() wakes all waiting threads.
- Always protect shared condition data using the same mutex.
- Use the predicate version of wait() to handle spurious wakeups.

 8. Advantages

1. Prevents unnecessary CPU usage caused by busy waiting.
2. Improves thread coordination.
3. Helps synchronize multiple threads.
4. Makes concurrent programs more efficient.

9. Interview Definition

A condition variable is a synchronization tool in C++ that allows threads to wait until a specific condition becomes true. It works together with a mutex to coordinate thread execution efficiently.


### topic 15


 std::condition_variable in C++

1. Definition

std::condition_variable is a synchronization class provided by the C++ Standard Library.

It allows one or more threads to wait until a particular condition becomes true.

It is used for communication and coordination between threads.

Header file:
#include <condition_variable>

 2. Syntax

std::condition_variable cv;

 3. Important Functions

1. wait(lock)
   - Makes a thread wait until it receives a notification.
   - Temporarily releases the mutex while waiting.
   - Locks the mutex again before returning.

2. wait(lock, predicate)
   - Waits until the predicate returns true.
   - Automatically checks the condition again after waking up.
   - Helps handle spurious wakeups.

3. notify_one()
   - Wakes up one waiting thread.

4. notify_all()
   - Wakes up all waiting threads.

5. wait_for()
   - Waits for a specified duration.

6. wait_until()
   - Waits until a specified time.

4. Example Program

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

using namespace std;

mutex mtx;
condition_variable cv;

bool ready = false;

void task()
{
    unique_lock<mutex> lock(mtx);

    cv.wait(lock, [] {
        return ready;
    });

    cout << "Condition satisfied!" << endl;
}

int main()
{
    thread t(task);

    {
        lock_guard<mutex> lock(mtx);
        ready = true;
    }

    cv.notify_one();

    t.join();

    return 0;
}

5. Explanation of the Program

1. mutex mtx:
   Creates a mutex to protect shared data.

2. condition_variable cv:
   Creates a condition variable.

3. bool ready = false:
   Stores the initial condition.

4. unique_lock<mutex> lock(mtx):
   Locks the mutex.

5. cv.wait(lock, predicate):
   Makes the thread wait until ready becomes true.

6. ready = true:
   The main thread changes the condition.

7. cv.notify_one():
   Sends a notification to one waiting thread.

8. t.join():
   Waits for the worker thread to finish.

 6. Important Points

- std::condition_variable belongs to the <condition_variable> header.
- It is generally used with std::mutex.
- It requires std::unique_lock<std::mutex> for wait().
- wait() temporarily releases the mutex.
- The mutex is locked again before wait() returns.
- notify_one() wakes one waiting thread.
- notify_all() wakes all waiting threads.
- Always protect shared condition data using the same mutex.
- Use the predicate version of wait() to handle spurious wakeups.

7. Advantages

1. Avoids unnecessary continuous checking (busy waiting).
2. Improves thread coordination.
3. Helps synchronize multiple threads.
4. Improves the efficiency of concurrent programs.

8. Difference Between Condition Variable and Mutex

Mutex:
- Protects shared data.
- Allows only one thread at a time to own the lock.

Condition Variable:
- Allows threads to wait for a particular condition.
- Helps threads communicate and coordinate their execution.

 9. Interview Definition

std::condition_variable is a C++ synchronization class that allows threads to wait efficiently until a particular condition becomes true. It works with a mutex and provides notification mechanisms to coordinate thread execution.
