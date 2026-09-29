# Operating System Lab 4

## Laboratory Exercise: Process Memory, Pointers and Memory Allocation

This laboratory exercise focuses on understanding how memory is organized and managed in a C program.
The practical activities demonstrate different memory areas of a process, including the text, data, BSS, heap, and stack segments.
The lab also explores pointers, memory addresses, dynamic memory allocation, and the use of `sizeof()` to understand the memory occupied by different data types.

## Objectives

* To understand the memory layout of a C program.
* To identify different process memory segments.
* To examine the memory addresses of variables.
* To understand pointers and their relationship with memory addresses.
* To understand stack and heap memory.
* To practice dynamic memory allocation in C.
* To use `sizeof()` to determine the memory occupied by variables and data types.
* To compare the observed program output with the expected results.

## Tasks Completed

**Task 1 – Data Types and Memory Size**
Different C data types were studied using the `sizeof()` operator.
The output was observed to understand how much memory is allocated to different types of variables.

**Task 2 – Process Memory Segments**
The main memory segments of a process were examined:

* Text Segment – Stores the program's executable instructions.
* Data Segment – Stores initialized global and static variables.
* BSS Segment – Stores uninitialized global and static variables.
* Heap – Used for dynamically allocated memory.
* Stack – Stores local variables, function calls, and related temporary data.

**Task 3 – Memory Addresses**
Memory addresses of different variables were displayed using pointers and the `%p` format specifier.
The results were used to observe the locations of variables in different memory areas.

**Task 4 – Pointers and Memory Allocation**
Pointers were used to store and access memory addresses. Dynamic memory allocation was also explored to understand how memory can be allocated during program execution.

**Task 5 – Laboratory Exercise Review**
The final part involved examining memory-related concepts and comparing the obtained program outputs with the expected results.
The observations helped reinforce the concepts of pointers, memory allocation, and process memory organization.

## Technologies Used

* Programming Language: C
* Operating System: Ubuntu Linux
* Compiler: GCC
* Environment: VirtualBox
* Terminal: Ubuntu Terminal

## Files and Structure

```text
Lab4/
│
├── datatype_sizes.c
├── memory_segments.c
├── pointer_memory.c
└── README.md
├── Lab4TaskOS.pdf

```

## Knowledge Check – What I Achieved

* Confirmed that the test system is 64-bit by comparing `sizeof()` output against the reference table — `int` came out as 4 bytes, `long` and `double` as 8 bytes, and `pointer` as 8 bytes, all matching the 64-bit column.
* Verified that `unsigned int` occupies the same 4 bytes as `int` on this system, even though it wasn't listed separately in the reference table.
* Understood why `sizeof(long)` can differ across systems — it depends on the data model a given architecture uses (e.g. 4 bytes on 32-bit, 8 bytes on 64-bit).
* Practically located where each type of variable lives in memory by printing addresses with `%p`: global/static variables in Data/BSS, local variables on the Stack, and dynamically allocated data on the Heap.
* Observed the actual address ranges on this system — Stack addresses in the `0x7ffd...` range (highest), Heap addresses lower than Stack, and Data/BSS addresses the lowest — and calculated the numerical difference between a Stack and a Heap address.
* Demonstrated concretely that a pointer variable itself resides on the Stack while the address it holds points to memory obtained from the Heap via `malloc()`.
* Reinforced that Stack memory is reclaimed automatically when a function returns, while Heap memory must be released manually with `free()`, otherwise it stays reserved for the program's lifetime.
* Connected the practical output back to OS theory: each process has its own virtual address space, which is how the OS keeps one process's memory isolated from another's.

## Key Learning Outcomes

Through this laboratory exercise, I learned how a C program uses different areas of memory during execution.
I gained practical understanding of pointers, memory addresses, stack and heap memory, and dynamic memory allocation.
I also learned how to use GCC in Ubuntu to compile and execute C programs and how to analyze the resulting output.

## Conclusion

Lab 4 provided practical knowledge of process memory organization and memory management in C.
By completing the different tasks, I was able to observe how variables and dynamically allocated memory are stored and accessed. 
The exercises also improved my understanding of pointers, memory addresses, stack and heap memory, and the `sizeof()` operator.
Overall, the laboratory helped connect theoretical operating-system concepts with practical C programming.
