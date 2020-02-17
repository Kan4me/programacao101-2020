/*Amanda Lara - Exercícios Lista Dia 4
17/02/2020
*/

//Lista vetor Aula 4 - 10 primeiros números ímpares

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i;
    int x = 1;
    int vector[10];  

    for (i = 0; i < 10; i ++){
        vector[i] = x;
        x = x + 2;
    }

    for (i = 0; i < 10; i ++){
        printf ("%d \n",vector[i]);
    }

return 0;
}
