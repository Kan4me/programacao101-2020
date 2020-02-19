/*Amanda Lara - Exercícios Lista Dia 5
19/02/2020
*/

//Lista string Aula 5 - Manipulacao de matrizes
//Matriz Identidade

#include <stdio.h>
#include <math.h>

int main(){
  int line, column, i, j;

  printf("Digite o numero de linhas da matriz: \n");
  scanf("%d", &line);

  printf("Digite o numero de colunas da matriz: \n");
  scanf("%d", &column);

  int matrix[line][column];

  for (i = 0; i <= line - 1; i ++){
      for (j = 0; j <= column - 1; j ++){
          if (i == j){
            matrix [i][j] = 1;
          } else {
            matrix [i][j] = 0;
          }
          printf("%d ", matrix[i][j]);
      } 
      printf("\n");
  }

  return 0;
}
