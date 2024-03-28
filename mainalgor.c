/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

 #include <stdio.h> 
#include <conio.h>

int main()
{
  float nota1 = 0;
  float nota2 = 0;
   
  printf("Informe o valor da primeira nota: ");
  scanf("%g", &nota1);
  printf("A nota da primeira prova foi: %g\n", nota1);
 
  printf("Informe o valor da segunda nota: ");
  scanf("%g", &nota2);
  printf("A nota da segunda prova foi: %g\n", nota2);
  
  float somaMedia = nota1 + nota2;
  float media = somaMedia / 2 ;
  printf("Sua media final é igual a: %g\n", media);
  
  if ( media >= 6 ) {
     printf("Você foi aprovado com média %g\n", media);
     
} else if (media >= 4 && media <6 ) {
    printf("Você esta de recuperação com média %g\n", media);

    
} else {
    printf("Você foi REPROVADO! com média %g\n", media);
}
}

