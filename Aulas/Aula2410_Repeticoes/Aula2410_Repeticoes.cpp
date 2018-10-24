// Aula2410_Repeticoes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>






int main()
{
	/* Loop infinito
	while (true)
	{
		printf("aaa\n");
	}*/

	int a = 0;
	while (a < 5)
	{ // inicio escopo while
		printf("%i\t", a);
		
		a++; // a = a + 1;

	} // fim escopo while
	
	printf("\n ========================== \n");

	a = 0;
	while (a <= 5)
	{ // inicio escopo while
		printf("%i\t", a);

		a++; // a = a + 1;

		//a += 2; // a = a + 2;

	} // fim escopo while

	printf("\n ===== Do While =================== \n");

	do
	{
		printf("%i\t", a);
	} while (a <= 5);

	printf("\n\n");
	system("pause");
    return 0;
}

