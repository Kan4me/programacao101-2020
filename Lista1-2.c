/*Amanda Lara - Exercícios Lista Dia 1
11/02/2020
*/

//Construção de uma calculadora

#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float a, b, r1, r2, r3, r4;
    printf("Digite o valor de a: \n");
    scanf( "%f", &a);
    printf("Digite o valor de b: \n");
    scanf( "%f", &b);
    r1 = a + b;
    r2 = a - b;
    r3 = a * b;
    r4 = a / b;

    printf("A Soma é: %.5f \n", r1);
    printf("A Subtração é: %.5f \n", r2);
    printf("O Produto é: %.5f \n", r3);
    printf("A Divisão é: %.5f \n", r4);

return 0;
}

