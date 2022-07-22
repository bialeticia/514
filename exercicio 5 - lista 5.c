// 5. Faça um programa que pergunte ao usuário qual a letra inicial do seu sexo (masculino/feminino) e escreva por extenso o sexo informado, 
// usando o operador condicional ternário.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 
#include <ctype.h> 

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	
	printf ("Qual a letra inicial do seu sexo (masculino |M| / feminino |F|): ");
	scanf ("%s", &sexo);
	sexo = toupper(sexo);	
	sexo == 'M'? 
	printf ("Sexo masculino."): 
	printf ("Sexo feminino.");

return 0;
	
}
