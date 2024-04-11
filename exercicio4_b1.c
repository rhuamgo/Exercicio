/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   //Variaveis
   int lado1, lado2, lado3;
   
   printf("Informe o valor do lado 1: ");
   scanf("%i", &lado1);
   
   printf("Informe o valor do lado 2: ");
   scanf("%i", &lado2);
   
   printf("Informe o valor do lado 3: ");
   scanf("%i", &lado3);
   
   if(lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
       
       printf("o Triângulo informado é um Equilátero ");
   }
   else if(lado1 == lado2 || lado2 == lado3 )
   {
       printf("O Triângulo informado é um Isosceles");
   }
   else {
         printf("O Triângulo informado é um Escaleno");
   }
}
