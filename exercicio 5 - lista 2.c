// 5. Complete os exercícios 1 (multa no eixão) e 3 (triângulo) com uma mensagem para quando a condição não for satisfeita (falsa).7

// (multa no eixão)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int velocidade;
	char placa[7];
	
	printf("Informe a velocidade do carro quando estiver trafegando no Eixo Rodoviário: ");
	scanf("%d", &velocidade);
	
	printf("\nInforme a placa do carro: ");
	scanf("%s", &placa);
	
	if (velocidade>=80){
		printf("\nO carro com placa %s será multado!", placa);
	}
	else if (velocidade<80){
		printf("\nO carro com placa %s NÃO será multado!", placa);
	}
	
return 0;

}

// (triângulo)

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valorUm, valorDois, valorTres;
	
	printf("Digite o 1º valor: ");
	scanf("%d", &valorUm);
	
	printf("\nDigite o 2º valor: ");
	scanf("%d", &valorDois);
	
	printf("\nDigite o 3º valor: ");
	scanf("%d", &valorTres);
	
	if(valorUm<valorDois+valorTres && valorDois<valorUm+valorTres && valorTres<valorUm+valorDois){
	printf ("\nOs valores podem constituir os lados de um triângulo!");
	}
	else{
	printf ("\nOs valores NÃO podem constituir os lados de um triângulo!");
	}

return 0;

}		
