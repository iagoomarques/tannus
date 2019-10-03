#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){

	int i = 0;
	
	for (i=0; i<=4; i++){

		if(fork() ==0)
			
			printf("\n\n\t\tFilho %i\n", i);

		else
			
			printf("\n\n\t\tPai %i\n", i);
		
	}

}