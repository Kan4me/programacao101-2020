/*Amanda Lara - Exercícios Lista Dia 1
13/02/2020
*/

//Caixa de Padaria para três itens

#include <stdio.h>

int main(){
    float pao, bolo, bombom, salgado,
    p_pao, p_bolo, p_bombom, p_salgado,
    tot_pao, tot_bolo, tot_bombom, tot_salgado;

    printf("Digite o peso do pao (gramas): \n");
    scanf( "%f", &pao);
    printf("Digite o valor do quilo do pao: \n");
    scanf( "%f", &p_pao);


    printf("Digite o peso do bolo (gramas): \n");
    scanf( "%f", &bolo);
    printf("Digite o valor do quilo do bolo: \n");
    scanf( "%f", &p_bolo);

    printf("Digite o peso do bombom (gramas): \n");
    scanf( "%f", &bombom);
    printf("Digite o valor do quilo do bombom: \n");
    scanf( "%f", &p_bombom);

    printf("Digite o peso do salgado (gramas): \n");
    scanf( "%f", &salgado);
    printf("Digite o valor do quilo do salgado: \n");
    scanf( "%f", &p_salgado);

    tot_pao = (pao/1000) * p_pao;
    tot_bolo = (bolo/1000) * p_bolo;
    tot_bombom = (bombom/1000) * p_bombom;
    tot_salgado = (salgado/1000) * p_salgado;

    printf("Valor compra pao: %.2f \n", tot_pao);
    printf("Valor compra bolo: %.2f \n", tot_bolo);
    printf("Valor compra bombom: %.2f \n", tot_bombom);
    printf("Valor compra salgado: %.2f \n", tot_salgado);
    printf("Valor total da compra: %.2f \n", tot_pao +
           tot_bolo + tot_bombom
            + tot_salgado);

return 0;
}
