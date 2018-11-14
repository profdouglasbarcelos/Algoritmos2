// Aula1411_Structs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

struct Carro
{
	char modelo[30];
	char marca[30];
	int anoFabricacao;
	char cor[20];
	char placa[8];
};

void ImprimirDadosCarro(Carro carro)
{
	printf("=== Dados Veiculo ===\n");
	printf("Modelo: %s\n", carro.modelo);
	printf("Marca: %s\n", carro.marca);
	printf("Ano: %i\n", carro.anoFabricacao);
	printf("Cor: %s\n", carro.cor);
	printf("Placa: %s\n", carro.placa);
}

int main()
{
	struct Carro c;

	printf("Digite o modelo do carro: ");
	gets_s(c.modelo);
	
	// fgets faz a leitura de uma string
	// fgets(variavelArmazenamento, tamanho, entrada);
	// fgets(c.modelo, 30, stdin);
	
	// sizeof retorna o tamanho ocupado na memoria pela variavel
	// sizeof(variavel)
	// sizeof(c.modelo)

	//fgets(c.modelo, sizeof(c.modelo), stdin);

	// stdin (buffer teclado)


	printf("Digite a marca do carro: ");
	gets_s(c.marca);
	printf("Digite a cor do carro: ");
	gets_s(c.cor);
	printf("Digite a placa do carro: ");
	gets_s(c.placa); 
	
	printf("Digite o ano de fabricacao: ");
	scanf_s("%i", &c.anoFabricacao);

	ImprimirDadosCarro(c);

	system("pause");
	
    return 0;
}

