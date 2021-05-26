// 8. Modifique o algoritmo 4 (Sr. ou Sra.), feito anteriormente, para ler a altura e apresentar o peso ideal da pessoa, utilizando as seguintes fórmulas
// para homem: peso = (72.5 * altura) - 58
// para mulher: peso = (62.1 * altura) - 44.7

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30];
	char sexo, F, M;
	float altura, peso;
	
	printf("Informe o nome e sobrenome da pessoa: ");
	fgets(nome, 30, stdin);
	fflush(stdin);
	
	printf("\nInforme o sexo (M para masculino) ou (F para feminino): ");
	sexo = toupper(sexo);
	scanf("%c", &sexo);
	fflush(stdin);
	
	printf("\nInforme a altura em metros: ");
	scanf("%f", &altura);
	
	if (sexo=='M' || sexo=='m'){
		printf("\nIlmo. Sr. %s", nome);
		peso = (72.5 * altura) - 58;
		printf("\O seu peso ideal é %f.", peso);
	}
	else if (sexo=='F' || sexo=='f'){
		printf("\nIlma. Sra. %s", nome);
		peso = (62.1 * altura) - 44.7;
		printf("\O seu peso ideal é %f.", peso);
	}
	else{
		printf("Resposta inválida!");
	}
	
return 0;

}	
