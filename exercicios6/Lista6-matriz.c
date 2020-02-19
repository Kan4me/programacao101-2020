/*Amanda Lara - Exercícios Lista Dia 5
19/02/2020
*/

//Lista string Aula 5 - Manipulacao de matrizes
//Matriz interativa e transposta

#include <stdio.h>
#include <math.h>

int main(){
  int line, column, i, j;

  printf("Digite o numero de linhas da matriz: \n");
  scanf("%d", &line);

  printf("Digite o numero de colunas da matriz: \n");
  scanf("%d", &column);

  int matrix[line][column];

  printf("Digite os valores da matriz: \n");

  for (i = 0; i <= line - 1; i ++){
      for (j = 0; j <= column - 1; j ++){
          scanf("%d", &matrix[i][j]);
      } 
  }

    printf("A matriz é: \n");
  for (i = 0; i <= line - 1; i ++){
      for (j = 0; j <= column - 1; j ++){
          printf("%d ", matrix[i][j]);
      } 
      printf("\n");
  }

  printf("A matriz transposta é: \n");
  for (j = 0; j <= column - 1; j ++){
      for (i = 0; i <= line - 1; i ++){
          printf("%d ", matrix[i][j]);
      } 
      printf("\n");
  }

  return 0;
}
