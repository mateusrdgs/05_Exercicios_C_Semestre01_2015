#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int unidade=0;
	float total=0, parcial=0, valor=0, desconto=0;

        while(unidade!=-1) {
		total=0;
		printf("Digite a quantidade(un): ");
		scanf("%d", &unidade);
		printf("Digite o valor unitario: ");
		scanf("%f", &valor);
		total+=(valor*unidade);
		printf("O total deste produto e de: %.2f\n",total);
		parcial+=total;
		printf("O total parcial da compra e de: %.2f\n\n",parcial);

	}
		if(unidade == -1)
		{
			valor=parcial;
			printf("O valor total e de: %.2f\n", valor);
			printf("Digite o valor do desconto: ");
			scanf("%f", &desconto);
			printf("O desconto e de: %.2f\n\n", desconto);
			if((desconto*100)==0)
			{
				printf("Voce nao aplicou desconto\n");
			}
			else if((desconto*100) > 0 && (desconto*100) < 10)
			{
				printf("Voce aplicou um desconto de cliente convencional!\n");
			}
			else if((desconto*100) >= 10 && (desconto*100) < 15)
			{
				printf("Voce aplicou um desconto de cliente preferencial!\n");
			}
			else if((desconto*100) >= 15 && (desconto*100) < 20)
			{
				printf("Voce aplicou um desconto de cliente VIP!\n");
			}
			else if((desconto*100) >= 20)
			{
				printf("Voce aplicou um desconto gerencial!\n");
			}
			valor-=(parcial*desconto);
			printf("Valor com desconto: %.2f \n\n", valor);
		}
		getch();
		printf("Compra finalizada!\n");
	return 0;
}
