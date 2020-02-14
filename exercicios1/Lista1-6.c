/*Amanda Lara - Exercícios Lista Dia 1
13/02/2020
*/

//Salario com comissao

#include <stdio.h>

int main(){
    float sal_base, vendas, comissao, sal_tot;

    printf("Digite salario base: \n");
    scanf( "%f", &sal_base);

    printf("Digite o total de vendas do mes: \n");
    scanf( "%f", &vendas);

    comissao = vendas * 0.12;
    sal_tot = sal_base + comissao;

    printf("Valor total salario do mes: %.2f \n", sal_tot);



return 0;
}
