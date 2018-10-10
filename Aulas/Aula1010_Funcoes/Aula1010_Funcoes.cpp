// Aula1010_Funcoes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

void HelloWorld()
{
	printf("Hello world!\n");
}

int Soma2Valores(int a, int b)
{
	/*int c;
	c = a + b;
	return c;*/
	
	return a + b;
}

int LerValorInteiro()
{
	int variavel;
	printf("\nFavor digitar um numero inteiro: ");
	scanf_s("%i", &variavel);
	return variavel;
}

int main()
{
	HelloWorld();

	int primeiroValor = LerValorInteiro();
	int segundoValor = LerValorInteiro();

	int d = Soma2Valores(primeiroValor, segundoValor);
	printf("\tResultado: %i\n", d);

	system("pause");
    return 0;
}

