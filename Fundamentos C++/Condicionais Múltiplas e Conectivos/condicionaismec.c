#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main()
{
    //Definindo Variaveis

    int a = 4;

    // Conectivo Logico E ( AND ) &&, Se uma compara��o for falsa n�o entra no BLOCO.
    if ( a > 5 && a > 15){
        printf ("\n A Variavel 'A' esta entre 5 e 15. \n");
    }

    // Conectivo Logico OU ( OR ) ||, Se uma compara��o for verdadeira  entra no BLOCO.
    if ( a > 5 || a > 15){
        printf ("\n A Variavel 'A' � maior 5 ou 15. \n");
    }

    // Misturando Conectivos Logico
    if (( a > 5 && a < 15) || a == 20){
        printf ("\n A Variavel 'A' est� entre 5 ou 15 ou vale 20. \n");
    }

    //Finaliza��o do Sistema
    system ("pause");
    return 0;

}
