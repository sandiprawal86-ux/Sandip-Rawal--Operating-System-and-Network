# Lab 3: Investigating Process Lifecycles and OS Interaction

## Introduction

This lab investigates how C programs interact with the Linux operating system. It focuses on processes, process identification, exit codes, standard input/output, and conditional process execution.

## Tasks Completed

### Task 1: The Long-Running Process
Demonstrates a process running for 30 seconds and being monitored using the Linux `ps` command.

### Task 2: Process Identity (PID and PPID)
Demonstrates how a process obtains and displays its Process ID (PID) and Parent Process ID (PPID).

### Task 3: Exit Codes and OS Feedback
Demonstrates how positive and negative inputs produce different exit codes.

### Task 4: Standard I/O Streams
Demonstrates standard input using `scanf()` and standard output using `printf()`.

### Task 5: Conditional Execution and Termination
Demonstrates how user input controls whether the process continues or terminates.

## Technologies Used

- C Programming
- GCC Compiler
- Ubuntu Linux
- Linux Terminal

## Concepts Demonstrated

- Process lifecycle
- PID and PPID
- `getpid()`
- `getppid()`
- `sleep()`
- Exit codes
- `stdin`
- `stdout`
- Conditional execution
- Linux `ps` command

## Files

- `task1_alive.c`
- `task2_identity.c`
- `task3_exit.c`
- `task4_input.c`
- `task5_control.c`
