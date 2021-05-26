// 16. Fazer um algoritmo que leia o nome e a altura de três pessoas, determine e apresente o nome e a altura da menor delas.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nomeUm[30], nomeDois[30], nomeTres[30];
	float alturaUm, alturaDois, alturaTres;
	
	printf("Informe o nome e sobrenome da 1º pessoa: ");
	fgets(nomeUm, 30, stdin);
	fflush(stdin);
	
	printf("Informe a altura em centímetros da 1º pessoa: ");
	scanf("%f", &alturaUm);
	fflush(stdin);
	
	printf("\nInforme o nome e sobrenome da 2º pessoa: ");
	fgets(nomeDois, 30, stdin);
	fflush(stdin);
	
	printf("Informe a altura em centímetros da 2º pessoa: ");
	scanf("%f", &alturaDois);
	fflush(stdin);
	
	printf("\nInforme o nome e sobrenome da 3º pessoa: ");
	fgets(nomeTres, 30, stdin);
	fflush(stdin);
	
	printf("Informe a altura em centímetros da 3º pessoa: ");
	scanf("%f", &alturaTres);
	fflush(stdin);

	if(alturaUm < alturaDois && alturaUm < alturaTres){
    printf("\n %s possui a menor altura.", nomeUm);
	}
	
	else if(alturaDois < alturaUm && alturaDois < alturaTres){
    printf("\n %s possui a menor altura.", nomeDois);
	}
	
	else if(alturaTres < alturaUm && alturaTres < alturaDois){
    printf("\n %s possui a menor altura.", nomeTres);
	}	  
	
return 0;

}	
