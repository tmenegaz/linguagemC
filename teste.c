#include<stdio.h>
#include<stdlib.h>
int numero=0,numero2=0,calc=0,cont=0,calcularnumero=0;
int inverter(int x){
	if(x==0){
		return numero2;
	}
	calcularnumero=numero/(pow(10,x-1));
	numero2=numero2+(calcularnumero*pow(10,cont));
	numero=numero-(calcularnumero*pow(10,x-1));
	cont++;
	return inverter(x-1);
}
main(){
	int nnumeros=0,calcular=0,guardarnumero=0;;
	printf("\nEscreva um numero para ver o seu inverso:\n ");
	scanf("%d",&numero);
	guardarnumero=numero;
	calcular=numero;
	
	for(nnumeros=0;calcular>0;nnumeros++){
	calcular=calcular/10;
	}
	printf("\nO antigo numero era: %d\n",guardarnumero);
	printf("\nO novo numero eh: %d\n",inverter(nnumeros));
}
