// Aula1710_Condicionais.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{

	if (true)
	{
		printf("Sempre vai imprimir essa frase\n");
		// sempre ira imprimir pois o resultado da expressao no if eh true
	}

	if (false)
	{
		printf("Essa frase nunca sera impressa\n");
		// resultado da expressao eh false, nunca ira utilizar este bloco
	}

	int a = 5;

	if (a == 3)
	{
		printf("A eh igual a 3");
	}

	if (a != 3)
	{
		printf("A eh diferente de 3\n");
	}

	if (a <= 5) // (-10000, 0, 1, 2, 3, 4, 5)
	{
		printf("A eh menor ou igual a 5\n");
	}

	if (a < 5) // (-10000, 0, 1, 2, 3, 4)
	{

	}

	if (a == 5 && a != 3)
	{

	}

	if ((a != 5) && ((a % 5 == 0) && (a % 7 == 0)))
	{
		// 
	}

    return 0;
}

