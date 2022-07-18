#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main()
{
    //Definir Variáveis
    int a;
    float b;
    char c;
    bool d;

    // Definindo Valores
    a = 5;
    b = 2.3;
    c = 'a';
    d = true; // True = 1, False = 0

    // Escrevendo na Tela
    // \n Espaçamento na tela no PRINTF
    printf ("\n 0 VALOR DE A = %d", a);
    printf ("\n 0 VALOR DE B = %.lf", b);
    printf ("\n 0 VALOR DE C = %c", c);
    printf ("\n 0 VALOR DE D = %d \n", d);

    // Ler Novos Valores
    scanf ("%d", &a);
    scanf ("%f", &b);
    scanf ("%c", &c);
    scanf ("%d", &d);

    //Finalização do Sistema
    system ("pause");
    return 0;

}
