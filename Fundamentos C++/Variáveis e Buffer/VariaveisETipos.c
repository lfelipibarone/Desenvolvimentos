
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main()
{
   // PERMI��O PARA UTILIZAR ACENTOS
	setlocale(LC_ALL,"");
	printf("Ol� \n");


    // DECLARANDO VARI�VEL int = inteiro
	int a = 5;
    // Para ler N�meros Inteiros %d
	printf("\n O Valor de A � igual a %d \n", a);
	// Ler Novo valor de A
	scanf("%d", &a);
	// Mostrar Novo Valor
    printf("\n O Novo valor de A � igual a %d \n", a);

    // DECLARANDO VARI�VEL float N�meros Quebrados
	float b = 5.5;
    // Para ler N�meros Quebrados %f
	printf("\n O Valor de A � igual a %f \n", b);
	// Ler Novo valor de A
	scanf("%f", &b);
	// Mostrar Novo Valor
    printf("\n O Novo valor de A � igual a %f \n", b);

    // DECLARANDO VARI�VEL char LETRAS
	char letra = 'p';
    // Para ler letras %c
	printf("\n Est� escrito %c \n", letra);
	//Limpando Buffer Quando for utilizar vari�veis CHAR limpar sempre o BUFFER!
	fflush(stdin);
	// Ler Novo valor de A
	scanf("%c", &letra);
	// Mostrar Novo Valor
    printf("\n Agora est� escrito %c \n", letra);

    // SISTEMA PARA N�O FECHAR RAPIDAMENTE O CMD AO TERMINAR
    system ("pause");
    return 0;

}
