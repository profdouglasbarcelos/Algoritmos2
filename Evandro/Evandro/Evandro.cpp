// Evandro.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define MAX 20

void repeticao();
float soma(float, float);
void exercicio19();
void exercicio16();
int poschar(char v[MAX], char);

struct registro
{
	char nome[50];
	int idade;
};


int main()
{
	struct registro vet[10];

//	exercicio16();

	strcpy_s(vet[5].nome, "Evandro");
	vet[5].idade = 42;

//	_getch();
	system("pause");
	return 0;
}

void exercicio19()
{
	int mat[2][3], i, j, l, c, f, resl[3], resc[2];
	printf("Informe todos os valores para a matriz:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Linha: %i, Coluna: %i ", i, j);
			scanf_s("%i", &mat[i][j]);
		}
	}
	printf("Qual linha você quer multiplicar?");
	scanf_s("%i", &l);
	printf("Qual vai ser o fator multiplicador?");
	scanf_s("%i", &f);
	for (i = 0; i < 3; i++)
		resl[i] = mat[l][i] * f;
	printf("Os valores resultantes foram:");
	for (i = 0; i < 3; i++)
		printf("%i ", resl[i]);
	printf("\n");
	printf("Qual coluna você quer multiplicar?");
	scanf_s("%i", &c);
	printf("Qual vai ser o fator multiplicador?");
	scanf_s("%i", &f);
	for (i = 0; i < 2; i++)
		resc[i] = mat[i][c] * f;
	printf("Os valores resultantes foram:");
	for (i = 0; i < 2; i++)
		printf("%i ", resc[i]);
	printf("\n");
}

void repeticao()
{
	int i;
	for (i = 0; i < 10; i++)
		printf("oi");
}

float soma(float a, float b)
{
	return a + b;
}

void baboseira()
{
	/*
	i = 2;
	i = i + 1;
	i++;
	++i;
	i += 1;
	i += 2;
	i = i + 2;
	*/
}

void exercicio16()
{
	char v[MAX], c;
	int p;
	printf("Informe a frase: ");
	gets_s(v);
	printf("Informe o caractere a ser localizado:");
	scanf_s("%c", &c);
	p = poschar(v, c);
	if (p == -1)
		printf("Não encontrado!");
	else
		printf("Encontrado na posição: %i", p);
}

int poschar(char v[MAX], char c)
{
	int i;
	for (i = 0; i < MAX && v[i] != '\0' && v[i] != c; i++);
	if (i == MAX || v[i] == '\0')
		return -1;
	else
		return i;
}