/*Amanda Lara - Exercícios Lista Dia 6
20/02/2020
*/

//Lista funcoes Aula 6 - Funcoes
//Retornar o maior valor

#include <stdio.h>

void high (x, y) {
  if (x > y){
      printf ("O valor de X eh maior que Y \n");
    } else {
      printf ("O valor de Y eh maior ou igual a X \n");
    }
}


int main (){
  int x, y;

  printf("Digite o valor de X: \n");
  scanf("%d", &x);

  printf("Digite o valor de Y: \n");
  scanf("%d", &y);

  high(x, y);

 return 0;
}
