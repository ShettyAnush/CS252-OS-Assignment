#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
            // Fork returns process id in parent process
            int pid = fork();
            if(pid<0){
                 //exit(1);
                printf("failed to fork\n");
                return -1;
            }
            // Parent process
            if (pid > 0){
                printf("parent pid: %d\n", getpid());
                sleep(10);
            }
            // Child process
            else{
                printf("child pid: %d\n", getpid());
                exit(0);
            }
            return 0;
}
