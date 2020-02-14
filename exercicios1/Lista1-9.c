/*Amanda Lara - Exercícios Lista Dia 1
13/02/2020
*/

//Distancia entre dois pontos

#include <stdio.h>
#include <math.h>

int main(){
    int a1, a2, b1, b2, p1, p2;
    float distancia;

    printf("Digite o valor de a1: \n");
    scanf( "%d", &a1);

    printf("Digite o total de a2: \n");
    scanf( "%d", &a2);

    printf("Digite o total de b1: \n");
    scanf( "%d", &b1);

    printf("Digite o total de b2: \n");
    scanf( "%d", &b2);

    p1 = a2 - a1;
    p2 = b2 - b1;
    distancia = sqrt(pow(p1, 2) + pow(p2, 2));

    printf("A distancia entre os pontos (%d,%d) e (%d,%d) corresponde a %.3f \n",
           a1, a2, b1, b2, distancia);

return 0;
}
