
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* questao 3 economia*/

float kmpdia = 0, precoplitro = 0, kmplitro = 0, taxaspdia = 0 , pedagio = 0;
float gastoTotal, gastoPercapita;
		
	printf("Quilometros totais dirigidos por dia: ");
		scanf("%f",&kmpdia);
	printf("Preco por litro de gasolina: ");
    scanf("%f",&precoplitro);
	printf("Quilometros m�dios por litro:  ");
		scanf("%f",&kmplitro);
	printf("Taxas de estacionamento por dia:");
		scanf("%f",&taxaspdia);
	printf("Pedagio por dia:");
		scanf("%f",&pedagio);
		
		gastoTotal = (kmpdia / kmplitro) * (precoplitro + taxaspdia + pedagio);
		
		printf("Custo por dia = %0.2f\n",gastoTotal);
  return 0;
}
