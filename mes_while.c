/******************************************************************************

Exercício 5 - Criar um programa que imprima o número e o nome do mês.
O programa deve informar caso o valor digitado não esteja entre 1 e 12, e deve permitir que
o usuário digite novamente caso o valor seja inválido.
*******************************************************************************/
#include <stdio.h>

int main()
{ //variaveis
int mes;

do{
    printf("Informe um numero de 1 a 12: ");
    scanf("%i", &mes);

if(mes >=1 && mes <=12){

switch(mes){
    case 1: printf("Janeiro \n");
 break;    
    case 2: printf("Fevereiro \n");
 break;
    case 3: printf("Marco \n");
 break; 
    case 4: printf("Abril\n");
break; 
    case 5: printf("Maio \n");
 break; 
    case 6: printf("Junho \n");
 break; 
    case 7: printf("Julho \n");
 break; 
    case 8: printf("Agosto \n");
 break; 
    case 9: printf("Setembro \n");
 break; 
    case 10: printf("Outubro \n");
 break; 
    case 11: printf("Novembro \n");
 break; 
    case 12: printf("Dezembro \n");
 break; 
}
 
  break;
    
} else {
    printf("Informe um mes valido! \n");

}    
}while(1);


}
