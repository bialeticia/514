// 10. Faça um algoritmo em português estruturado que leia três valores numéricos e encontre qual o menor deles, mostrando-o no final. 
// Faça o chinesinho ao lado do seu algoritmo.

#include <stdio.h> // biblioteca para anexar a função main.
#include <stdlib.h> // biblioteca de funções.
#include <locale.h> // biblioteca para potuguês.
#include <string.h> // biblioteca de strings.

int main(){ // início do algoritmo: função "main()".
	
	setlocale(LC_ALL, "Portuguese"); // linguagem em português.
	
	int a, b, c, menor; // declaração de variáveis.
	
	printf("Digite o 1º valor numérico: "); // impressão do texto para o usuário.
	scanf("%d", &a); // recepção de dados de entrada.
	fflush(stdin); // limpeza dos buffers.
	
	printf("\nDigite o 2º valor numérico: "); // impressão do texto para o usuário.
	scanf("%d", &b); // recepção de dados de entrada.
	fflush(stdin); // limpeza dos buffers.
	
	printf("\nDigite o 3º valor numérico: "); // impressão do texto para o usuário.
	scanf("%d", &c); // recepção de dados de entrada.
	fflush(stdin); // limpeza dos buffers.
	
	if (a<b && a<c){ // estrutura de decisão.
		printf("\nO menor deles é %d.", a); // impressão do texto para o usuário.
	}
	else if(b<c){ // estrutura de decisão.
		printf("\nO menor deles é %d.", b); // impressão do texto para o usuário.
	}
	else{ // estrutura de decisão.
		printf("\nO menor deles é %d.", c); // impressão do texto para o usuário.
	}
	
return 0; // retorno da função.

}	
