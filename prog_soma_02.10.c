#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main (int argc, char *argv[]){

	int a, b, s;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	
	s = a+b;

	   printf ("\t\tSoma: %i\n", s);


}