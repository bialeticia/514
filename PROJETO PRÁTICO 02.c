#include <stdio.h> // Biblioteca para anexar a função "main()".
#include <string.h> // Biblioteca de strings.
#include <ctype.h> // Biblioteca para classificar caracteres.
#include <locale.h> // Biblioteca para língua portuguesa.
#include <math.h> // Biblioteca para operações matemáticas.
#include <stdlib.h> // Biblioteca para funções e constantes básicas.
#include <stdbool.h> // Biblioteca para manipular variáveis lógicas.

// Definir as cores verde, vermelho, azul e branco.
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_BLUE "\033[34m"
#define ANSI_COLOR_GREEN "\033[32m"
#define ANSI_COLOR_NONE "\033[0m"

int main(){
   
    setlocale(LC_ALL, "Portuguese");

    int quantdeAssentos=0, opcaoMenu=0, idade, ocupadas, disponivel, confirmada, contadorIdentificador=1, l, e; // Declaração de variavéis para matriz, menu, idade e assentos.
    float valorPassagem, desconto, valorTotal; // Declaração de variavéis para a passagem.
    char nomeDestino[100]; // Declaração de variavéis para o destino.
    
    
    printf ("SALUMAR LINHAS AÉREAS\n\n");
    
    // Solicitando o nome do destino.
    printf("\n\n|1º PASSO| INFORME O NOME DO DESTINO: ");
    do{
        fgets(nomeDestino, 100, stdin);
    if(strlen(nomeDestino)<=0){
        printf("\n\nNOME DO DESTINO INVÁLIDO! INFORME NOVAMENTE: ");
    }
    }
    while(strlen(nomeDestino)<=1);
    
    // Solicitando a quantidade de assentos existente para o avião selecionado para tal destino.
    printf("\n\n|2º PASSO| DIGITE A QUANTIDADE DE ASSENTOS EXISTENTE NO AVIÃO: ");
    do{
        scanf("%d",&quantdeAssentos);
    if(quantdeAssentos<90 || quantdeAssentos>200){
        printf("\n\nQUANTIDADE DE ASSENTOS INVÁLIDO! DIGITE NOVAMENTE: ");
    }
    }
    while(quantdeAssentos<90 || quantdeAssentos>200);
    
    // Inicializando a matriz.
    char matriz[quantdeAssentos];
    int Cliente[quantdeAssentos][3];
    for(l=0;l<quantdeAssentos;l++){
        matriz[l]= 'D';
        Cliente[l][0] = 0;
    }

	// Solicitando o valor da passagem. 
    printf("\n\n|3º PASSO| INFORME O VALOR DA PASSAGEM: R$");
    fflush(stdin);
    scanf("%f",&valorPassagem);
    desconto = 0.5 * valorPassagem;
    
system("cls");
 
 	// Menu principal.
    do{
system ("cls");
        printf("MENU PRINCIPAL \n\n\n");
        printf("|1| VERIFICAR A OCUPAÇÃO DO VOO \n\n");
        printf("|2| EFETUAR UMA RESERVA \n\n");
        printf("|3| REALIZAR O CANCELAMENTO DE UMA RESERVA \n\n");
        printf("|4| EFETIVAR A CONFIRMAÇÃO DE UMA RESERVA \n\n");
        printf("|5| MOSTRAR A QUANTIDADE DE ASSENTOS RESERVADOS, CONFIRMADOS, DISPONÍVEIS E O VALOR TOTAL DE VENDAS DE %s ", nomeDestino);
        printf("\n|6| FECHAR O PROGRAMA \n\n");
        printf("\nDIGITE A OPÇÃO DESEJADA: ");
        scanf("%d", &opcaoMenu);
   
system ("cls");

	// Estrutura para decidir entre várias sequências de comandos quais serão executadas.
    switch(opcaoMenu){ 

		// Sequência de instruções para mostrar o mapa de lugares.
        case 1: 
            printf("|MAPA DOS LUGARES|\n\n");
            
            for(l=0;l<quantdeAssentos;l++){
                if (l %10 == 0){
                    printf("\n");
                }
                if (matriz[l] == 'D'){
                    printf("\t["ANSI_COLOR_GREEN"%c"ANSI_COLOR_NONE"]",matriz[l]);
                }
                else if (matriz[l] == 'R'){
                    printf("\t["ANSI_COLOR_RED"%c"ANSI_COLOR_NONE"]",matriz[l]);
                }
                else
                    printf("\t["ANSI_COLOR_BLUE"%c"ANSI_COLOR_NONE"]",matriz[l]);
            }
            printf("\n");
        break;

		// Sequência de instruções para efetuar a reserva.
        case 2: 
            printf("|EFETUAR UMA RESERVA|\n\n");
            
            printf("\nINFORME O NÚMERO DO ASSENTO: ");
            scanf("%d", &e);
        
            printf("\nINFORME A IDADE DO PASSAGEIRO: ");
            scanf ("%d", &idade);
        
            if(e<1 || e>200){
               printf("\nNÚMERO DO ASSENTO INVÁLIDO! DIGITE NOVAMENTE: \n");
            break;
            }
            
            if(matriz[e-1] != 'D'){
                printf("\nASSENTO INDISPONÍVEL!\n");
                break;
            }
            else{
                matriz[e-1] = 'R';
            }
            
            for (l = 0; l < quantdeAssentos; l++) {
                if(Cliente[l][0] == 0)
                    break;
            }
                
            printf("\nASSENTO RESERVADO COM SUCESSO! \n\nSEU NÚMERO IDENTIFICADOR PARA CANCELAMENTO E CONFIRMAÇÃO DA RESERVA É: %d\n", contadorIdentificador);
                
            if(idade<=5){
                desconto = 0.5 * valorPassagem;
                printf ("\nO VALOR DA PASSAGEM COM DESCONTO É R$%.2f\n", desconto);
                Cliente[l][2] = desconto;
            }
            else{
            printf ("\nO VALOR DA PASSAGEM É R$%.2f\n", valorPassagem);
                Cliente[l][2] = valorPassagem;
            }
            
            Cliente[l][0] = contadorIdentificador;
            Cliente[l][1] = e - 1;
            contadorIdentificador++;
        break;
    
        // Sequência de instruções para cancelar uma reserva.
        case 3: 
            printf("|REALIZAR O CANCELAMENTO DE UMA RESERVA|\n\n");
            do{
                printf ("INFORME O NÚMERO IDENTIFICADOR PARA REALIZAR O CANCELAMENTO DE UMA RESERVA: ");
                scanf("%d", &e);
            }while(e < 1);
            
            for(l = 0; l < quantdeAssentos; l++){
                if(Cliente[l][0] == e)
                    break;
            }
            if (l == quantdeAssentos){
                printf("\nCLIENTE NÃO ENCONTRADO.");
                break;
            }
                
            if(matriz[Cliente[l][1]] == 'C'){
                printf("\nNÃO FOI POSSÍVEL REALIZAR O CANCELAMENTO!\n");
            }
            else{
                matriz[Cliente[l][1]] = 'D';
                Cliente[l][0] = 0;
                printf("O CANCELAMENTO FOI EFETIVADO!\n\n");
            }
        break;
        
    	// Sequência de instruções para confirmar uma reserva.
        case 4:
            printf("|EFETIVAR A CONFIRMAÇÃO DE VENDA DE UMA RESERVA|\n\n");
        
            printf ("INFORME O NÚMERO IDENTIFICADOR PARA EFETIVAR A CONFIRMAÇÃO DE VENDA DE UMA RESERVA: ");
            scanf("%d", &e);
            
            for(l = 0; l < quantdeAssentos; l++){
                if(Cliente[l][0] == e)
                    break;
            }
            
            if(matriz[Cliente[l][1]] == 'D'){
            printf("\nNÃO FOI POSSÍVEL REALIZAR A CONFIRMAÇÃO!\n");
            }
            else{
            matriz[Cliente[l][1]] = 'C';
            printf("A CONFIRMAÇÃO DE VENDA DE UMA RESERVA FOI EFETIVADA!\n\n");
            }
        break;
    
        // Sequência de instruções para mostrar a quantidade de assentos reservados, disponíveis, confirmados e o valor total de vendas.   
        case 5:
            printf("|MOSTRAR A QUANTIDADE DE ASSENTOS RESERVADOS, CONFIRMADOS, DISPONÍVEIS E O VALOR TOTAL DE VENDAS DE %s|\n\n", nomeDestino);
            
			confirmada = 0;
            disponivel = 0;
            ocupadas = 0;
            for(e = 0; e < quantdeAssentos; e++){
                if(matriz[e] == 'D')
                    disponivel++;
                else if(matriz[e] == 'R')
                    ocupadas++;
                else
                    confirmada++;
            }
            
            valorTotal = 0;
            for(e = 0 ; e<quantdeAssentos; e++){
                if(Cliente[e][0] != 0)
                    valorTotal += Cliente[e][2];
            }
            printf("ASSENTOS DISPONÍVEIS: %d \nASSENTOS RESERVADOS: %d \nASSENTOS CONFIRMADOS: %d \n\nVALOR TOTAL DE VENDAS: R$%2.f", disponivel, ocupadas, confirmada, valorTotal);
        break;
    
    	// Sequência de instruções para fechar o programa.
        case 6:	
			printf("|BYE BYE|\n");
            
        return 0;
        }
        
    fflush(stdin);
    getchar();
    
	}
	while(1);
}
