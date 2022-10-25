#include <stdio.h>
#include <stdlib.h>

int main()
{
	float qdirigidos, quantLitros, consumo;
	
	printf("\nNumero de quilometros dirigidos:");
	scanf("%f",&qdirigidos);
	printf("\nQuantidade de litros obtidos a cada abastecimento:");
	scanf("%f",&quantLitros);
	
	consumo = qdirigidos/quantLitros;
	printf("\nConsumo atual = %.2f",consumo);
}