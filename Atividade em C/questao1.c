
#include <stdio.h>
#include <math.h>

int main()
{
  /* questao do circulo */

int raio;
float diametro, circ, area;

printf("INFORME O RAIO:");
scanf("%d",&raio);

diametro = 2*raio;
circ = 2*3.14159*raio;
area = 3.14159*(raio*raio);

printf("DIAMETRO DO CIRCULO: %0.2f",diametro);
printf("CIRCUNFERÊNCIA DO CIRCULO: %0.2f",circ);
printf("Area: %0.2f",area);


  return 0;
}
