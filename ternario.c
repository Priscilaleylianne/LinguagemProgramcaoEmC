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

/*O operador ? � limitado (n�o atende a uma gama muito grande de casos) mas pode ser 
usado para simplificar express�es complicadas. Uma aplica��o interessante � a do 
contador circular. Veja o exemplo:
O nome Joao � escrito na tela verticalmente at� a vari�vel contador determinar o 
t�rmino do programa. Enquanto isto a vari�vel index assume os valores 
0, 1, 2, 3, 4, 0, 1, ... progressivamente.
*/
