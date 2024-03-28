/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
// Declarar variaveis
int valor1 = 0; int valor2 = 0;

printf("Informe o primeiro Numero ");
scanf("%i", &valor1);

printf("Informe o Segundo Numero ");
scanf("%i", &valor2);

if (valor1 > valor2){
    
    printf("O maior Numero informado foi o : %i\n ", valor1);
    
} else if (valor2 > valor1){
    
    printf("O maior Numero informado foi o : %i\n ", valor2);
    
} else if (valor1 == valor2){
    
    printf("Os Numeros informados são Iguais");
}

  
}
