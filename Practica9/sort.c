#include<stdio.h> 
#include<stdlib.h> 


int main (){
	
	int arreglo[] = {1,2,4,5,0}; 	
	int i, j, n = 0; 
	int *a, *b, temporal; 

	n = sizeof(arreglo) / sizeof(int); 

	for (i = 0; i < n; i++){
		for (j = 0; j < i; j ++){
			if (arreglo[j] > arreglo[j+1]){
				a = &arreglo[j]; //Apunta a la direccion de memoria de arreglo[j]			
				b = &arreglo[j+ 1]; 
				temporal = *a; //Se le asigna temporal el contenido de A 
				*a = *b; //Se hace el cambio del contenido A por el contenido B 
				*b = temporal; //Al contenido de B se le asigna a temporal 

			}
		
		}
		
	}


}
