# Question 3.18 - Processes

## Question

Using either a UNIX or a Linux system, write a C program that forks
a child process that ultimately becomes a zombie process. This zombie
process must remain in the system for at least 10 seconds. Process states
can be obtained from the command<br>
ps -l<br>
The process states are shown below the S column; processes with a state
of Z are zombies. The process identifier (pid) of the child process is listed
in the PID column, and that of the parent is listed in the PPID column.<br>
Perhaps the easiest way to determine that the child process is indeed
a zombie is to run the program that you have written in the background
(using the &) and then run the command ps -l to determine whether
the child is a zombie process. Because you do notwant too many zombie
processes existing in the system, you will need to remove the one that
you have created. The easiest way to do that is to terminate the parent
process using the kill command. For example, if the pid of the parent
is 4884, you would enter<br>
kill -9 4884

## Source Code
[Zombie.c](https://github.com/ShettyAnush/CS252-OS-Assignment/blob/main/3.18/Zombie.c)
To check if the program created a zombie process:
[Check.c](https://github.com/ShettyAnush/CS252-OS-Assignment/blob/main/3.18/Check.c)

## Demonstration
![DEMO](https://github.com/ShettyAnush/CS252-OS-Assignment/blob/main/3.18/Display.png)

The following process fuctions and declarations were used:

1. `fork()`

    - used to create processes
    - returns process ID
    - example : `pid = fork();`

2. `getpid()`

    - returns process ID of the calling process

3. `sleep()`

    - Used to delay execution with time parameter

4. `exit()`

    - Used to terminate the process immediately

5. `system()`
    - used to create a child process that executes the shell command
