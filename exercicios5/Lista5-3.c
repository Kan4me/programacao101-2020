/*Amanda Lara - Exercícios Lista Dia 4
17/02/2020
*/

//Lista string Aula 4 - Leitura der caracteres ate a letra p de 
//uma palavra qualquer
//%c le apenas o caracter!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
  char palavra[100];
  int i;
  int r = 0;
  int tamanho;

  printf("Digite palavra: \n");
  scanf("%s", palavra);

  tamanho = strlen(palavra);

  for (i = 0; i < tamanho && r != 1; i++){
    if(palavra[i] != 'p'){
      printf("%c", palavra[i]);
    } else {
      r = r + 1;
    }
  }

return 0;
}
