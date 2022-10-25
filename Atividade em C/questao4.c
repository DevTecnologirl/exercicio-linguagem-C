#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
  Random r = new Random(); 
		int dados[] = new int[6];
		int lancamentos 
    printf("Lançamento de dados:");
    scanf("%d",&lancamentos);

		for(int x = 0; x < lancamentos; x += 1) 
    {
			int face = r.nextInt(6);
			dados[face] += 1;
		}
		
		for(int x = 0; x <6; x += 1) {
			double percentual = 100 * dados[x];
			percentual /= lancamentos;
			saida += "\n" + (x + 1) + "\t" + dados[x] + "\t" + String.format("%0.2f", percentual) + "%";
		}
		saida += "\n\nTotal de Lan�amentos: " + lancamentos + "\t";
		
		output.setText(saida);
		output.setEditable(false);
	
		
  return 0;
}
