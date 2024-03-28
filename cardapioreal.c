/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//DECLARAR VARIAVEIS
int codigo, quantidade;

// Entrada de Dados
printf("Informe o Código do produto: ");
scanf("%i", &codigo);

printf("Informe a quantidade: ");
scanf("%i", &quantidade);

// Saída de Dados
switch (codigo){
    
    
case 100:
    printf("Hot Dog R$%.2f\n", quantidade*1.20);
break;

    case 101:
    printf("Bauru Simples R$%.2f\n", quantidade*1.30);
break;

case 102:
    printf("Bauru C/ ovo R$%.2f\n", quantidade*1.50);
break;

case 103:
    printf("Hamburguer R$%.2f\n", quantidade*1.20);
break;

case 104:
    printf("Cheesebuguer R$%.2f\n", quantidade*1.70);
break;

case 105:
    printf("Suco R$%.2f\n", quantidade*2.20);
break;

case 106:
    printf("Refrigerante R$%.2f\n", quantidade*1.00);
break;

default:
    printf("Código invalido!");
}    
}
    
