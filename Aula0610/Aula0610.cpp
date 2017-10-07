// Aula0610.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, ".1252");

	int var1 = 0;
	int var2 = 0;
	int resto = 0;
	int soma = 0;
	int subt = 0;
	float div = 0;
	float media = 0;

	printf("Digite um valor: ");
	scanf_s("%i", &var1);

	printf("Digite o segundo valor:");
	scanf_s("%i", &var2);

	// % calcula o resto da divisao
	resto = var1 % var2;

	printf("O resto da divisão é: %i\n", resto);

	system("pause");


    return 0;
}

