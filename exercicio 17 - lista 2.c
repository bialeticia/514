// 17. Você tem um desejo incontrolável de descobrir quantos dias você já viveu em toda a sua vida, 
// então faça um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois calcule e escreva o nome e o número de dias, aproximados, 
// já vividos por essa pessoa.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int anoNascimento, anoAtual, numDias, anos;
	
	printf("Informe o ano de nascimento: ");
	scanf("%d", &anoNascimento);
	fflush(stdin);
	
	printf("\nInforme o ano atual: ");
	scanf("%d", &anoAtual);
	fflush(stdin);

	if (anoNascimento>=0 && anoAtual>=0){
		anos = anoAtual - anoNascimento;
		numDias = 365 * anos;
		printf("\nO número de dias já vividos são, aproximadamente, %d dias.", numDias);
	}

return 0;

}	
