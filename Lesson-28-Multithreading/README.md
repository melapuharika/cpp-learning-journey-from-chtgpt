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

Next Topic: Topic 4 – "std::thread" in Detail
