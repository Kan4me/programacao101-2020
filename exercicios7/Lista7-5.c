/*Amanda Lara - Exercícios Lista Dia 6
20/02/2020
*/

//Lista funcoes Aula 6 - Funcoes
//Funcao que recebe uma matriz n x n e apresente sua transposta 

#include <stdio.h>
#include <math.h>

void matrix_n(int line, int column, int matrix[100][100]) {

  int i, j;
  
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

}


int main (){
  
  int matrix[100][100];

  int line, column, i, j;

  printf("Digite o numero de linhas da matriz: \n");
  scanf("%d", &line);

  printf("Digite o numero de colunas da matriz: \n");
  scanf("%d", &column);

  if (line > 100 || column > 100){
    printf("Limite atingido. Tente de novo");

    return 0;
  }

  printf("Digite os valores da matriz: \n");

  for (i = 0; i <= line - 1; i ++){
      for (j = 0; j <= column - 1; j ++){
          scanf("%d", &matrix[i][j]);
      } 
  }

  matrix_n(line, column, matrix);

 return 0;
}
