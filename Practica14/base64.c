#include <string.h>
 
#include <openssl/sha.h>
#include <openssl/hmac.h>
#include <openssl/evp.h>
#include <openssl/bio.h>
#include <openssl/buffer.h>

 
char *base64(char *input, int length);
 
int main(int argc, char **argv)
{
  char *output = base64(*(argv+1), sizeof(*(argv+1)));
  printf("Cadena en base 64: *%s*\n", output);
  free(output);
}

char *base64(char *input, int length)
{
  BIO *bmem, *b64;
  BUF_MEM *bptr;
 
  b64 = BIO_new(BIO_f_base64());
  bmem = BIO_new(BIO_s_mem());
  b64 = BIO_push(b64, bmem);
  BIO_write(b64, input, length);
  BIO_flush(b64);
  BIO_get_mem_ptr(b64, &bptr);
 
  char *buff = (char *)malloc(bptr->length);
  memcpy(buff, bptr->data, bptr->length-1);
  buff[bptr->length-1] = 0;
 
  BIO_free_all(b64);
 
  return buff;
}
