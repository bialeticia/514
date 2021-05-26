// 14. Fazer um algoritmo que leia três valores, determine e imprima o maior deles.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int menor, maior, valorUm, valorDois, valorTres;
	
	printf("Digite o 1º valor: ");
	scanf("%d", &valorUm);
	fflush(stdin);
	
	printf("\nDigite o 2º valor: ");
	scanf("%d", &valorDois);
	fflush(stdin);
	
	printf("\nDigite o 3º valor: ");
	scanf("%d", &valorTres);
	fflush(stdin);

    if(valorUm > valorDois && valorUm > valorTres){
    printf("\nO valor %d é o maior.", valorUm);
	}
	
	else if(valorDois > valorUm && valorDois > valorTres){
    printf("\nO valor %d é o maior.", valorDois);
	}
	
	else if(valorTres > valorUm && valorTres > valorDois){
    printf("\nO valor %d é o maior.", valorTres);
	}	  

return 0;

}	
