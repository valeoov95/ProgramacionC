#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>

int main(int argc, char **argv){
	int num, i, eRes=1; 

	num = atoi(*(argv+1)); 

	for (i = 1 ; i < num; i++){
		eRes = eRes * i; 
	}

	printf ("El factorial de %d es %d", num, eRes); 
}
