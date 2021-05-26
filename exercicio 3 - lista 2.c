// 3. Dado três valores, verificar se eles podem constituir os lados de um triângulo 
// (triângulo é uma figura geométrica onde cada lado é menor do que a soma dos outros dois lados).

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
