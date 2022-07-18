#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main()
{
    // Definindo Variaveis
    int a = 5, b = 10, c = 15;
    char  d = 'x';

    // Maior
    if ( a > 2){
        printf("\n %d e maior que 2  \n", a);
    }
    // Maior ou Igual
    if ( c>= b){
        printf("\n %d e maior ou igual %d  \n", c, b);
    }

    //Menor
    if ( a < 10){
        printf("\n %d e menor que 10  \n", a);
    }

    // Menor ou Igual
    if ( a<= 10){
        printf("\n %d e menor ou igual a 10 \n", a);
    }

    //Diferente

    if( c!= 10){
        printf("\n %d nao e 10 \n", c);
    }

    if ( d!= 'a'){
        printf("\n %c nao e a \n", d);

    }

    //Finalização do Sistema
    system ("pause");
    return 0;

}
