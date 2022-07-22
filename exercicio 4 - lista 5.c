// 4. Uma loja de móveis de informática está necessitando de um sistema que identifique quais móveis de informática estão sendo solicitados pelos seus clientes. 
// Os móveis disponibilizados por esta empresa são: 1-cadeira, 2-mesa de computador, 3-estante de livros, 4-mesa de impressora e 5-estante de CD. 
// Quando se tratar de um móvel que não exista na empresa informe ao cliente que ainda não está disponível.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h> 
#include <ctype.h> 

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcaoMenu, quantidade, cd, mesadeComputador, cadeira, estante, mesadeImpressora, livros; 
	float total;

	do{
		system ("cls");
        printf("MENU PRINCIPAL \n\n\n");
        printf("|1| Cadeira \n\n");
        printf("|2| Mesa de computador \n\n");
        printf("|3| Estante de livros \n\n");
        printf("|4| Mesa de impressora \n\n");
        printf("|5| Estante de CD \n\n");
        printf("|6| Quantidades e total ");
        printf("\n\nDIGITE A OPÇÃO DESEJADA: ");
        scanf("%d", &opcaoMenu);
	
	 switch(opcaoMenu){
        
		case 1: 
        printf("\nInforme a quantidade de cadeiras solicitadas: ");
        scanf("%d", &cadeira);
        cadeira += quantidade;
	
	break;
        
		case 2: 
		printf("\nInforme a quantidade de mesas de computador solicitadas: ");
        scanf("%d", &mesadeComputador);
        mesadeComputador += quantidade;
    
	break; 
        
		case 3: 
		printf("\nInforme a quantidade de livros solicitadas: ");
        scanf("%d", &livros);
        livros += quantidade;
    
	break;  
        
        case 4: 
		printf ("\nInforme a quantidade de mesas de impressora solicitadas: ");
        scanf ("%d", &mesadeImpressora);
        mesadeImpressora += quantidade;
        
	break; 
        
        case 5: 
		printf ("\nInforme a quantidade de CDS solicitadas: ");
        scanf ("%d", &cd);
        cd += quantidade;
        
	break; 
        
    	case 6:
		total = cadeira + mesadeComputador + livros + mesadeImpressora + cd;
		printf("\nQuantidade de cadeiras solicitadas: %d", cadeira);
		printf("\nQuantidade de mesas de computador solicitadas: %d", mesadeComputador);
    	printf("\nQuantidade de livros solicitadas: %d", livros);
    	printf("\nQuantidade de mesas de impressora solicitadas: %d", mesadeImpressora);
		printf("\nQuantidade de CDS solicitadas: %d", cd);
    	printf ("\nTotal de solicitações: %f", total);
	
	break;
		
	default:
	printf("\nErro!");
    }
    } 
	while(1);

return 0;
	
}
