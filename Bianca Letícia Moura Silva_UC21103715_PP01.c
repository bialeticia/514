// Nome: Bianca Let�cia Moura Silva
// Matr�cula: UC21103715
// Curso: Ci�ncia da Computa��o

#include <stdio.h> // Biblioteca para anexar a fun��o "main()" - "printf()" e "scanf()".
#include <string.h> // Biblioteca de strings.
#include <conio.h> // Biblioteca para executar a limpeza da janela do usu�rio (fun��o "clrscr()").
#include <ctype.h> // Biblioteca para classificar caracteres.

int main() // In�cio do algoritmo: fun��o "main()".
{ 	
	printf ("CINEMA DE BRASILIA\n\n"); // "char" (caracteres).
	
	int qtdeSessoes, qtdePessoas, qntdePessoasM=0, qntdePessoasF=0, opcaoMenu=0, i, idade, crianca=0, adolescente=0, adulto=0, idoso=0, qtdePessoasSexoMMaoiresIdade=0,qtdePessoasSexoFMaoiresIdade=0; // "int" (vari�veis). 
	char nomeFilme[20]; // "char" (caracteres).
	char sexo; // "char" (caracteres).

	do{
		printf ("|1| CADASTRO DAS SESSOES \n"); // Impress�o do texto para o usu�rio.
		printf ("|2| FECHAR O PROGRAMA \n\n"); // Impress�o do texto para o usu�rio.
		scanf ("%d", &opcaoMenu); // Recep��o de dados de entrada (vari�vel: opcaoMenu).
		
	system ("cls"); // Limpeza da janela do usu�rio.
		
		switch (opcaoMenu) // Estrutura para decidir entre v�rias sequ�ncias de comandos quais ser�o executadas.
		{ 		
		case 1: // Constante 1; sequ�ncia de instru��es 1.
			printf ("Informe a quantidade de sessoes que serao realizadas: \n"); // Impress�o do texto para o usu�rio.
			
			do  {
				scanf("%d",&qtdeSessoes); // Recep��o de dados de entrada (vari�vel: qtdeSessoes).
				
			if(qtdeSessoes<2 || qtdeSessoes>2) // Estrutura de decis�o (vari�vel: qtdeSessoes).
				{
				printf("Quantidade invalida! Digite novamente: \n"); // Impress�o do texto para o usu�rio.
				}
				}
			
			while(qtdeSessoes!=2); // Estrutura de repeti��o (vari�vel: qtdeSessoes).
			printf("Informe o nome do filme: \n"); // Impress�o do texto para o usu�rio.
			
			do  { // Estrutura de repeti��o.
				fflush(stdin); // Descarregar os buffers de sa�da de um fluxo de dados.
				fgets(nomeFilme, sizeof(nomeFilme), stdin); // Ler uma string em um arquivo.
			
			if(strlen(nomeFilme)<4) // Estrutura de decis�o (vari�vel: nomeFilme).
				{
				printf("Nome do filme invalido \n"); // Impress�o do texto para o usu�rio.
				}
				}
			
			while(strlen(nomeFilme)<4); while (qtdeSessoes<2); // Estrutura de repeti��o (vari�vel: qtdeSessoes).
			printf("Digite a quantidade de pessoas que irao assistir o filme: \n"); // Impress�o do texto para o usu�rio.
			
			do	{ // Estrutura de repeti��o.
				fflush(stdin); // Descarregar os buffers de sa�da de um fluxo de dados.
				scanf("%d",&qtdePessoas); // Recep��o de dados de entrada (vari�vel: qtdePessoas).
				
			if(qtdePessoas<10) // Estrutura de decis�o (vari�vel: qtdePessoas).
				{
				printf("Quantidade invalida! Digite novamente: \n"); // Impress�o do texto para o usu�rio.
				}
				}
			
			while(qtdePessoas<10); // Estrutura de repeti��o (vari�vel: qtdePessoas).
			
			for(i=0; i<qtdePessoas; i++) // Estrutura de repeti��o (vari�vel: qtdePessoas). 
			{
			
			do	{ // Estrutura de repeti��o.
				fflush(stdin); // Descarregar os buffers de sa�da de um fluxo de dados.
				printf("Informe o sexo da pessoa (M ou F): %d\n", i+1); // Impress�o do texto para o usu�rio.
				scanf("%c", &sexo); // Recep��o de dados de entrada (vari�vel: sexo).
				sexo = toupper(sexo);
				printf("%c\n",sexo); // Impress�o do texto para o usu�rio.
			
			if(sexo!='M' && sexo!='F') // Estrutura de decis�o (vari�vel: sexo).
				{
				printf("Sexo invalido! Digite novamente: "); // Impress�o do texto para o usu�rio.
				}
				}
			
			while(sexo!='M' && sexo!='F'); // Estrutura de repeti��o (vari�vel: sexo).
			
			do	{
				fflush(stdin); // Descarregar os buffers de sa�da de um fluxo de dados.
				printf("Informe a idade da pessoa: \n"); // Impress�o do texto para o usu�rio.
				scanf("%d", &idade); // Recep��o de dados de entrada (vari�vel: idade). 
			
			{if(idade>=3 && idade<=13) // Estrutura de decis�o (vari�vel: idade).
			crianca++;	
			
			else if(idade>=14 && idade<=17) // Estrutura de decis�o (vari�vel: idade).
			adolescente++;
		
			else if(idade>=18 && idade<=64) // Estrutura de decis�o (vari�vel: idade).
			adulto++;
		
			else if (idade>=65 && idade<=100) // Estrutura de decis�o (vari�vel: idade).
			idoso++;
		
			else if (idade<=3 || idade>=100) // Estrutura de decis�o (vari�vel: idade).
				printf("Idade invalida! Digite novamente: \n\n"); // Impress�o do texto para o usu�rio.
			}
				}
				
			while(idade<3 || idade>100);  // Estrutura de repeti��o (vari�vel: idade).
				
			if(sexo=='M') // Estrutura de decis�o (vari�vel: sexo).
			{
			
			if(idade>17) // Estrutura de decis�o (vari�vel: idade).
				qtdePessoasSexoMMaoiresIdade++; // Armazenar o valor.
				qntdePessoasM++; // Armazenar o valor.
			
			}else // Sen�o (sequ�ncia de comandos 2).

				{
			if(idade>17) // Estrutura de decis�o (vari�vel: idade).
				qtdePessoasSexoFMaoiresIdade++; // Armazenar o valor.
				qntdePessoasF++; // Armazenar o valor.
				}
				
			}
		
		system("cls"); // Limpeza da janela do usu�rio.
			
			printf("NOME DO FILME: %s \n\n\n", nomeFilme); // Impress�o do texto para o usu�rio.
			printf("QUANTIDADE DE PESSOAS DO SEXO MASCULINO: %d. \n", qntdePessoasM); // Impress�o do texto para o usu�rio.
			printf("QUANTIDADE DE PESSOAS DO SEXO FEMININO: %d. \n", qntdePessoasF); // Impress�o do texto para o usu�rio.
			printf("QUANTIDADE DE PESSOAS POR CLASSIFICACAO DE IDADE: CRIANCA - %d | ADOLESCENTE - %d | ADULTO - %d | IDOSO - %d \n\n", crianca, adolescente, adulto, idoso); // Impress�o do texto para o usu�rio.
			printf("QUANTIDADE DE PESSOAS DO SEXO MASCULINO MAIORES DE IDADE: %d. \n", qtdePessoasSexoMMaoiresIdade); // Impress�o do texto para o usu�rio.
			printf("QUANTIDADE DE PESSOAS DO SEXO FEMININO MAIORES DE IDADE: %d. \n\n", qtdePessoasSexoFMaoiresIdade); // Impress�o do texto para o usu�rio.
			printf("APERTE ALGUMA TECLA PARA CONTINUAR: \n"); // Impress�o do texto para o usu�rio.
			
			break; // Interromper a execu��o da sequ�ncia de comandos.
		
		case 2: // Constante 3; sequ�ncia de instru��es 3.
			
			printf ("bye bye."); // Impress�o do texto para o usu�rio.
			return 0; // Retorno da fun��o.
		}
		
		fflush(stdin); // Descarregar os buffers de sa�da de um fluxo de dados.
		getchar(); // Retornar um valor (caractere lido).
	}
	while(1); // Estrutura de repeti��o (vari�vel: sexo).
	
}
