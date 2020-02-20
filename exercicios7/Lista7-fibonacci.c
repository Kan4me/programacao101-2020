  
/*Amanda Lara - Exercícios Lista Dia 6
20/02/2020
*/

//Lista funcoes Aula 6 - Funcoes
//Sequencia de Fibonacci 

#include <stdio.h>

int fib (x) {
  if (x == 0 || x == 1){
      return 1;
    } 
  return fib(x - 1) + fib(x - 2);
}


int main (){
  int x;

  printf("Digite o valor de x: \n");

  scanf("%d", &x);

  printf("O valor de %d na sequencia de Fibonacci é %d", x, fib (x));
  
}
