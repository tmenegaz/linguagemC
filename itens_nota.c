#include "itens_nota.h"

struct nota nf;

void quant(){
	printf("Digite a quantidade de itens: ");
	scanf("%i", &nf.quant);
}

void disc(){
	printf("Digite a a discrição do item: ");
	fflush(stdin);
	fgets(nf.discrimina, sizeof(nf.discrimina), stdin);	
}

void valor(){
	printf("Digite o preço do itens: ");
	scanf("%.2f\n", &nf.valor);
}

void saida(){
	printf("\n |Discriminação: %s\n |Quantidade: %i\n |Preço: %f\n",
	nf.discrimina, nf.quant, nf.valor);
}





