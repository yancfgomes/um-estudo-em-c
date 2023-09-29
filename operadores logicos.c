// Comando if e else

// 	if(<condicao>){
//		<bloco_de_comandos1>
//	}
//	else {
//		<bloco_de_comandos2>
//	}

// o else depende do if e vem apos ele 

#include<stdio.h>

int main(){
	float m;
	
	printf("insira uma nota: \n");
	scanf("%f",&m);
	
	if(m >= 8)
		printf("Aprovado!");
	else
		printf("Reprovado");



}

