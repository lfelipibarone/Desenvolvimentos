
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main()
{
   // PERMIÇÃO PARA UTILIZAR ACENTOS
	setlocale(LC_ALL,"");
	printf("Olá \n");


    // DECLARANDO VARIÁVEL int = inteiro
	int a = 5;
    // Para ler Números Inteiros %d
	printf("\n O Valor de A é igual a %d \n", a);
	// Ler Novo valor de A
	scanf("%d", &a);
	// Mostrar Novo Valor
    printf("\n O Novo valor de A é igual a %d \n", a);

    // DECLARANDO VARIÁVEL float Números Quebrados
	float b = 5.5;
    // Para ler Números Quebrados %f
	printf("\n O Valor de A é igual a %f \n", b);
	// Ler Novo valor de A
	scanf("%f", &b);
	// Mostrar Novo Valor
    printf("\n O Novo valor de A é igual a %f \n", b);

    // DECLARANDO VARIÁVEL char LETRAS
	char letra = 'p';
    // Para ler letras %c
	printf("\n Está escrito %c \n", letra);
	//Limpando Buffer Quando for utilizar variáveis CHAR limpar sempre o BUFFER!
	fflush(stdin);
	// Ler Novo valor de A
	scanf("%c", &letra);
	// Mostrar Novo Valor
    printf("\n Agora está escrito %c \n", letra);

    // SISTEMA PARA NÃO FECHAR RAPIDAMENTE O CMD AO TERMINAR
    system ("pause");
    return 0;

}
