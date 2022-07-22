// 6. Desenvolva um programa em C que apresente um menu de opções numa janela “bem” amigável ao usuário, 
// onde este deverá escolher qual a região do Brasil que ele gostaria de conhecer. Após o usuário informar esta região, 
// limpe toda a janela e escreva no meio dela qual foi a opção do usuário. Lembrando que as regiões deverão ser apresentadas conforme o seguinte menu de opções:
// Menu de Opções
// ============
// 1 – Norte
// 2 – Nordeste
// 3 – Centro-Oeste
// 4 – Sudeste
// 5 – Sul
// 0 – Sair do programa

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 
#include <ctype.h> 

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcaoMenu, norte, nordeste, centrooeste, sudeste, sul; 

	do{
system ("cls");
        printf("MENU PRINCIPAL \n\n\n");
        printf("|1| Norte \n\n");
        printf("|2| Nordeste \n\n");
        printf("|3| Centro-Oeste \n\n");
        printf("|4| Sudeste \n\n");
        printf("|5| Sul \n");
        printf("\n|6| Sair do programa \n\n");
        printf("\nDIGITE A OPÇÃO DESEJADA: ");
        scanf("%d", &opcaoMenu);
   
system ("cls");

    switch(opcaoMenu){
       
	    case 1: 
        printf ("A região do Brasil que gostaria de conhecer é o Norte!");
    break;
        
		case 2: 
		printf ("A região do Brasil que gostaria de conhecer é o Nordeste!");
    break; 
        
		case 3: 
		printf ("A região do Brasil que gostaria de conhecer é o Centro-Oeste!");
    break;  
        
        case 4: 
		printf ("A região do Brasil que gostaria de conhecer é o Sudeste!");
    break; 
        
        case 5: 
		printf ("A região do Brasil que gostaria de conhecer é o Sul!");
    break; 
    
    	case 6:	
		printf("bye bye \n");
	break;
	}
	}

while(1);
return 0;
	
}
