// Como criar condicoes logico-relacionais
// Operadores relacionais
// Maior (>): >
// Maior ou igual (=): >=
// Menor (<): <
// Menor ou igual (=): <=
// Igual (=): ==
// Diferente (?): !=

#include <stdio.h>

int main(){
	float m;
	printf("insira uma nota: \n");
	scanf("%f",&m);
	
	if(m >= 7.0)
		printf("Aprovado(a)!");
	else
		printf("Reprovado(a)!");
	
	return 0;
	
	}
