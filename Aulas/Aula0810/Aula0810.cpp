// Aula0810.cpp : Defines the entry point for the console application.
//


/*
Comentario longo, bloco
(mais de uma linha)
*/


#include "stdafx.h" // inclusao de biblioteca
// C ANSI
#include <stdio.h>
#include <stdlib.h>

// Variaveis (Globais, visiveis em todo o codigo)
int a; // inteiro
float b; // real (ponto flutuante)
double c; // real (maior precisao)
bool d; // booleano (verdadeiro/falso) (true/false)


int main()
{
	// variavel local 
	// (visivel somente nesta funcao, a partir dessa linha)
	int  e;

	// \n pula linha
	// \t tabulacao (TAB)
	printf("Hello world!\n\n\n");

	printf("A\t\tB\t\tC\n");
	printf("A\t\tB\t\tC\n");
	printf("A\t\tB\t\tC\n");

	printf("\n");

	// como imprimir valores
	printf("%i\n", 99);
	printf("%f\n", 100.01);

	// texto (string) e valores juntos
	printf("Aqui vai o valor %i, total da soma.\n", 98 + 5);

	printf("%i + %i = %i\n", 500, 600, 500 + 600);

	printf(" Por algum acaso esqueci o valor daqui: %i\n");

	a = 150;
	e = 275;
	
	int f = a + e;

	printf("O resultado da soma eh: %i\n", f);

	system("pause");



    return 0;
}

