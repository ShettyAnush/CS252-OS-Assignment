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

[Zombie.c](https://github.com/ShettyAnush/CS252-OS-Assignment/blob/main/3.18/Zombie.c)

## Demonstration
![DEMO]()

The following thread fuctions and declarations were used:

1. ` pthread_t {thread name }`

    - Used to declare a thread.
    - store the thread ID of the new thread.
    - example : `pthread_t t1;`

2. `int pthread_create(pthread_t *thread, pthread_attr_t *attr, void *(*start_routine) (void *arg), void *arg);`

    - thread: location where the thread ID is stored
    - attr: structure that specifies the attributes of the new thread.
    - start_routine: routine where the thread begins.
    - arg : arguments to pass to start_routine.
    - example : `pthread_create(&t1,NULL,&avg,NULL);`

3. ` void pthread_exit(void *status);`

    - Used to terminate a thread.
    - example : `pthread_exit(NULL);`

4. `int pthread_join(pthread_t thread, void **status);`

    - Used to wait for the termination of a thread
    - example : `pthread_join(t1,NULL);`


