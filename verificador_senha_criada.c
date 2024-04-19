/******************************************************************************

Exercício 6 - Faça um programa que receba uma senha formada de quatro números inteiros,
verifique se a senha está correta e, caso não esteja, solicite novamente a senha. Se a senha
digitada estiver correta, deverá ser apresentada a mensagem “Senha Correta”, caso
contrário, “Senha Incorreta”

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main()
{
 int senha = 1025;
 bool verificador = false;
 
 while(verificador == false){   
    printf("Digite a senha: ");
     scanf("%i", &senha);
   
   
  if(senha == 1025){
        printf("Senha Correta!");
  
      verificador = true;
  }
  else{
       printf("Senha incorreta! \n");
  }
  
  }   
}    

