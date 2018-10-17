// Aula1010_CalculadoraSimples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <locale.h>

float soma(float a, float b) {
	float resultsoma = a + b;
	return resultsoma;
}

float multi(float a, float b) {
	float resultmulti = a * b;
	return resultmulti;
}

float div(float a, float b) {
	float resultdiv = a / b;
	return resultdiv;
}

float sub(float a, float b) {
	float resultsub = a - b;
	return resultsub;
}

int main(){
	
	setlocale(LC_ALL,"portuguese");

	float a, b;

	printf_s("digite o primeiro valor:\t");
	scanf_s("%f", &a);
	printf_s("digite o segundo valor:\t");
	scanf_s("%f",&b);
	
	float resultadoSoma = soma(a, b);
	printf_s("O valor da soma é: %f\n", resultadoSoma);
	printf_s("%f foi o resultado da soma.\n", resultadoSoma);
	printf_s("A soma de %f e %f eh: %f\n", a, b, resultadoSoma);

	printf_s("O valor da subtração é: %f\n", sub(a, b));
	printf_s("O valor a divisão é: %f\n", div(a, b));
	printf_s("O valor da multiplicação é: %f\n", multi(a, b));
	
	system("pause");
}


