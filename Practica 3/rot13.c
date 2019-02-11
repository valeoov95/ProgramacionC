#include<stdio.h> 
#include<string.h> 

int main (int argc, char **argv){

	char cadena[12]; 
	int longitud = 0;  
	char cadena2[12]; 
	strcpy(cadena, argv[1]); 
	int i = 0;

	fflush(stdin); 
	//longitud = strlen(cadena); 
	// printf ("La logitud de tu cadena es: %d \t", longitud); 

	for (i = 0; i < strlen(cadena); i++){ 
		if (cadena[i] >= 'A' && cadena[i] <= 'Z'){
			if ((cadena2[i]= cadena[i] + 13)  < 'Z'){
				printf ("%s \n", cadena2);
			}else{
				cadena2[i] = cadena[i] - 13; 
				printf ("%s \n", cadena2); 
			}
		} else {
			if (cadena[i] >= 'a' && cadena[i] <= 'z'){
				if ((cadena2[i] = cadena[i] + 13) < 'z'){
					printf ("%s \n", cadena2); 
				}
				else{
					cadena2[i] = cadena[i] -13; 
					printf("%s \n", cadena2); 
				}
			}
		
		}
	}

	printf("El resultado de tu cadena con ROT 13 es %s \n", cadena2); 
	
	
	
}
