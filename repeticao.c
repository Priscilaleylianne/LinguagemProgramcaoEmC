#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	int num, cont;
	
	printf("digite um numero inteiro positivo: ");
	scanf("%d", &num);
	
	printf("\nOs numeros impares menores que %d sao:\n", num);
	if(num %2==0)
	num = num - 1;
	for(cont = num; cont >= 1; cont  = cont - 2)
	printf("%d", cont);
	return 0;
}
