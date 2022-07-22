// 7. Faça um programa que leia três valores numéricos e os mostre em ordem crescente.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 
#include <ctype.h> 

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador, num[3], aux, b;

	for (contador = 0; contador < 3; contador++){
	printf ("Digite o número %d: ", contador + 1);
	scanf ("%d", &num[contador]);
	}
	
	for(aux = 0; aux < 3; aux++){
	for(contador = aux + 1; contador < 3; contador++){
	if(num[aux] > num[contador]){
	}	
	b = num[contador];
	}		
	num[contador] = num[aux];
	}			
	num[aux] = b;

	printf ("A ordem crescente é: %d, %d, %d", num[0], num[1], num[2]);
	
return 0;
	
}
