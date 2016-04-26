
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    pid_t pid;
    pid = fork();
    if(pid < 0)
        printf("error occurred!\n");
    else if(pid == 0) {
        printf("Hi father! I'm a ZOMBIE1\n");
        exit(0);      //(1)
    }
    else {
	    pid = fork();
	    if(pid < 0)
		    printf("error occurred!\n");
	    else if(pid == 0){
		    printf("Hi father! I'm a ZOMBIE2\n");
		    exit(NULL);
	    }
	    else{
		    pid = fork();
		    if(pid < 0)
			    printf("error occurred!\n");
		    else if(pid == 0){
			    printf("Hi father! I'm a ZOMBIE3\n");
			    exit(NULL);
		    }else{
			    pid = fork();
			    if(pid < 0)
				    printf("error occurred!\n");
			    else if(pid == 0){
				    printf("Hi father! I'm a ZOMBIE4\n");
				    exit(NULL);
			    }else{
				    pid = fork();
				    if(pid < 0)
					    printf("error occurred!\n");
				    else if(pid == 0){
					    printf("Hi father! I'm a ZOMBIE5\n");
					    exit(NULL);
				    }else{
					while(1);
				    }
			    }
		    }
	    }
    }
}
