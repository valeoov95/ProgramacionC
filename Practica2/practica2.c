#define INT_MAX 2147483647

#include<stdio.h> 
#include<limits.h> 
#include<time.h> 

int main (int argc, char** argv){
	time_t current_date = time(NULL); 

	time_t last_day = (time_t) INT_MAX; 

	printf ("%s", asctime(localtime(&last_day)));
	

}
