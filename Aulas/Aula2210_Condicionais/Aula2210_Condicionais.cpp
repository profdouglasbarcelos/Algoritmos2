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

float LerValorReal()
{
	float valor = 0;
	printf("Digite um numero real (utilizando ponto): ");
	scanf_s("%f", &valor);
	return valor;
}

float MediaEntreValores(float a, float b, float c, float d)
{
	float soma = a + b + c + d;
	float media = soma / 4;
	return media;

	//return (a + b + c + d) / 4;
}

void ImprimeValoresMaioresQueMedia(float a, float b, float c, float d)
{
	float media = MediaEntreValores(a, b, c, d);

	printf("O valor da media eh: %.3f\n", media);

	bool encontreiValorMaior = false;

	if (a > media)
	{
		if (!encontreiValorMaior)
		{
			printf("Os valores maiores que a media sao: ");
			encontreiValorMaior = true;
		}

		printf("%.3f ", a);
	}
	if (b > media)
	{
		if (!encontreiValorMaior)
		{
			printf("Os valores maiores que a media sao: ");
			encontreiValorMaior = true;
		}
		printf("%.3f ", b);
	}
	if (c > media)
	{
		if (!encontreiValorMaior)
		{
			printf("Os valores maiores que a media sao: ");
			encontreiValorMaior = true;
		}
		printf("%.3f ", c);
	}
	if (d > media)
	{
		if (!encontreiValorMaior)
		{
			printf("Os valores maiores que a media sao: ");
			encontreiValorMaior = true;
		}
		printf("%.3f ", d);
	}
}


int main()
{
	/*int primeiro = LerValorInteiro();
	int segundo = LerValorInteiro();
	int terceiro = LerValorInteiro();
	int quarto = LerValorInteiro();

	int m = MaiorValorInteiro(primeiro, segundo, terceiro, quarto);

	printf("O maior valor encontrado foi: %i\n\n", m);*/


	float primeiroReal = LerValorReal();
	float segundoReal = LerValorReal();
	float terceiroReal = LerValorReal();
	float quartoReal = LerValorReal();

	ImprimeValoresMaioresQueMedia(primeiroReal, segundoReal, terceiroReal, quartoReal);

	printf("\n\n");
	system("pause");

    return 0;
}

