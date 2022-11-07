# Question 4.22 - Threads & Concurrency

## Question

Write a multithreaded program that calculates various statistical values
for a list of numbers. This program will be passed a series of numbers
on the command line and will then create three separate worker threads.
One thread will determine the average of the numbers, the second will
determine the maximum value, and the third will determine the minimum
value. For example, suppose your program is passed the integers<br>
90 81 78 95 79 72 85<br>
The program will report<br>
The average value is 82<br>
The minimum value is 72<br>
The maximum value is 95<br>
The variables representing the average, minimum, andmaximum values
will be stored globally. The worker threads will set these values, and
the parent thread will output the values once the workers have exited.
(We could obviously expand this program by creating additional threads
that determine other statistical values, such as median and standard
deviation.)

[Multithread.c](https://github.com/ShettyAnush/CS252-OS-Assignment/blob/main/4.22/Multithread.c)

## Demonstration
![DEMO](https://github.com/ShettyAnush/CS252-OS-Assignment/blob/main/4.22/Display.png)

The following thread fuctions and declarations were used:

1. ` pthread_t {thread name}`

    - Used to declare a thread.
    - example : `pthread_t t1;`
    
2. ` pthread_attr_t {thread attribute object name}`

    - Used to declare a thread attribute object.
    - example : `pthread_attr_t attr;`

3. `int pthread_create(pthread_t *thread, pthread_attr_t *attr, void *(*start_routine) (void *arg), void *arg);`

    - used to create a new thread and makes it executable
    - thread: location where the thread ID is stored
    - attr: structure that specifies the attributes of the new thread
    - start_routine: routine that the thread will execute once it is created
    - arg : arguments to pass to start_routine
    - example : `pthread_create(&t1,&attr,&avg_calc,NULL);`

4. ` void pthread_exit(void *status);`

    - Used to terminate a thread.
    - example : `pthread_exit(0);`

5. `int pthread_join(pthread_t thread, void **status);`

    - Used to wait for the termination of a thread
    - example : `pthread_join(t1,NULL);`
