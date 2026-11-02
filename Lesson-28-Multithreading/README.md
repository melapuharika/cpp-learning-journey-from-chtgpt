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
