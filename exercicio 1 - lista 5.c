// 1. Elabore um programa que solicite ao usuário um valor percentual a ser calculado. Este cálculo deverá ocorrer sobre um valor constante igual a 555. 
// O programa deverá calcular o percentual desejado e apresentar o resultado calculado deste percentual.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float percentualUm, percentualDois; 

	printf("Informe um valor percentual: ");
	scanf("%f", &percentualDois);
	percentualUm = (percentualDois*555)/100;
	
	printf("\n\nO resultado calculado é: %2.f", percentualUm);

return 0;
	
}
