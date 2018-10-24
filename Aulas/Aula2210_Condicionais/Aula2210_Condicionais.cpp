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

void InformarParOuImpar(int a)
{
	if((a%2==0)) // a%2 resto da divisao por 2
	{ 
		printf("Par\n");
	}
	else
	{
		printf("Impar\n");
	}
}

void ExemploSwitch()
{
	printf("Escolha uma opcao:\n");
	printf("1 - a\n2 - b\n3 - c\n4 - d\n");
	
	int op = 0;
	scanf_s("%i", &op);

	switch (op)
	{
	case 1:
		printf("voce escolheu a\n");
		break;
	case 2:
		printf("voce escolheu b\n");
		break;
	case 3:
		printf("voce escolheu c\n");
		break;
	case 4:
		printf("voce escolheu d\n");
		break;
	default:
		printf("Opcao invalida\n");
		break;
	}
}

void ImprimindoRestoComSwitch()
{
	int valorDigitado = 0;

	printf("Digite um valor inteiro: ");
	scanf_s("%i", &valorDigitado);

	int resto = valorDigitado % 5;

	switch (resto)
	{
	case 0:
	{
		printf("O valor %i eh divisivel por 5", valorDigitado);
	}
	break;
	case 1:
	{
		printf("O resto da divisao de %i por 5 eh %i", valorDigitado, resto);
	}
	break;
	case 2:
	{
		printf("O resto da divisao de %i por 5 eh %i", valorDigitado, resto);
	}
	break;
	case 3:
	{
		printf("O resto da divisao de %i por 5 eh %i", valorDigitado, resto);
	}
	break;
	case 4:
	{
		printf("O resto da divisao de %i por 5 eh %i", valorDigitado, resto);
	}
	break;
	}
}

void ApresentaIR()
{
	float salario = LerValorReal();
	float impostoDevido = 0;

	if (salario <= 1903.98)
	{
		printf("Isento");
	}
	else if (salario <= 2826.65)
	{
		impostoDevido = (salario * 0.075) - 142.8;
		printf("A aliquota aplicada foi: 7.5%%, deducao: 142.80, imposto devido: %.2f", impostoDevido);
	}
	else if (salario <= 3715.05)
	{
		impostoDevido = (salario * 0.15) - 354.8;
		printf("A aliquota aplicada foi: 15%%, deducao: 354.80, imposto devido: %.2f", impostoDevido);
	}
	else if (salario <= 4664.68)
	{
		impostoDevido = (salario * 0.225) - 636.13;
		printf("A aliquota aplicada foi: 22.5%%, deducao: 636.13, imposto devido: %.2f", impostoDevido);
	}
	else
	{
		impostoDevido = (salario * 0.275) - 869.36;
		printf("A aliquota aplicada foi: 27.5%%, deducao: 869.36, imposto devido: %.2f", impostoDevido);
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


	/*float primeiroReal = LerValorReal();
	float segundoReal = LerValorReal();
	float terceiroReal = LerValorReal();
	float quartoReal = LerValorReal();

	ImprimeValoresMaioresQueMedia(primeiroReal, segundoReal, terceiroReal, quartoReal);*/

	/*InformarParOuImpar(5);
	InformarParOuImpar(10);
	InformarParOuImpar(3);
	InformarParOuImpar(6);*/

	//ExemploSwitch();
	//ImprimindoRestoComSwitch();

	ApresentaIR();

	printf("\n\n");
	system("pause");

    return 0;
}

