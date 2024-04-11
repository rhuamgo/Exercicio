
#include <stdio.h>

int
main ()
{
  //variaveis
  float celcius, fahre = 0;

  printf ("Digite a temperatura em Celcius que deseja converter: ");
  scanf ("%f", &celcius);

fahre = celcius * (9.0 / 5.0) + 32;

printf("A temperatura de %.2f Graus Celcius em Fahrenheit é: %.2f ",celcius, fahre);
}