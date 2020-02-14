/*Amanda Lara - Exercícios Lista Dia 1
14/02/2020
*/

//Saque Caixa eletrônico

#include <stdio.h>
#include <math.h>

int main(){
    int reais, centavos, nota_100, nota_50, nota_20, nota_10, nota_5, 
    nota_1, moeda_50, moeda_25, moeda_10, moeda_5, moeda_1,
    mod_100, mod_50, mod_20, mod_10, mod_5,
    mod_m50, mod_m25, mod_m10, mod_m5;

    printf("Digite o valor dos reais do saque: \n");
    scanf( "%d", &reais);
    
    printf("Digite o valor dos centavos do saque: \n");
    scanf( "%d", &centavos);

    nota_100 = reais / 100;
    mod_100 = reais % 100;

    nota_50 = mod_100 / 50;
    mod_50 = mod_100 % 50;

    nota_20 = mod_50 / 20;
    mod_20 = mod_50 % 20;

    nota_10 = mod_20 / 10;
    mod_10 = mod_20 % 10;

    nota_5 = mod_10 / 5;
    mod_5 = mod_10 % 5;

    nota_1 = mod_5 / 1;

    moeda_50 = centavos / 50;
    mod_m50 = centavos % 50;

    moeda_25 = mod_m50 / 25;
    mod_m25 = mod_m50 % 25;

    moeda_10 = mod_m25 / 10;
    mod_m10 = mod_m25 % 10;

    moeda_5 = mod_m10 / 5;
    mod_m5 = mod_m10 % 5;

    moeda_1 = mod_m5 / 1;

    printf("O valor de %d,%d de saque utiliza as seguintes notas e moedas: \n", reais, centavos);
    printf("%d notas de 100 \n", nota_100);
    printf("%d notas de 50 \n", nota_50);
    printf("%d notas de 20 \n", nota_20);
    printf("%d notas de 10 \n", nota_10);
    printf("%d notas de 5 \n", nota_5);
    printf("%d notas de 1 \n", nota_1);
    printf("%d moedas de 50 \n", moeda_50);
    printf("%d moedas de 25 \n", moeda_25);
    printf("%d moedas de 10 \n", moeda_10);
    printf("%d moedas de 5 \n", moeda_5);
    printf("%d moedas de 1 \n", moeda_1);

return 0;
}
