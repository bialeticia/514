// Nome: Bianca Let�cia Moura Silva
// Matr�cula: UC21103715
// Curso: Ci�ncia da Computa��o

#include <stdio.h> // Biblioteca para anexar a fun��o "main()".
#include <string.h> // Biblioteca de strings.
#include <ctype.h> // Biblioteca para classificar caracteres.
#include <locale.h> // Biblioteca para l�ngua portuguesa.
#include <math.h> // Biblioteca para opera��es matem�ticas.
#include <stdlib.h> // Biblioteca para fun��es e constantes b�sicas.
#include <stdbool.h> // Biblioteca para manipular vari�veis l�gicas.

// Definir as cores verde, vermelho, azul e branco.
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_BLUE "\033[34m"
#define ANSI_COLOR_GREEN "\033[32m"
#define ANSI_COLOR_NONE "\033[0m"

int main(){
   
    setlocale(LC_ALL, "Portuguese");

    int quantdeAssentos=0, opcaoMenu=0, idade, ocupadas, disponivel, confirmada, contadorIdentificador=1, l, e; // Declara��o de variav�is para matriz, menu, idade e assentos.
    float valorPassagem, desconto, valorTotal; // Declara��o de variav�is para a passagem.
    char nomeDestino[100]; // Declara��o de variav�is para o destino.
    
    
    printf ("SALUMAR LINHAS A�REAS\n\n");
    
    // Solicitando o nome do destino.
    printf("\n\n|1� PASSO| INFORME O NOME DO DESTINO: ");
    do{
        fgets(nomeDestino, 100, stdin);
    if(strlen(nomeDestino)<=0){
        printf("\n\nNOME DO DESTINO INV�LIDO! INFORME NOVAMENTE: ");
    }
    }
    while(strlen(nomeDestino)<=1);
    
    // Solicitando a quantidade de assentos existente para o avi�o selecionado para tal destino.
    printf("\n\n|2� PASSO| DIGITE A QUANTIDADE DE ASSENTOS EXISTENTE NO AVI�O: ");
    do{
        scanf("%d",&quantdeAssentos);
    if(quantdeAssentos<90 || quantdeAssentos>200){
        printf("\n\nQUANTIDADE DE ASSENTOS INV�LIDO! DIGITE NOVAMENTE: ");
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
    printf("\n\n|3� PASSO| INFORME O VALOR DA PASSAGEM: R$");
    fflush(stdin);
    scanf("%f",&valorPassagem);
    desconto = 0.5 * valorPassagem;
    
system("cls");
 
 	// Menu principal.
    do{
system ("cls");
        printf("MENU PRINCIPAL \n\n\n");
        printf("|1| VERIFICAR A OCUPA��O DO VOO \n\n");
        printf("|2| EFETUAR UMA RESERVA \n\n");
        printf("|3| REALIZAR O CANCELAMENTO DE UMA RESERVA \n\n");
        printf("|4| EFETIVAR A CONFIRMA��O DE UMA RESERVA \n\n");
        printf("|5| MOSTRAR A QUANTIDADE DE ASSENTOS RESERVADOS, CONFIRMADOS, DISPON�VEIS E O VALOR TOTAL DE VENDAS DE %s ", nomeDestino);
        printf("\n|6| FECHAR O PROGRAMA \n\n");
        printf("\nDIGITE A OP��O DESEJADA: ");
        scanf("%d", &opcaoMenu);
   
system ("cls");

	// Estrutura para decidir entre v�rias sequ�ncias de comandos quais ser�o executadas.
    switch(opcaoMenu){ 

		// Sequ�ncia de instru��es para mostrar o mapa de lugares.
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

		// Sequ�ncia de instru��es para efetuar a reserva.
        case 2: 
            printf("|EFETUAR UMA RESERVA|\n\n");
            
            printf("\nINFORME O N�MERO DO ASSENTO: ");
            scanf("%d", &e);
        
            printf("\nINFORME A IDADE DO PASSAGEIRO: ");
            scanf ("%d", &idade);
        
            if(e<1 || e>200){
               printf("\nN�MERO DO ASSENTO INV�LIDO! DIGITE NOVAMENTE: \n");
            break;
            }
            
            if(matriz[e-1] != 'D'){
                printf("\nASSENTO INDISPON�VEL!\n");
                break;
            }
            else{
                matriz[e-1] = 'R';
            }
            
            for (l = 0; l < quantdeAssentos; l++) {
                if(Cliente[l][0] == 0)
                    break;
            }
                
            printf("\nASSENTO RESERVADO COM SUCESSO! \n\nSEU N�MERO IDENTIFICADOR PARA CANCELAMENTO E CONFIRMA��O DA RESERVA �: %d\n", contadorIdentificador);
                
            if(idade<=5){
                desconto = 0.5 * valorPassagem;
                printf ("\nO VALOR DA PASSAGEM COM DESCONTO � R$%.2f\n", desconto);
                Cliente[l][2] = desconto;
            }
            else{
            printf ("\nO VALOR DA PASSAGEM � R$%.2f\n", valorPassagem);
                Cliente[l][2] = valorPassagem;
            }
            
            Cliente[l][0] = contadorIdentificador;
            Cliente[l][1] = e - 1;
            contadorIdentificador++;
        break;
    
        // Sequ�ncia de instru��es para cancelar uma reserva.
        case 3: 
            printf("|REALIZAR O CANCELAMENTO DE UMA RESERVA|\n\n");
            do{
                printf ("INFORME O N�MERO IDENTIFICADOR PARA REALIZAR O CANCELAMENTO DE UMA RESERVA: ");
                scanf("%d", &e);
            }while(e < 1);
            
            for(l = 0; l < quantdeAssentos; l++){
                if(Cliente[l][0] == e)
                    break;
            }
            if (l == quantdeAssentos){
                printf("\nCLIENTE N�O ENCONTRADO.");
                break;
            }
                
            if(matriz[Cliente[l][1]] == 'C'){
                printf("\nN�O FOI POSS�VEL REALIZAR O CANCELAMENTO!\n");
            }
            else{
                matriz[Cliente[l][1]] = 'D';
                Cliente[l][0] = 0;
                printf("O CANCELAMENTO FOI EFETIVADO!\n\n");
            }
        break;
        
    	// Sequ�ncia de instru��es para confirmar uma reserva.
        case 4:
            printf("|EFETIVAR A CONFIRMA��O DE VENDA DE UMA RESERVA|\n\n");
        
            printf ("INFORME O N�MERO IDENTIFICADOR PARA EFETIVAR A CONFIRMA��O DE VENDA DE UMA RESERVA: ");
            scanf("%d", &e);
            
            for(l = 0; l < quantdeAssentos; l++){
                if(Cliente[l][0] == e)
                    break;
            }
            
            if(matriz[Cliente[l][1]] == 'D'){
            printf("\nN�O FOI POSS�VEL REALIZAR A CONFIRMA��O!\n");
            }
            else{
            matriz[Cliente[l][1]] = 'C';
            printf("A CONFIRMA��O DE VENDA DE UMA RESERVA FOI EFETIVADA!\n\n");
            }
        break;
    
        // Sequ�ncia de instru��es para mostrar a quantidade de assentos reservados, dispon�veis, confirmados e o valor total de vendas.   
        case 5:
            printf("|MOSTRAR A QUANTIDADE DE ASSENTOS RESERVADOS, CONFIRMADOS, DISPON�VEIS E O VALOR TOTAL DE VENDAS DE %s|\n\n", nomeDestino);
            
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
            printf("ASSENTOS DISPON�VEIS: %d \nASSENTOS RESERVADOS: %d \nASSENTOS CONFIRMADOS: %d \n\nVALOR TOTAL DE VENDAS: R$%2.f", disponivel, ocupadas, confirmada, valorTotal);
        break;
    
    	// Sequ�ncia de instru��es para fechar o programa.
        case 6:	
			printf("|BYE BYE|\n");
            
        return 0;
        }
        
    fflush(stdin);
    getchar();
    
	}
	while(1);
}
