/*Amanda Lara - Exercícios Lista Dia 4
17/02/2020
*/

//Lista vetor Aula 4 - Apresentar quantos valores pares existem
//no vetor e quais são tais valores

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i;
    int p = 0;
    int vector[12];
    int vector_p[12];  

    for (i = 0; i < 12; i ++){
        printf("Digite o valor da posição do vetor: \n");
        scanf("%d", &vector[i]);
    }
    
    for (i = 0; i < 12; i ++){
        if (vector[i]%2 == 0){
           vector_p[p] = vector[i];
            p = p + 1;
        }
      }
    
    if (p > 0){
      printf("O vetor de interesse possui %d numeros pares que sao: \n", p);
        for (i = 0; i < p; i ++){      
          printf("%d ", vector_p[i]);
        }
    } else {
      printf("O vetor nao apresenta valores pares");
    }
return 0;
}
