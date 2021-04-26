// Nome: Bianca Letícia Moura Silva
// Matrícula: UC21103715
// Curso: Ciência da Computação

#include <stdio.h> // Biblioteca para anexar a função "main()" - "printf()" e "scanf()".
#include <string.h> // Biblioteca de strings.
#include <conio.h> // Biblioteca para executar a limpeza da janela do usuário (função "clrscr()").
#include <ctype.h> // Biblioteca para classificar caracteres.

int main() // Início do algoritmo: função "main()".
{ 	
	printf ("CINEMA DE BRASILIA\n\n"); // "char" (caracteres).
	
	int qtdeSessoes, qtdePessoas, qntdePessoasM=0, qntdePessoasF=0, opcaoMenu=0, i, idade, crianca=0, adolescente=0, adulto=0, idoso=0, qtdePessoasSexoMMaoiresIdade=0,qtdePessoasSexoFMaoiresIdade=0; // "int" (variáveis). 
	char nomeFilme[20]; // "char" (caracteres).
	char sexo; // "char" (caracteres).

	do{
		printf ("|1| CADASTRO DAS SESSOES \n"); // Impressão do texto para o usuário.
		printf ("|2| FECHAR O PROGRAMA \n\n"); // Impressão do texto para o usuário.
		scanf ("%d", &opcaoMenu); // Recepção de dados de entrada (variável: opcaoMenu).
		
	system ("cls"); // Limpeza da janela do usuário.
		
		switch (opcaoMenu) // Estrutura para decidir entre várias sequências de comandos quais serão executadas.
		{ 		
		case 1: // Constante 1; sequência de instruções 1.
			printf ("Informe a quantidade de sessoes que serao realizadas: \n"); // Impressão do texto para o usuário.
			
			do  {
				scanf("%d",&qtdeSessoes); // Recepção de dados de entrada (variável: qtdeSessoes).
				
			if(qtdeSessoes<2 || qtdeSessoes>2) // Estrutura de decisão (variável: qtdeSessoes).
				{
				printf("Quantidade invalida! Digite novamente: \n"); // Impressão do texto para o usuário.
				}
				}
			
			while(qtdeSessoes!=2); // Estrutura de repetição (variável: qtdeSessoes).
			printf("Informe o nome do filme: \n"); // Impressão do texto para o usuário.
			
			do  { // Estrutura de repetição.
				fflush(stdin); // Descarregar os buffers de saída de um fluxo de dados.
				fgets(nomeFilme, sizeof(nomeFilme), stdin); // Ler uma string em um arquivo.
			
			if(strlen(nomeFilme)<4) // Estrutura de decisão (variável: nomeFilme).
				{
				printf("Nome do filme invalido \n"); // Impressão do texto para o usuário.
				}
				}
			
			while(strlen(nomeFilme)<4); while (qtdeSessoes<2); // Estrutura de repetição (variável: qtdeSessoes).
			printf("Digite a quantidade de pessoas que irao assistir o filme: \n"); // Impressão do texto para o usuário.
			
			do	{ // Estrutura de repetição.
				fflush(stdin); // Descarregar os buffers de saída de um fluxo de dados.
				scanf("%d",&qtdePessoas); // Recepção de dados de entrada (variável: qtdePessoas).
				
			if(qtdePessoas<10) // Estrutura de decisão (variável: qtdePessoas).
				{
				printf("Quantidade invalida! Digite novamente: \n"); // Impressão do texto para o usuário.
				}
				}
			
			while(qtdePessoas<10); // Estrutura de repetição (variável: qtdePessoas).
			
			for(i=0; i<qtdePessoas; i++) // Estrutura de repetição (variável: qtdePessoas). 
			{
			
			do	{ // Estrutura de repetição.
				fflush(stdin); // Descarregar os buffers de saída de um fluxo de dados.
				printf("Informe o sexo da pessoa (M ou F): %d\n", i+1); // Impressão do texto para o usuário.
				scanf("%c", &sexo); // Recepção de dados de entrada (variável: sexo).
				sexo = toupper(sexo);
				printf("%c\n",sexo); // Impressão do texto para o usuário.
			
			if(sexo!='M' && sexo!='F') // Estrutura de decisão (variável: sexo).
				{
				printf("Sexo invalido! Digite novamente: "); // Impressão do texto para o usuário.
				}
				}
			
			while(sexo!='M' && sexo!='F'); // Estrutura de repetição (variável: sexo).
			
			do	{
				fflush(stdin); // Descarregar os buffers de saída de um fluxo de dados.
				printf("Informe a idade da pessoa: \n"); // Impressão do texto para o usuário.
				scanf("%d", &idade); // Recepção de dados de entrada (variável: idade). 
			
			{if(idade>=3 && idade<=13) // Estrutura de decisão (variável: idade).
			crianca++;	
			
			else if(idade>=14 && idade<=17) // Estrutura de decisão (variável: idade).
			adolescente++;
		
			else if(idade>=18 && idade<=64) // Estrutura de decisão (variável: idade).
			adulto++;
		
			else if (idade>=65 && idade<=100) // Estrutura de decisão (variável: idade).
			idoso++;
		
			else if (idade<=3 || idade>=100) // Estrutura de decisão (variável: idade).
				printf("Idade invalida! Digite novamente: \n\n"); // Impressão do texto para o usuário.
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
			
			printf("NOME DO FILME: %s \n\n\n", nomeFilme); // Impressão do texto para o usuário.
			printf("QUANTIDADE DE PESSOAS DO SEXO MASCULINO: %d. \n", qntdePessoasM); // Impressão do texto para o usuário.
			printf("QUANTIDADE DE PESSOAS DO SEXO FEMININO: %d. \n", qntdePessoasF); // Impressão do texto para o usuário.
			printf("QUANTIDADE DE PESSOAS POR CLASSIFICACAO DE IDADE: CRIANCA - %d | ADOLESCENTE - %d | ADULTO - %d | IDOSO - %d \n\n", crianca, adolescente, adulto, idoso); // Impressão do texto para o usuário.
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
