// 7. Ler dois valores numéricos e apresentar a diferença do maior valor pelo menor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int diferenca, valorUm, valorDois;
	
	printf("Digite o 1º valor numérico: ");
	scanf("%d", &valorUm);
	fflush(stdin);
	
	printf("\nDigite o 2º valor numérico: ");
	scanf("%d", &valorDois);
	fflush(stdin);
	
	if (valorUm>=valorDois){
		diferenca = valorUm - valorDois;
		printf("\nA diferença do maior valor pelo menor é %d.", diferenca);
	}
	else{
		diferenca = valorDois - valorUm;
		printf("\nA diferença do maior valor pelo menor é %d.", diferenca);
	}
	
return 0;

}	
