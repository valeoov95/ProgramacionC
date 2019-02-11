#include<stdio.h> 
#include<stdlib.h> 
#include<sys/stat.h> 
#include<fcntl.h> 
#include<unistd.h>
#include<linux/input.h>

int main (int argc, char **argv){
	int fd; 
	struct input_event ev;

	//char *archivo = "/dev/input/event0\0"; 
	

	fd = open(*(argv+1), O_RDONLY); 
	
	for (;;){
	
		read(fd,&ev, sizeof (struct input_event)); 
		if (ev.type == 1 && ev.value != 1){
			printf(": %u\n",ev.code);  
		}

	}
	close(fd);

}
