#include <stdio.h>
void main()
{
  int a;
  int b;
  int c;
  int *ptr;  // declara um ponteiro para um inteiro
             // um ponteiro para uma vari�vel do tipo inteiro
  a = 90;
  b = 2;
  c = 3;
  ptr = &a;
  printf("Valor de ptr: %p, Conteudo de ptr: %d\n", ptr, *ptr);
  printf("B: %d, C: %d"), b, c);
  
  return 0;
}
