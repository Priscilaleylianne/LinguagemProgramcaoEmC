#include <stdio.h>
#include<stdlib.h>

int main()
{
   int inteirol, inteiro2, soma; /* declaração */
   printf("Entre com o primeiro inteiro\n"); /* prompt */
   scanf("%d", &inteirol); /* le um inteiro */
   printf("Entre com o segundo inteiro\n"); /* prompt */
   scanf("%d", &inteiro2); /* le um inteiro */
   soma = inteirol + inteiro2; /* atribui soma */
   printf("A soma e %d\n", soma); /* imprime soma */
   return 0; /* indica que o programa foi bem-sucedido */
}
