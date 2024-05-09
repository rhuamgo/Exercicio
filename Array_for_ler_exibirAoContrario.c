#include <stdio.h>

//Faça um Programa que leia um vetor de 5 números ordem contraria

int main()
{
int recebevalor[5] ={0,0,0,0,0};
int i;

  
  for(i=0;i <5; i++){
    printf("Digite os valores: ");
    scanf("%i", &recebevalor[i]);
   
}
printf(" \n");

   for(i=4; i >= 0; i--){
        printf("Esses foram os valores digitados: %i \n", recebevalor[i]); 
   }
   
   
}
