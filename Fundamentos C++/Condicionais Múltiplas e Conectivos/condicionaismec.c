#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main()
{
    //Definindo Variaveis

    int a = 4;

    // Conectivo Logico E ( AND ) &&, Se uma comparação for falsa não entra no BLOCO.
    if ( a > 5 && a > 15){
        printf ("\n A Variavel 'A' esta entre 5 e 15. \n");
    }

    // Conectivo Logico OU ( OR ) ||, Se uma comparação for verdadeira  entra no BLOCO.
    if ( a > 5 || a > 15){
        printf ("\n A Variavel 'A' é maior 5 ou 15. \n");
    }

    // Misturando Conectivos Logico
    if (( a > 5 && a < 15) || a == 20){
        printf ("\n A Variavel 'A' está entre 5 ou 15 ou vale 20. \n");
    }

    //Finalização do Sistema
    system ("pause");
    return 0;

}
