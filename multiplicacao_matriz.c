#include <stdio.h>
#include <stdlib.h>

#define tamanho1 2
#define tamanho2 2

int main ( ){
    
    int matriz1[tamanho1][tamanho2],matriz2[tamanho2][tamanho1], k, j, i, soma;
    
    
    for (i = 0; i < tamanho1; i++){
        for (j = 0; j < tamanho2; j++){
            matriz1[i][j] = 0;
            matriz2[i][j] = 0;
        }           
    }
    printf("Insira a Primeira matriz: \n");
    for (i = 0; i < tamanho1; i++){
        for (j = 0; j < tamanho2; j++){
            scanf("%d", &matriz1[i][j]);
            fflush(stdout);
        }
    }
    printf("\nInsira a Segunda matriz: \n");
    for (i = 0; i < tamanho1; i++){
        for (j = 0; j < tamanho2; j++){
            scanf("%d", &matriz2[i][j]);
            fflush(stdout);
        }
    }
    soma = 0;
    printf("\nA matriz multiplicacao e :\n");
    for (i = 0; i < tamanho1; i++){
        for (j = 0; j < tamanho2; j++){
            for(k = 0; k < tamanho2; k++){
                  soma = soma + matriz1[i][k]*matriz2[k][j];
            }
            printf("%d",soma);
            soma = 0;
            putchar('\t');
        }
        putchar('\n');
    }
    
    system ("pause");
    return 0;
}
