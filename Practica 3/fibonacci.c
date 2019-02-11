#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 



int fibonacci(int num){
	int i; 
       	if (num > 2){
		return fibonacci(num - 1) + fibonacci (num - 2);
        }
	
        else if (num == 0 || num == 1){
                return num; 
        }
}

void main(int argc, char **argv){
	int num,i; 
	
	num = atoi(*(argv+1)); 

	printf ("Programa de Fibonacci\t"); 
	for (i = 0; i < num; i++){
		printf ("El resultado de tu numero %d es %d", num, fibonacci(i)); 	
	}
}


