#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){

	pid_t pid;
	pid = fork();

	if(pid < 0){
		
		printf ("3RR0R\n");

	}

	else if (pid == 0){

		execlp ("ls", "ls", NULL);

	}

	else{

		wait (NULL);
		printf ("\t\tPrograma Executado\n");

	}

}