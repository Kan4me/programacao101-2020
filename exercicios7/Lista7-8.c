/*Amanda Lara - Exercícios Lista Dia 6
20/02/2020
*/

//Lista funcoes Aula 6 - Funcoes
//Funcao que recebe uma matriz n x n e apresente sua transposta 

#include <stdio.h>
#include <math.h>

int func_vec(int vetor[1000], int n){
  if (n != 0){
    return vetor[n-1] + func_vec(vetor,n-1);
  
  } else {
    return 0;

  }
}


int main (){
  
  int vetor [1000], i, n;

  printf("Digite o tamanho do vetor: \n");
  scanf("%d", &n);

  printf("Digite os valores do vetor: \n");

  for (i = 0; i < n; i ++){ 
    scanf("%d", &vetor[i]);
  }

  printf("%d", func_vec(vetor, n));

  return 0;
}
