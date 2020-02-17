/*Amanda Lara - Exercícios Lista Dia 4
17/02/2020
*/

//Lista vetor Aula 4 - Atribuir valor 0 para entrada negativa do vetor 

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i;
    int vector[8];

    for (i = 0; i < 8; i ++){
        printf("Digite o valor da posição do vetor: \n");
        scanf("%d", &vector[i]);
    }
    
    for (i = 0; i < 8; i ++){
        if (vector[i] < 0){
           vector[i] = 0;
        }
    }
        for (i = 0; i < 8; i ++){      
          printf("%d ", vector[i]);
        }

return 0;
}
