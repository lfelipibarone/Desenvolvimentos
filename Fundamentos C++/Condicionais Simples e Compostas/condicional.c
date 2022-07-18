#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main()
{
    // Definindo Variaval
    int a = 5,opcao = 1;
    float b = 2.5;
    char c = 'x';
    // Condicional Simples
    // 1x ( = ) ATRIBUIÇÃO
    // 2X ( == ) COMPARAÇÃO

    if (a == 5) {
        printf ("\n A Variavel A e = 5 \n");
    }
    if (b == 2.5) {
        printf ("\n A Variavel B e = 2.5 \n");
    }
    if (c == 'x') {
        printf ("\n A Variavel C e = x \n");
    }

    // Número Par ou Impar
    if ( a % 2 == 1){
        printf ("\n A Variavel A e Impar!\n");
    } else {
        printf ("\n A Variavel A e Par ! \n");
    }

    // Condicional Composta
    if(opcao == 1){
        printf("\n A Opcao e = 1 \n");
    } else if(opcao == 2){
        printf ("\n A Opcao e igual  2\n");
    }else {
        printf ("\n A Opcao não é igual 1 ou 2 \n");
    }


    //Finalização do Sistema
    system ("pause");
    return 0;

}
