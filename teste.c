#include <stdio.h>/*Contém funções, tipos e macros
 de entrada e saída por periférico padrão*/
#include <string.h>/*Define funções para manipulação
 "string"*/
	
int main() { //programa principal

	//declaração de variáveis int, double, char
	int idade;
	double salario, altura;
	char genero;
	char nome[50];
	
		//variáveis recebendo valores
		idade = 20;
		salario = 5800.5;
		altura = 1.63;
		genero = 'F';
			
			//inicio da lógica de programação
			strcpy(nome, "Maria Silva");
			printf("IDADE = %d\n", idade);
			printf("SALARIO = %.2lf\n", salario);
			printf("ALTURA = %.2lf\n", altura);
			printf("GENERO = %c\n", genero);
			printf("NOME = %s\n", nome);

return 0;
}
