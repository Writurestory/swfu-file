#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
    pid_t pid;
    pid = fork();
    if(pid < 0)
        printf("error occurred!\n");
    else if(pid == 0) {
        sleep(6);
        printf("I'm a orphan\n");
        exit(0);
    }
    else {
        sleep(1);
        printf("Children Bye!\n");
    }
}

