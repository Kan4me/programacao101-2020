/*Amanda Lara - Exercícios Lista Dia 1
13/02/2020
*/

//Saque Caixa eletrônico

#include <stdio.h>
#include <math.h>

int main(){
    float saque, nota_100, nota_50, nota_20, nota_10, nota_5, nota_1,
    moeda_50, moeda_25, moeda_10, moeda_5,
    mod_100, mod_50, mod_20, mod_10, mod_5, mod_1,
    mod_m50, mod_m25, mod_m10, mod_m5;

    printf("Digite o valor do saque: \n");
    scanf( "%f", &saque);

    nota_100 = saque / 100;
    mod_100 = saque % 100;

    nota_50 = mod_100 / 50;
    mod_50 = mod_100 % 50;

    nota_20 = mod_50 / 20;
    mod_20 = mod_50 % 20;

    nota_10 = mod_20 / 10;
    mod_10 = mod_20 % 10;

    nota_5 = mod_10 / 5;
    mod_5 = mod_10 % 5;

    nota_1 = mod_5 / 1;
    mod_1 = mod_5 % 1;

    moeda_50 = mod_1 / 50;
    mod_m50 = mod_1 % 50;

    moeda_25 = mod_m50 / 25;
    mod_m25 = mod_m50 % 25;

    moeda_10 = mod_m25 / 10;
    mod_m10 = mod_m25 % 10;

    moeda_5 = mod_m10 / 5;
    mod_m5 = mod_m10 % 5;


    printf("O valor de %.2f de saque utiliza as seguintes notas e moedas: \n", saque);
    printf("%f notas de 100 \n", nota_100);
    printf("%f notas de 50 \n", nota_50);
    printf("%f notas de 20 \n", nota_20);
    printf("%f notas de 10 \n", nota_10);
    printf("%f notas de 5 \n", nota_5);
    printf("%f notas de 1 \n", nota_1);
    printf("%f moedas de 50 \n", moeda_50);
    printf("%f moedas de 25 \n", moeda_25);
    printf("%f moedas de 10 \n", moeda_10);
    printf("%f moedas de 5 \n", moeda_5);


return 0;
}
