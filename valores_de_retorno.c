#include "valores_de_retorno.h"

bool testeNatural(int a){
	if(a >= 0 && a < 10){
		return true;
	} else{
		return false;
	}
}

bool testeDivZero(int b){
	if(b != 0 && b%2==0){
		printf("ok\n");
		return true;
	} else {
		return false;
	}
}

int soma(int a, int b){
	return a + b;
}

int sub(int a, int b){
	return a - b;
}

int mult(int a, int b){
	return a * b;
}

float div(int a, int b){
	return a / b;
}
