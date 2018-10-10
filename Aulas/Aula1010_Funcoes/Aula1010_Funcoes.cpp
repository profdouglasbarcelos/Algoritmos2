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

int main()
{
	HelloWorld();
	int d = Soma2Valores(99, 1);
	printf("\tResultado: %i\n", d);

	system("pause");
    return 0;
}

