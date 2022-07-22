// 3. Faça um programa que leia um caractere e apresente o caractere lido na forma caractere, decimal, octal e hexadecimal, sendo um em cada linha.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char caractere;
	
	printf ("Informe o caractere: ");
	scanf ("%c", &caractere);
	
	printf ("\nNa forma decimal: %d \nNa forma octal: %o \nNa forma hexadecimal: %x", caractere, caractere, caractere);
	
return 0;
	
}
