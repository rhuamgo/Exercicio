
//Faça um Programa que leia 4 notas, mostre as notas e a média na tela.

#include <stdio.h>

int main()
{
  int recebe_nota[4]={0,0,0,0};
  int i, media, soma = 0;
   
   for(i = 0; i < 4; i++){
       printf("Informe suas notas: ");
       scanf("%i", &recebe_nota[i]);
       
       soma = soma + recebe_nota[i];
   }
  printf("\n");
    for(i = 0; i < 4; i++){
        printf("Suas Notas foram: %i \n", recebe_nota[i]);
    }
    media = soma / 4;
   printf("Sua media foi: %i", media);    
}
