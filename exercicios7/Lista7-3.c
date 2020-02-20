/*Amanda Lara - Exercícios Lista Dia 6
20/02/2020
*/

//Lista funcoes Aula 6 - Funcoes
//Volume do cilindro

#include <stdio.h>
#include <math.h>

float volume_c (h, r) {
  float pi = 3.1415592;

  float volume = pi * pow(r, 2) * h;

  return volume;  
}


int main (){
  
  float h, r;

  printf("Digite a altura do cilindro: \n");
  scanf("%f", &h);

  printf("Digite o raio do cilindro: \n");
  scanf("%f", &r);

  printf("Um clindro com %.3f de altura e %.3f de raio possui %.3f de volume", h, r, volume_c(h, r));

 return 0;
}
