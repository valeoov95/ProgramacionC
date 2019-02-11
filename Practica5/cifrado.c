#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>  
#include<time.h>

int main(int argc, char **argv){
	
	char caracter, aleatoria;  
	FILE *archivo1;
        FILE *archivo2; 
	FILE *archivo3; 

	srand (time(NULL)); 

	archivo1 = fopen("Cadena.txt", "r"); 
	archivo2 = fopen("aleatoria.txt", "w"); 
	archivo3 = fopen("cifradoCaracteres.txt","w"); 

	while((caracter = fgetc(archivo1)) != EOF){
	
		aleatoria = (rand()%57) + 65; 	
		fputc(aleatoria, archivo2); 

		fputc(caracter ^ aleatoria, archivo3); 
		//fputc(cifrado, archivo3); 
	}

	fclose(archivo1);
	fclose(archivo2);
	fclose(archivo3);

}
