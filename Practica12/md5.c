#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/md5.h>


int main(int argc, char **argv){
  int i;
  char result[MD5_DIGEST_LENGTH];

  MD5(argv[1], strlen(argv[1]), result);

  for(i = 0; i < MD5_DIGEST_LENGTH; i++){
	  printf("%02x\n", result[i]);
  }

  return EXIT_SUCCESS;
}
