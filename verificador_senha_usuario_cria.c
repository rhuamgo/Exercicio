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
 int senha;
 int verificador_senha;
 bool verificador = false;


     
    printf("Digite a senha: ");
     scanf("%i", &senha);
   
   printf("Agora vamos verificar! \n");
 
 while(verificador == false){    
    printf("Digita a senha criada: ");
    scanf("%i", &verificador_senha);
   
    if(verificador_senha == senha){
            printf("Senha Correta!");
  
            verificador = true;
  }
    else{ printf("Senha incorreta! \n"); }
}   
}  