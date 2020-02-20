/*Amanda Lara - Exercícios Lista Dia 6
20/02/2020
*/

//Lista funcoes Aula 6 - Funcoes
//Retornar a temperatura Celsius a partir da temperatura Fahrenheit

#include <stdio.h>

float f_to_c (f)  {
  float c = ((f - 32.0) * (5.0/9.0));

  return c;  
}


int main (){
  
  float f;

  printf("Digite a temperatura em Fahrenheit: \n");
  scanf("%f", &f);

  printf("A temperatura de %.3f em Fahrenheit corresponde a Temperatura %.3f Celsius", f, f_to_c(f));

 return 0;
}
