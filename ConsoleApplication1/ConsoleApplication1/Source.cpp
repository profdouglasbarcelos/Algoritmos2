#include <stdio.h>

int main() {
	char str[50];

	printf("Enter a string : ");
	fgets(str,50, stdin);

	printf("You entered: %s", str);

	return(0);
}