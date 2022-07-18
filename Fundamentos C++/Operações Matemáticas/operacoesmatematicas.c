#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main()
{

    // Definindo Variaveis
    int a = 6, b = 3;

    // Soma
    printf ("\n A Soma de A e B = %d \n", a + b);
    // Mostrando Valores Antes
    printf ("\n A Soma de %d e %d  = %d \n",a, b, a + b);

    // Subtração
    printf ("\n A Subtracao de A e B = %d \n", a - b);
    // Mostrando Valores Antes
    printf ("\n A Subtracao de %d e %d  = %d \n",a, b, a - b);

    // Divisao
    printf ("\n A Divisao de A e B = %d \n", a / b);
    // Mostrando Valores Antes
    printf ("\n A Divisao de %d e %d  = %d \n",a, b, a / b);

    // Multiplicação
    printf ("\n A Multiplicacao de A e B = %d \n", a * b);
    // Mostrando Valores Antes
    printf ("\n A Multiplicacao de %d e %d  = %d \n",a, b, a * b);

    // Resto da Divisao
    printf ("\n O Resto da Divisao de A e B = %d \n", a % b);
    // Mostrando Valores Antes
    printf ("\n O Resto da Divisao %d e %d  = %d \n",a, b, a % b);

    // Valor Absoluto
    printf ("\n O valor absoluto de -3 = %d \n", abs(-3));


    //Finalização do Sistema
    system ("pause");
    return 0;

}
