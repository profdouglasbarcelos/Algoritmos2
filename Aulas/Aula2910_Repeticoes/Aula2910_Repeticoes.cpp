// Aula2910_Repeticoes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int LerValorInteiro()
{
	int valor = 0;
	printf("Digite um numero inteiro: ");
	scanf_s("%i", &valor);
	return valor;
}

void ImprimirSequenciaEntreInteiros()
{
	int n1 = LerValorInteiro();
	int n2 = LerValorInteiro();

	if (n1 <= n2)
	{
		int valorFinal = n2 - 1;
		while (n1 < valorFinal)
		{
			n1++;
			printf("%i\t", n1);
		}
	}
	else
	{
		int valorFinal = n2 + 1;
		while (n1 > valorFinal)
		{
			n1--;
			printf("%i\t", n1);
		}
	}
}

void InformarSeValoresEstaoEmOrdemCrescente()
{
	int n1, n2, n3, n4, n5, numero;
	int i = 0; // iterator, index (vetores)

	while (i < 5)
	{
		numero = LerValorInteiro();

		if (i == 0)
		{
			n1 = numero;
		}
		else if (i == 1)
		{
			n2 = numero;
		}
		else if (i == 2)
		{
			n3 = numero;
		}
		else if (i == 3)
		{
			n4 = numero;
		}
		else if (i == 4)
		{
			n5 = numero;
		}

		i++;
	}

	if ((n1 < n2) && (n2 < n3) && (n3 < n4) && (n4 < n5))
	{
		printf("Os valores estavam em ordem crescente");
	}
	else
	{
		printf("Os valores nao estavam em ordem crescente");
	}
}

void InformarSeValoresEstaoEmOrdemCrescente2()
{
	int numero = 0, anterior = 0;
	int crescente = 1, i = 0;

	while (i < 5)
	{
		numero = LerValorInteiro();

		if (i != 0)
		{
			if (anterior > numero)
			{
				crescente = 0;
			}
		}

		anterior = numero;
		i++;
	}

	if (crescente == 1)
	{
		printf("Os valores estavam em ordem crescente");
	}
	else
	{
		printf("Os valores nao estavam em ordem crescente");
	}
}


int main()
{
	//int a, b;
	//scanf_s("%i %i", &a, &b);
	//printf("A: %i, B: %i\n\n", a, b);

	//ImprimirSequenciaEntreInteiros();
	//InformarSeValoresEstaoEmOrdemCrescente();
	InformarSeValoresEstaoEmOrdemCrescente2();



	printf("\n\n");
	system("pause");
	return 0;
}