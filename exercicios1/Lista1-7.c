/*Amanda Lara - Exercícios Lista Dia 1
13/02/2020
*/

//Consumo de gasolina de um carro que faz 7km/L com um tanque de 45L de 
//capacidade

#include <stdio.h>
#include <math.h>

int main(){
    int horas_viagem, velocidade_media, autonomia, tanque;
    float distancia_viagem, litros_viagem, numero_tanques;

    printf("Digite o tempo da viagem em horas (valor inteiro): \n");
    scanf( "%d", &horas_viagem);

    printf("Digite a velocidade media durante a viagem (km/h): \n");
    scanf( "%d", &velocidade_media);

    printf("Digite a autonomia do veiculo (km/L): \n");
    scanf( "%d", &autonomia);

    printf("Digite a capacidade do tanque em litros: \n");
    scanf( "%d", &tanque);

    distancia_viagem = horas_viagem * velocidade_media;
    litros_viagem = distancia_viagem / autonomia;
    numero_tanques = ceil(litros_viagem / tanque);

    printf("Uma viagem de %d horas tem a distancia de %.2f quilometros a uma velocidade media de %d \n",
           horas_viagem, distancia_viagem, velocidade_media);
    printf("Essa viagem gasta %.2f litros e com um tanque de %d litros precisa abastecer %.2f vezes \n",
           litros_viagem, tanque, numero_tanques);

return 0;
}
