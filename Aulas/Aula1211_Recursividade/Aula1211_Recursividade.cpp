// Aula1211_Recursividade.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

//int funcaoRecursiva(int parametro)
//{
//	if (condicaoParada)
//		return valorFinal;
//
//	return funcaoRecursiva(parametroAlterado);
//}
int LerNumerInteiro()
{
	int a;
	printf("Digite um numero: ");
	scanf_s("%i", &a);
	return a;
}

int Soma(int n)
{
	if (n == 0)
		return 0;
	else
		return n + Soma(n - 1);
}

int fatorial(int n)
{
	if (n == 0)
		return 1;

	return n * fatorial(n - 1);
}

int main()
{
	int numero = LerNumerInteiro();
	int resultSoma = Soma(numero);
	printf("Resultado (soma): %i\n", resultSoma);

	int resultFatorial = fatorial(numero);
	printf("Resultado (fatorial): %i\n\n", resultFatorial);
	system("pause");

    return 0;
}

