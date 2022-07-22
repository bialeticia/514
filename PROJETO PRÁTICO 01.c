#include <stdio.h> // Biblioteca para anexar a função "main()" - "printf()" e "scanf()".
#include <string.h> // Biblioteca de strings.
#include <conio.h> // Biblioteca para executar a limpeza da janela do usuário (função "clrscr()").
#include <ctype.h> // Biblioteca para classificar caracteres.
#include <locale.h> // Biblioteca para língua portuguesa.

int main(){ // Início do algoritmo: função "main()".
	setlocale(LC_ALL, "Portuguese");
	
	printf ("- CINEMA DE BRASÍLIA -\n\n"); // Impressão do texto para o usuário.
	
	int qtdeSessoes, qtdePessoas, qntdePessoasM=0, qntdePessoasF=0, opcaoMenu=0, i, idade, crianca=0, adolescente=0, adulto=0, idoso=0, qtdePessoasSexoMMaoiresIdade=0,qtdePessoasSexoFMaoiresIdade=0; // "int" (variáveis). 
	char nomeFilme[20]; // "char" (caracteres).
	char sexo; // "char" (caracteres).

	do{
		printf ("|1| CADASTRO DAS SESSÕES \n"); // Impressão do texto para o usuário.
		printf ("|2| FECHAR O PROGRAMA \n\n"); // Impressão do texto para o usuário.
		scanf ("%d", &opcaoMenu); // Recepção de dados de entrada (variável: opcaoMenu).
		
	system ("cls"); // Limpeza da janela do usuário.
		
		switch (opcaoMenu) // Estrutura para decidir entre várias sequências de comandos quais serão executadas.
		{ 		
		case 1: // Constante 1; sequência de instruções 1.
				printf ("Informe a quantidade de sessões que serão realizadas: "); // Impressão do texto para o usuário.
			
			do{
				scanf("%d",&qtdeSessoes); // Recepção de dados de entrada (variável: qtdeSessoes).
				
			if(qtdeSessoes<2 || qtdeSessoes>2) // Estrutura de decisão (variável: qtdeSessoes).
			{
				printf("\nQuantidade inválida! Digite novamente: "); // Impressão do texto para o usuário.
			}
			}
			
			while(qtdeSessoes!=2); // Estrutura de repetição (variável: qtdeSessoes).
				printf("\nInforme o nome do filme: "); // Impressão do texto para o usuário.
			
			do{ // Estrutura de repetição.
				fflush(stdin); // Descarregar os buffers de saída de um fluxo de dados.
				fgets(nomeFilme, sizeof(nomeFilme), stdin); // Ler uma string em um arquivo.
			
			if(strlen(nomeFilme)<4) // Estrutura de decisão (variável: nomeFilme).
			{
				printf("\nNome do filme inválido! Digite novamente: "); // Impressão do texto para o usuário.
			}
			}
			
			while(strlen(nomeFilme)<4, qtdeSessoes<2); // Estrutura de repetição (variável: qtdeSessoes).
				printf("\nDigite a quantidade de pessoas que irão assistir o filme: "); // Impressão do texto para o usuário.
			
			do{ // Estrutura de repetição.
				fflush(stdin); // Descarregar os buffers de saída de um fluxo de dados.
				scanf("%d",&qtdePessoas); // Recepção de dados de entrada (variável: qtdePessoas).
				
			if(qtdePessoas<10) // Estrutura de decisão (variável: qtdePessoas).
			{
				printf("\nQuantidade inválida! Digite novamente: "); // Impressão do texto para o usuário.
			}
			}
			
			while(qtdePessoas<10); // Estrutura de repetição (variável: qtdePessoas).
			
			for(i=0; i<qtdePessoas; i++) // Estrutura de repetição (variável: qtdePessoas). 
			{
			
			do{ // Estrutura de repetição.
				fflush(stdin); // Descarregar os buffers de saída de um fluxo de dados.
				printf("\nInforme o sexo da pessoa %d (M ou F): ", i+1); // Impressão do texto para o usuário.
				scanf("%c", &sexo); // Recepção de dados de entrada (variável: sexo).
				sexo = toupper(sexo);
				printf("%c\n",sexo); // Impressão do texto para o usuário.
			
			if(sexo!='M' && sexo!='F') // Estrutura de decisão (variável: sexo).
			{
				printf("\nSexo inválido! Digite novamente: "); // Impressão do texto para o usuário.
			}
			}
			
			while(sexo!='M' && sexo!='F'); // Estrutura de repetição (variável: sexo).
			
			do{
				fflush(stdin); // Descarregar os buffers de saída de um fluxo de dados.
				printf("\nInforme a idade da pessoa: "); // Impressão do texto para o usuário.
				scanf("%d", &idade); // Recepção de dados de entrada (variável: idade). 
			
			{if(idade>=3 && idade<=13) // Estrutura de decisão (variável: idade).
			crianca++; // Armazenar o valor.
			
			else if(idade>=14 && idade<=17) // Estrutura de decisão (variável: idade).
			adolescente++; // Armazenar o valor.
		
			else if(idade>=18 && idade<=64) // Estrutura de decisão (variável: idade).
			adulto++; // Armazenar o valor.
		
			else if (idade>=65 && idade<=100) // Estrutura de decisão (variável: idade).
			idoso++; // Armazenar o valor.
		
			else if (idade<=3 || idade>=100) // Estrutura de decisão (variável: idade).
				printf("\nIdade inválida! Digite novamente: \n\n"); // Impressão do texto para o usuário.
			}
			}
				
			while(idade<3 || idade>100);  // Estrutura de repetição (variável: idade).
				
			if(sexo=='M') // Estrutura de decisão (variável: sexo).
			{
			
			if(idade>17) // Estrutura de decisão (variável: idade).
				qtdePessoasSexoMMaoiresIdade++; // Armazenar o valor.
				qntdePessoasM++; // Armazenar o valor.
			
			}else // Senão (sequência de comandos 2).

			{
			if(idade>17) // Estrutura de decisão (variável: idade).
				qtdePessoasSexoFMaoiresIdade++; // Armazenar o valor.
				qntdePessoasF++; // Armazenar o valor.
			}
				
			}
		
		system("cls"); // Limpeza da janela do usuário.
			
			printf("NOME DO FILME: %s \n\n", nomeFilme); // Impressão do texto para o usuário.
			printf("QUANTIDADE DE PESSOAS DO SEXO MASCULINO: %d. \n", qntdePessoasM); // Impressão do texto para o usuário.
			printf("QUANTIDADE DE PESSOAS DO SEXO FEMININO: %d. \n", qntdePessoasF); // Impressão do texto para o usuário.
			printf("QUANTIDADE DE PESSOAS POR CLASSIFICAÇÃO DE IDADE: CRIANÇA - %d | ADOLESCENTE - %d | ADULTO - %d | IDOSO - %d \n\n", crianca, adolescente, adulto, idoso); // Impressão do texto para o usuário.
			printf("QUANTIDADE DE PESSOAS DO SEXO MASCULINO MAIORES DE IDADE: %d. \n", qtdePessoasSexoMMaoiresIdade); // Impressão do texto para o usuário.
			printf("QUANTIDADE DE PESSOAS DO SEXO FEMININO MAIORES DE IDADE: %d. \n\n", qtdePessoasSexoFMaoiresIdade); // Impressão do texto para o usuário.
			printf("APERTE ALGUMA TECLA PARA CONTINUAR: \n"); // Impressão do texto para o usuário.
			
			break; // Interromper a execução da sequência de comandos.
		
		case 2: // Constante 3; sequência de instruções 3.
			
			printf ("bye bye."); // Impressão do texto para o usuário.
			return 0; // Retorno da função.
		}
		
		fflush(stdin); // Descarregar os buffers de saída de um fluxo de dados.
		getchar(); // Retornar um valor (caractere lido).
	}
	while(1); // Estrutura de repetição (variável: sexo).
	
}
