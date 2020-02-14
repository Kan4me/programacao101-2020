/*Amanda Lara - Exercícios Lista Dia 1
13/02/2020
*/

//Area de um Quadrado ou Retangulo

#include <stdio.h>

int main(){
    float base, altura, area, perimetro;

    printf("Digite o tamanho da base do quadrilatero: \n");
    scanf( "%f", &base);

    printf("Digite o tamanho da altura do quadrilatero: \n");
    scanf( "%f", &altura);

    area = base * altura;
    perimetro = (2 * base) + (2 * altura);

    printf("Area do quadrilatero: %.2f \n", area);
    printf("Perimetro do quadrilatero: %.2f \n", perimetro);



return 0;
}
