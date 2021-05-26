// 2. Efetuar a leitura de um número e apresentá-lo como o seu módulo (somente seu valor absoluto) elaborando os cálculos matemáticos para isso.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, modulo;
	
	printf("Digite o número: ");
	scanf("%d", &numero);
	
	if(numero<0 || numero>=0){
	modulo = numero * (-1);
	printf ("\nO módulo do número é: %d", modulo);
	}

return 0;

}	
