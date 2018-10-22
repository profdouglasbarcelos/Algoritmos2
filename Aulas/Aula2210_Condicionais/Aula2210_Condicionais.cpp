// Aula2210_Condicionais.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int MaiorValorInteiro(int a, int b, int c, int d)
{
	int maior = a;
	
	if (maior < b)
	{
		maior = b;
	}

	if (maior < c)
	{
		maior = c;
	}

	if (maior < d)
	{
		maior = d;
	}

	return maior;
}

int LerValorInteiro()
{
	int valor = 0;
	printf("Digite um numero inteiro: ");
	scanf_s("%i", &valor);
	return valor;
}


int main()
{
	int primeiro = LerValorInteiro();
	int segundo = LerValorInteiro();
	int terceiro = LerValorInteiro();
	int quarto = LerValorInteiro();

	int m = MaiorValorInteiro(primeiro, segundo, terceiro, quarto);

	printf("O maior valor encontrado foi: %i\n\n", m);

	system("pause");

    return 0;
}

