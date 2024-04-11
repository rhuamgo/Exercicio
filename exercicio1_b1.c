#include <stdio.h>

int main() {
    int n1, n2, n3;
    

    printf("Informe o Primeiro Valor: ");
    scanf("%i", &n1);
    printf("Informe o segundo valor: ");
    scanf("%i", &n2);
    printf("Informe o terceiro valor: ");
    scanf("%i", &n3);
    
  
    int menor = n1;
    if (n2 < menor)
        menor = n2;
    if (n3 < menor)
        menor = n3;
    
   
    printf("O menor valor é: %i\n", menor);
    
}