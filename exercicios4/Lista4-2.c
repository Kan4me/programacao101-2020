/*Amanda Lara - Exercícios Lista Dia 4
17/02/2020
*/

//Lista vetor Aula 4 - Apresentar a posicao do valor x no vetor

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int x;
    int r = 0;
    int vector[14];  

    for (i = 0; i < 14; i ++){
        printf("Digite o valor da posição do vetor: \n");
        scanf("%d", &vector[i]);
    }

    printf("Digite o valor de x de interesse: \n");
    scanf("%d", &x);
    
    for (i = 0; i < 14 && r != 1 ; i ++){
        if (x == vector[i]){
            r = 1;
            printf ("O valor %d encontra-se na posição %d", x, i);
        }
      }
    if (r == 0){
      printf("Valor nao encontrado no vetor de interesse");
    }
return 0;
}
