/*Amanda Lara - Exerc�cios Lista Dia 1
11/02/2020
*/

//Constru��o de uma calculadora

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

    printf("A Soma �: %.5f \n", r1);
    printf("A Subtra��o �: %.5f \n", r2);
    printf("O Produto �: %.5f \n", r3);
    printf("A Divis�o �: %.5f \n", r4);

return 0;
}

