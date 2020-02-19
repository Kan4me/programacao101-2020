/*Amanda Lara - Exercícios Lista Dia 5
19/02/2020
*/

//Lista string Aula 5 - Manipulacao de matrizes
//Apresentar valores maiores que 10 em uma matriz 4 x 4  

#include <stdio.h>
#include <math.h>

int main(){
  int line, column, i, j, n;
  int p = 0;

  printf("Digite o numero de linhas da matriz: \n");
  scanf("%d", &line);

  printf("Digite o numero de colunas da matriz: \n");
  scanf("%d", &column);

  n = line * column;
  int matrix[line][column];
  int vetor[n];

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

  n = 0;

  for (i = 0; i <= line - 1; i ++){
      for (j = 0; j <= column - 1; j ++){
          if (matrix[i][j] > 10){
              vetor[n] = matrix[i][j];
              p = p + 1;
              n = n + 1;
          }
      } 
  }

  printf("A matriz de interesse possui %d valores maiores que 10. Os valores são os seguintes: \n", p);
  
  for (i = 0; i < p; i++){
    printf("%d ", vetor[i]);
  }

  return 0;
}
