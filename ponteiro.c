#include <stdio.h>
void main()
{
  int x;
  int *ptr;
  ptr = &x;
  printf("O endereco de X e: %p\n", ptr);
  
  return 0;
}
