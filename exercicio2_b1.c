#include <stdio.h>

int main() {
    int n1, n2, n3;
    

    printf("Informe o Primeiro Valor: ");
    scanf("%i", &n1);
    printf("Informe o segundo valor: ");
    scanf("%i", &n2);
    printf("Informe o terceiro valor: ");
    scanf("%i", &n3);
    
  
    int maior = n1;
    if (n2 > maior)
        maior = n2;
    if (n3 > maior)
        maior = n3;
    
   
    printf("O maior valor é: %i\n", maior);
    
}