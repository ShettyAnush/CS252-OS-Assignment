#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main () {
        system("./Zombie &");  //Runs zombie program in background
        sleep(3);
        system("ps -l");      //Displays process states
        sleep(7);
        printf("\n\nupdated list of processes with their states\n\n");
        system("ps -l");
        return(0);
}
