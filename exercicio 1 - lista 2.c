// 1. Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avise ao motorista somente se ele será multado,
// quando estiver trafegando no Eixo Rodoviário (limite de 80 km/h).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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
