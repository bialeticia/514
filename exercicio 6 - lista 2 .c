// 6. Escrever um algoritmo que determine se um número inteiro qualquer é PAR ou IMPAR.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &numero);
	
	if (numero % 2 == 0){
		printf("\nO número %d é PAR.", numero);
	}
	else{
		printf("\nO número %d é ÍMPAR.", numero);
	}
	
return 0;

}	
