/*Amanda Lara - Exercícios Lista Dia 1
13/02/2020
*/

//Idade de dias para anos

#include <stdio.h>
#include <math.h>

int main(){
    int dias_tot, anos, mod_ano, meses, dias;

    printf("Digite o total de dias: \n");
    scanf( "%d", &dias_tot);

    anos = dias_tot / 365;
    mod_ano = dias_tot % 365;
    meses = mod_ano / 30;
    dias = dias_tot - ((365 * anos) + (30 * meses));

    printf("Uma pessoa com %d dias possui %d anos, %d meses e %d dias de vida \n",
           dias_tot, anos, meses, dias);

return 0;
}
