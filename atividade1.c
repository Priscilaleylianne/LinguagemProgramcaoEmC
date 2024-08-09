/*
	QUESTÃO 1
O coração humano bate em média uma vez por segundo. Desenvolver 
um algoritmo para calcular e escrever quantas vezes o coração uma 
pessoa baterá se viver X anos.
*/
#include <stdio.h>
#include <math.h>
#define bat_ano 365.25
#define bat_dia 24
#define bat_hora 6010
#define bat_minuto 60

int main()// programa principal
{
	int idade;  //tipo de dado inteiro
	float bat_total; //tipo dado de real
	
	printf("INFORME A IDADE DA PESSOA: \n", idade);
	scanf("%d", &idade);
	
	//calculo
	bat_total = bat_ano * bat_hora * bat_minuto * idade;
	
	printf("O CORACAO BATEU %2f VEZES\n", bat_total);
	return 0;
}

/*
	A diretiva #define tem a seguinte forma geral:

 #define nome_da_macro sequência_de_caracteres

 Quando você usa esta diretiva, você está dizendo ao compilador 
 para que, toda vez que ele encontrar o nome_da_macro no programa 
 a ser compilado, ele deve substituí-lo pela sequência_de_caracteres 
 fornecida. 
 
*/
