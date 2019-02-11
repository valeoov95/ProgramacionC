#include<stdio.h> 
#include<string.h>


int main (){

	char pass[12];
	char pass2[12]; 
	int eCont; 
	int comparar; 
	

	pass == "Hola123."; 
	/*
	printf("Por favor, ingresa una contrasenia: \n"); 
	scanf ("%s", &pass); 
	*/
	do{
		printf("Ingrese de nuevo su contrasena: \n"); 
		scanf("%s", &pass2); 
		
		comparar = strcmp(pass, pass2); 
		if (comparar != 0){
			printf("Constrasena incorrecta\n");
		       	eCont ++; 	
		}
		else{
			printf("Constrasena correcta\n");  
		 	break; 
		}
	}while (eCont != 3);

	
}
