Week 3 – Linux Process Management and C Programming

This repository contains the practical work completed for Week 3 using C programming on Ubuntu Linux through Oracle VirtualBox.
The tasks demonstrate fundamental operating system concepts related to process management,process identification, exit codes, standard I/O, and conditional execution.

Project structure :

Week-3/
└── Lab_3/
    └── pdf
    └── readme.md
    └── codes/
        ├── task1
        ├── task1.c
        ├── task2
        ├── task2.c
        ├── task3
        ├── task3.c
        ├── task4
        ├── task4.c
        ├── task5
        └── task5.c

Task 1: Long-Running Process
Shows how a process remains active for a specific period.
Created task1.c.
Used a loop and sleep() to keep the process running for 30 seconds.
Used another terminal to monitor the process with:

ps aux | grep task1

Task 2: Process Identity (PID and PPID)
Demonstrates how Linux identifies processes.
Created task2.c.
Displays the PID (Process ID) of the current process.
Displays the PPID (Parent Process ID).
Verified the process using:

ps -p PID -o pid,ppid,cmd

Task 3: Exit Codes and OS Feedback
Demonstrates how a program communicates its execution status to the operating system.
Created task3.c.
The program returns:
0 for successful execution.
1 for an error or failure condition.
The exit status can be checked using:

echo $?

Task 4: Standard I/O Streams
Demonstrates Linux standard input and output.
Created task4.c.
Used scanf() to receive input through stdin.
Used printf() to display output through stdout.


Task 5: Conditional Execution and Termination

Demonstrates decision-making and program termination based on user input.
Created task5.c.
Displays the process ID.
Accepts user input (1 or 0).
Makes a decision based on the entered value.
Terminates with an appropriate exit code.
Concept: Programs can use conditions to control exec

Technologies and tools :
>C Programming
>Ubuntu Linux
>Oracle VirtualBox
>GCC Compiler
>Linux Terminal
>Linux Process Management Commands


Conclusion:
In conclusion, these tasks give a practical understanding of how the Linux operating system manages process and program execution.
These tasks demonstrate the process lifetime, PID and PPID, exit codes, standard input and standard output, and conditional program termination. 





