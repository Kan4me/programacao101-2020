/*Amanda Lara - Exercícios Lista Dia 1
13/02/2020
*/

//Conversor de Unidades de Comprimento

#include <stdio.h>

int main(){
    float polegadas, pes, milhas,
    pol_mts, pes_mts, milhas_mts;

    printf("Digite a medida em polegadas: \n");
    scanf( "%f", &polegadas);

    printf("Digite a medida em pes: \n");
    scanf( "%f", &pes);

    printf("Digite a medida em milhas: \n");
    scanf( "%f", &milhas);

    pol_mts = polegadas * 0.0254;
    pes_mts = pes * 0.3048;
    milhas_mts = milhas * 1609.344;

    printf("%.4f polegadas equivalem a %.4f metros \n", polegadas, pol_mts);
    printf("%.4f pes equivalem a %.4f metros \n", pes, pes_mts);
    printf("%.4f milhas equivalem a %.4f metros \n", milhas, milhas_mts);


return 0;
}
