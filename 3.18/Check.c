#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main () {
        system("./Zombie &");
        sleep(3);
        system("ps -l");
        sleep(7);
        printf("\n\nupdated list of processes with their states\n\n");
        system("ps -l");
        return(0);
}
