#include "struct_endereco.h"

struct endereco casa;

void entrada(){
	printf("Digite o nome da cidade\n");
	fgets(casa.cidade, sizeof(casa.cidade), stdin);
	printf("Digite o nome da rua\n");
	fgets(casa.rua, sizeof(casa.rua), stdin);
	printf("Digite o número\n");
	fgets(casa.numero, sizeof(casa.numero), stdin);	
}

void cidade(){
	printf("\n%s\n", casa.cidade);
}
void rua_n(){
	printf("%s\n%s\n", casa.rua, casa.numero);
}
