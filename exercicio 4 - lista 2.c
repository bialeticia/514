// 4. Desenvolver um algoritmo que leia o nome e o sexo de uma pessoa e apresente como saída uma das seguintes mensagens: 
// “Ilmo. Sr.”, para o sexo masculino ou “Ilma. Sra.” para o sexo feminino, acrescentando o nome em seguida. Observe o exemplo de um resultado:
// Ilma Sra. Ana Rita

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30];
	char sexo, F, M;
	
	printf("Informe o nome e sobrenome da pessoa: ");
	fgets(nome, 30, stdin);
	fflush(stdin);
	
	printf("\nInforme o sexo (M para masculino) ou (F para feminino): ");
	sexo = toupper(sexo);
	scanf("%c", &sexo);
	fflush(stdin);
	
	if (sexo=='M' || sexo=='m'){
		printf("\nIlmo. Sr. %s", nome);
	}
	else if (sexo=='F' || sexo=='f'){
		printf("\nIlma. Sra. %s", nome);
	}
	else{
		printf("Resposta inválida!");
	}
	
return 0;

}	
