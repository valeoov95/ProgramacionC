#include<stdio.h> 
#include<stdlib.h> 
#include<string.h>
int main(int argc, char **argv){
	
	int longitud, i;
	char *p; 

	longitud = strlen(argv[1]); 

	for(i = longitud - 1; i >= 0 ; i --){
		p = &argv[1][i]; 
		printf ("%c", *p); 	
	}
}
