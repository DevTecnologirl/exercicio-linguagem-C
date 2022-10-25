#include <stdlib.h>
#include <stdio.h>

int main()
{
	float limite, saldo, limite2;
	int conta, controle;
	
	controle =0;
	for(controle=1; controle<4; controle++)
	{
		printf("\n\nCliente %i", controle);
		printf("\nNumero da conta:");
		scanf("%i", &conta);
		printf("Limite de credito antes da recessao:");
		scanf("%f",&limite);
		printf("Saldo atual:");
		scanf("%f",&saldo);
		
		if(limite==2000)
		{
			printf("\nNovo limite = R$1000,00 ");
			limite2=1000;
		}
		else
		{
			if(limite==5000)
			{
				printf("\nNovo limite = R$2500,00 ");
				limite2=2500;
			}
else
			{
			printf("\nLimite inexistente ");
			}
		}
		if(saldo>limite2)
		{
			printf("\nSaldo superior ao novo ");
		}
		else
		{
			printf("\nSaldo inferior ao novo ");
		}
	}
}