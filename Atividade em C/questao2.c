
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  /* questao 2 crescimento demográfico */

long populacao = (long) 7.8e9;
float cresd = 0.011;
float um,dois,tres,quatro,cinco;

um = populacao+(populacao*cresd);
dois = um+(um*cresd);
tres = dois+(dois*cresd);
quatro = tres+(tres*cresd);
cinco = quatro+(quatro*cresd);

printf("Populacao mundial estimada depois de 1 ano = %0.2f\n",um);

printf("Populacao mundial estimada depois de 2 anos = %0.2f\n",dois);
		 
printf("Populacao mundial estimada depois de 3 anos = %0.2f\n",tres);

printf("Populacao mundial estimada depois de 4 anos = %0.2f\n",quatro);

printf("Populacao mundial estimada depois de 5 anos = %0.2f\n",cinco);
  
  return 0;
}
