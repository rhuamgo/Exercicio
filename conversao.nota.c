/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 //DECLARAR VARIAVEIS 
int valor;

printf("Informe a nota numerica: ");
scanf("%i", &valor);
if(valor >100){
    printf("ERRO! VALOR INVALIDO, informe uma nota de 0 a 100!");
}
else{

if(valor >=86 && valor<=100){
    
    printf("A");
    
}
else if (valor >=61 && valor <=85){
    
    printf("B");
    
}
else if (valor >=36 && valor <=60){

    printf("C");

}
else if (valor >=1 && valor <=35){
    
    printf("D");

    
}else{
    
    printf("E");
}
}
}