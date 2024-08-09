/*
	QUEST�O 4
Muitos pa�ses est�o passando a utilizar o sistema m�trico. 
Fazer um algoritmo para executar as seguintes convers�es:

Ler uma temperatura em Fahrenheit e imprimir o equivalente em 
Celsius C=(5F-160)/9.
Ler uma quantidade de chuva dada em polegadas e imprimir o 
equivalente em mil�metros (1 polegada = 25,4 mm).
*/
#include<stdio.h>
#include<math.h>
#define milimetro_pol 25.4
int main ()// programa principal
{

    float celsius, fahrenheit, chuva_polegada, chuva_milimetro;// tipo de dado real

    printf("INSERIR O VALOR em FAHRENHEIT: \n"), fahrenheit;
    scanf("%f",&fahrenheit);
    printf("INSERIR O VALOR em CHUVA POLEGADA: \n"), chuva_polegada;
    scanf("%f",&chuva_polegada);
	// calculo
    celsius = (5 * fahrenheit - 160)/9;
    chuva_milimetro = chuva_polegada * milimetro_pol;
	//imprime informa��es inseridas
    printf("O VALOR EM CELSIUS = %.2f\n",celsius);
    printf("A QUANTIDADE DE CHUVA EH = %.2f\n",chuva_milimetro);
    return 0;
}


