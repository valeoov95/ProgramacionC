#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

int main(int argc, char **argv){
	int num; 

	num = atoi(*(argv+1)); 

	printf(num&1 == 0? "El numero es par" : "El numero es impar"); 
}
