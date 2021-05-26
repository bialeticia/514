// 12. Faça um algoritmo em português estruturado que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores:
// 61 - Brasília
// 71 - Salvador
// 11 - São Paulo
// 21 - Rio de Janeiro
// 32 - Juiz de Fora
// 19 - Campinas
// 27 - Vitória
// 31 - Belo Horizonte
// qualquer outro - uma cidade no Brasil sem identificação

#include <stdio.h> // biblioteca para anexar a função main.
#include <stdlib.h> // biblioteca de funções.
#include <locale.h> // biblioteca para potuguês.
#include <string.h> // biblioteca de strings.

int main(){ // início do algoritmo: função "main()".
	
	setlocale(LC_ALL, "Portuguese"); // linguagem em português.
	
	int ddd; // declaração de variáveis.
	
	printf("Digite o DDD: "); // impressão do texto para o usuário.
	scanf("%d", &ddd); // recepção de dados de entrada.
	
	if (ddd==61){ // estrutura de decisão.
		printf("\nO DDD é de Brasília."); // impressão do texto para o usuário.
	}
	else if(ddd==71){ // estrutura de decisão.
		printf("\nO DDD é de Salvador."); // impressão do texto para o usuário.
	}
	else if(ddd==11){ // estrutura de decisão.
		printf("\nO DDD é de São Paulo."); // impressão do texto para o usuário.
	}
	else if(ddd==21){ // estrutura de decisão.
		printf("\nO DDD é do Rio de Janeiro."); // impressão do texto para o usuário.
	}
	else if(ddd==32){ // estrutura de decisão.
		printf("\nO DDD é de Juiz de Fora."); // impressão do texto para o usuário.
	}
	else if(ddd==19){ // estrutura de decisão.
		printf("\nO DDD é de Campinas."); // impressão do texto para o usuário.
	}
	else if(ddd==27){ // estrutura de decisão.
		printf("\nO DDD é de Vitória."); // impressão do texto para o usuário.
	}
	else if(ddd==31){ // estrutura de decisão.
		printf("\nO DDD é de Belo Horizonte."); // impressão do texto para o usuário.
	}
	else{ // estrutura de decisão.
		printf("\nO DDD é uma cidade no Brasil sem identificação."); // impressão do texto para o usuário.
	}
	
return 0; // retorno da função.

}	
