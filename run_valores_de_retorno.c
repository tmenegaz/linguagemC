#include "valores_de_retorno.c"

int a = 4;
int b = 4;

int main(){
	if(testeNatural(a) == true){
		if(testeDivZero(b) == true){
			printf("soma %i\tsub %i\tmult %i\tdiv %f\n",
			soma(a, b),
			sub(a, b),
			mult(a, b),
			div(a, b));
		}
	}	
	return 0;
}
