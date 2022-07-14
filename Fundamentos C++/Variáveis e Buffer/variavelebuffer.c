#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main()
{
   // PERMIÇÃO PARA UTILIZAR ACENTOS
	setlocale(LC_ALL,"");
	printf("Olá");

	// %d Números Inteiros

	int a = 5;
	printf("%d, a");

}
