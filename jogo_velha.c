#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ){
	int i, j, linha, coluna, contador;
	char matriz[3][3];
	
	setlocale(LC_ALL,""); /*Acentua��o*/
	
	for(i = 0; i < 3; i++){
		putchar('\n');
		for(j = 0; j < 3; j++){
			putchar('\t');
			matriz[i][j] = '.';
			printf("%c", matriz[i][j]);
		}
		putchar('\n');
		putchar('\n');
	}
	//primeiro jogador sempre ser� 'x' e o segundo sempre ser� 'O';
	for (contador = 0; contador < 9; contador++){
		
		/*A varia��o do contador deve ser sempre 9, pois s�o apenas 9 poss�veis jogadas
		 *Se alternamos o valor de in�cio do contador, deve se alterar seu l�mite de forma � 
		 *diferen�a permanecer sempre 9  >  9 - 0 = 9.
		 *Al�m disso, � necess�rio notar que, mais a frente, o contador � usado na defini��o 
		 *de qual jogador ganhou, sendo portanto a altera��o aqui feita , l� levada em conta
		 */
		
		printf("\nInsira a linha em que dever� ser posto seu s�mbolo:\n");
		scanf("%d", &linha);
		fflush(stdout);
		linha--;
		
		printf("Insira a coluna em que dever� ser posto seu s�mbolo:\n");
		scanf("%d", &coluna);
		fflush(stdout);
		coluna--;
		
		putchar('\n');
		if(matriz[linha][coluna] == '.'){
		
			if(contador%2){/*O m�dulo por 2 dar� 1 ou 0: Se for 1, equivale a true e entra no if,
                                        *se for 0 equivale a false e entra no else*/
				matriz[linha][coluna] = 'O';
			} 
			else{
				matriz[linha][coluna] = 'X';
			}
			for(i = 0; i < 3; i++){
				putchar('\n');
				for(j = 0; j < 3; j++){
					putchar('\t');
					printf("%c", matriz[i][j]);
				}
				putchar('\n');
				putchar('\n');
			}
			if((matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] && matriz[0][0] != '.')||
			   (matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] && matriz[0][0] != '.')||
			   (matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] && matriz[0][0] != '.')||
			   (matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] && matriz[0][1] != '.')||
			   (matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2] && matriz[0][2] != '.')||
			   (matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2] && matriz[1][0] != '.')||
			   (matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2] && matriz[2][0] != '.')||
			   (matriz[2][0] == matriz[1][1] && matriz[2][0] == matriz[0][2] && matriz[2][0] != '.')){
					
				printf("\nJogador %d ganhou!", (contador%2) + 1);	/*O jogador que deveria ser 0 � acrescido de 1, tornando-se jogador 1*/
				exit(0);						/*O jogador que deveria ser 1 � acrescido de 1, tornando-se jogador 2*/
			}
		}
		else{
			printf("\nO espa�o escolhido j� est� ocupado, repita a opera��o para um espa�o v�lido\n");
			contador--;
		}
	}
	
	printf("\nNingu�m ganhou :(");
	exit(0);
}
