/*
QUESTÃO 9
Dados dois pontos A e B, cujas coordenadas A(x1,y1) e B(x2, y2) 
serão informadas via teclado, desenvolver um algoritmo que calcule
a distância entre A e B.
*/

#include<stdio.h>
#include<math.h>

int main()// programa principal
{
    float X1, X2, Y1, Y2, distancia; // tipo de dado real

    printf("INSERIR COORDENADAS X1: \n"), X1;
    scanf("%f",&X1);
    printf("INSERIR COORDENADAS Y1: \n"), Y1;
    scanf("%f",&Y1);
    printf("\nINSERIR COORDENADAS X2: \n"), X2;
    scanf("%f",&X2);
    printf("INSERIR COORDENADAS Y2: \n"), Y2;
    scanf("%f",&Y2);
	//calculo
    distancia = sqrt( (pow(X2 - X1,2))+ (pow(Y2 - Y1,2)));
	//imprime informações inseridas
    printf("A DISTANCIA ENTRE A e B = %.2f\n",distancia);

    return 0;
}
