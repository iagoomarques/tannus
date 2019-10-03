#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main(int argc, char *argv[]){

	pid_t pid;
	pid = fork();

		if(pid < 0){
			
			printf ("3RR0R\n");

		}
		
		else if (pid == 0){

			execlp (argv[], argv[], NULL);

		}

		else{

			wait(NULL);

			printf ("\t\tPrograma Executado!\n");

		}

}
 
	