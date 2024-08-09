#include <stdio.h>
int main()
{
     int index = 0, contador;
     char letras[5] = "Joao";
     for (contador=0; contador < 1000; contador++)
     { 
	printf("\n%c",letras[index]);
	index=(index==4)? index=0: ++index; 
     }


    return 0;
}

/*O operador ? é limitado (não atende a uma gama muito grande de casos) mas pode ser 
usado para simplificar expressões complicadas. Uma aplicação interessante é a do 
contador circular. Veja o exemplo:
O nome Joao é escrito na tela verticalmente até a variável contador determinar o 
término do programa. Enquanto isto a variável index assume os valores 
0, 1, 2, 3, 4, 0, 1, ... progressivamente.
*/
