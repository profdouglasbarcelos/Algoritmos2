// Aula2510_Repeticoes.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

/*
	Ler 5 numeros inteiros (escrevendo apenas 1 scanf)
	Apos a leitura informar se os valores estao ou nao 
	em ordem crescente.

	Com apenas 4 variaveis?
*/

int LerNumeroInteiro()
{
	int a;

	printf("Favor digitar um numero inteiro: ");
	scanf_s("%i", &a);

	return a;
}


void DetectaValoresEmOrdem()
{
	int i = 0; // i iterator
	int anterior = 0, numero = 0;
	int crescente = 1; // 1 eh crescente

	while (i < 5)
	{
		numero = LerNumeroInteiro();

		if (i != 0)
		{
			if (anterior >= numero)
			{
				crescente = 0;
			}
			
		}
		
		anterior = numero;
		i++;
	}

	if (crescente == 1)
	{
		printf("Ordem crescente");
	}
	else
	{
		printf("Nao estavam em ordem crescente");
	}

}


int main()
{

	//while (true) // laco infinito
	//{
	//	printf("a");
	//}

	//int a = 0;
	//while (a < 5)
	//{
	//	printf("%i\t", a);
	//	a++; // a = a + 1; // incremento
	//}

	//printf("\n==========================================\n");

	//a = 0;

	//while (a <= 5)
	//{
	//	printf("%i\t", a);
	//	a++; // a = a + 1; // incremento
	//}

	//printf("\n=========== DO WHILE ===================\n");

	//do
	//{
	//	a++; // a = a + 1; // incremento
	//	printf("%i\t", a);
	//} while (a <= 5);
	

	
	DetectaValoresEmOrdem();




	printf("\n\n\n");
	system("pause");
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
