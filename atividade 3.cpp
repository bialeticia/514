//Entrada: a, b, c.
//Sa�da: x' e x''
//Processamento: c�lculo.

#include<stdio.h>//biblioteca para entrada e sa�da de dados: printf e scanf
#include<math.h>//biblioteca matem�tica

int main (){//in�cio do algoritmo: fun��o main
	double a, b, c, delta, x1, x2;//int %d ou %i -> float %f -> double %lf (vari�veis)
	
	printf ("digite o valor de a:"); //impress�o do texto para o usu�rio.
	scanf("%lf", &a); //c�digo formata��o - codigo de endere�o - vari�vel (a).
	
	printf ("digite o valor de b:"); //impress�o do texto para o usu�rio.
	scanf("%lf", &b); //c�digo formata��o - codigo de endere�o - vari�vel (b).
	
	printf ("digite o valor de c:"); //impress�o do texto para o usu�rio.
	scanf("%lf", &c); //c�digo formata��o - codigo de endere�o - vari�vel (c).
	
	delta = (pow(b, 2)) - 4 * a * c; // linearizar delta (pot�ncia - pow).

if(a == 0) //== (igual) != (diferente) < (menor) > (maior) <=(menor igual) >= (maior igual).
	{
	printf("imposs�vel calcular\n"); //impress�o do texto para o usu�rio.

}else if(delta == 0){ //quando delta for igual a zero, ou seja, um valor de X.
	x1 = (-(b) + sqrt(delta)) / 2 * a; // linearizar bhaskara (sqrt - raiz quadrada).
	printf("Os valores sao: \nX1: %.2lf \nX2: %.2lf", x1, x1); // impress�o do texto para o usu�rio (X1 e X2).

}else//sen�o
	{
	x1 = (-(b) + sqrt(b * b - 4 * a * c)) / (2 * a); //linearizar bhaskara (x1), (sqrt - raiz quadrada)
	x1 = (-(b) - sqrt(b * b - 4 * a * c)) / (2 * a); //linearizar bhaskara (x2), (sqrt - raiz quadrada)
	}
	printf("x1 = %.2lf \tx2 = %.4lf\n", x1, x2);
	
//return 0;//retorno da fun��o
}//final do algoritmo

