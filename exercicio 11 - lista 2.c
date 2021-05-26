// 11. Alterar o exercício do triângulo (exercício 9), de forma que o algoritmo apresente no caso de triângulo o seu tipo: 
// equilátero (todos os lados são iguais), isósceles (dois lados iguais) ou um outro triângulo qualquer (escaleno). 
// Apresente o algoritmo, fazendo o teste do algoritmo (chinesinho) ao lado.

#include <stdio.h> // biblioteca para anexar a função main.
#include <stdlib.h> // biblioteca de funções.
#include <locale.h> // biblioteca para português.
#include <string.h> // biblioteca de strings.
#include <math.h> // biblioteca de funções matemáticas.

int main(){ // início do algoritmo: função "main()".
	
	setlocale(LC_ALL, "Portuguese"); // linguagem em português.
	
	int valorUm, valorDois, valorTres; // declaração de variáveis.
	
	printf("Digite o 1º valor: "); // impressão do texto para o usuário.
	scanf("%d", &valorUm); // recepção de dados de entrada.
	
	printf("\nDigite o 2º valor: "); // impressão do texto para o usuário.
	scanf("%d", &valorDois); // recepção de dados de entrada.
	
	printf("\nDigite o 3º valor: "); // impressão do texto para o usuário.
	scanf("%d", &valorTres); // recepção de dados de entrada.
	
	if(valorUm>=valorDois && valorDois>=valorTres){ // estrutura de decisão.
		printf("\nÉ um triângulo equilátero!"); // impressão do texto para o usuário.
	}

	else if(valorUm>=valorDois && valorUm<=valorTres || valorDois>=valorTres && valorDois<=valorUm || valorUm>=valorTres && valorUm<=valorDois){ // estrutura de decisão.
		printf("\nÉ um triângulo isósceles!"); // impressão do texto para o usuário.
	}

	else if(valorUm<=valorDois && valorDois<=valorTres && valorUm<=valorTres){ // estrutura de decisão.
		printf("\nÉ um triângulo escaleno!"); // impressão do texto para o usuário.
	}
	
	else{ // estrutura de decisão.
	printf("\nOs valores NÃO podem constituir os lados de um triângulo!"); // impressão do texto para o usuário.
	}


return 0; // retorno da função.

}	
