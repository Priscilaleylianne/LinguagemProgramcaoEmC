#include <stdio.h>/*Cont�m fun��es, tipos e macros
 de entrada e sa�da por perif�rico padr�o*/
#include <string.h>/*Define fun��es para manipula��o
 "string"*/
	
int main() { //programa principal

	//declara��o de vari�veis int, double, char
	int idade;
	double salario, altura;
	char genero;
	char nome[50];
	
		//vari�veis recebendo valores
		idade = 20;
		salario = 5800.5;
		altura = 1.63;
		genero = 'F';
			
			//inicio da l�gica de programa��o
			strcpy(nome, "Maria Silva");
			printf("IDADE = %d\n", idade);
			printf("SALARIO = %.2lf\n", salario);
			printf("ALTURA = %.2lf\n", altura);
			printf("GENERO = %c\n", genero);
			printf("NOME = %s\n", nome);

return 0;
}
