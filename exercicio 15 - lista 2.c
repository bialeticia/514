// 15. Faça um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso à Internet, 
// para isso você deverá ler a quantidade de horas que você utilizou. Sabe-se que você pagará R$ 30,00 por até 20 horas de uso (va1or básico), 
// caso você tenha usado mais de 20 horas, então você deve acrescentar 10% do valor básico para cada hora extra utilizada.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float quantHoras, horaExtra, valorBasico, total, calculo;
	
	printf("Informe a quantidade de horas que você utilizou: ");
	scanf("%f", &quantHoras);

	if(quantHoras<=20){
		printf("\nVocê pagará R$ 30,00 (va1or básico).");
	}
	else{
		horaExtra = 1.50;
		calculo = quantHoras * horaExtra;
		total = calculo + 30;
		printf("\nVocê pagará %.2f.", calculo);
	}
	
return 0;

}	
