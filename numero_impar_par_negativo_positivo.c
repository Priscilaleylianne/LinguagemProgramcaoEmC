#include <stdio.h>
#include <math.h>

int main(){
	int numero_inteiro;
	
	scanf("%d", &numero_inteiro);
	
	if(numero_inteiro > 0){
		printf("NUMERO POSITIVO\n");
	}
	
	else if(numero_inteiro < 0){
		printf("NUMERO NEGATIVO\n");
	}
	
	if(numero_inteiro % 2 == 0){
		printf("NUMERO PAR\n");
	}
	
	else if(numero_inteiro % 2 != 0){
		printf("NUMERO IMPAR\n");
	}
	return 0;
}
