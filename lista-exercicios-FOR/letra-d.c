// d) Criar um algoritmo que imprima todos os números de 1 até 100 e a soma deles.

#include<stdio.h>
int main(){
    int v[100],soma=0;
    printf("__________________ \n");
     printf("\n");
    printf("Numeros de 1 a 100 \n");
    printf("__________________ \n");
    printf("\n");
    for(int i=0;i<100;i++){
        printf("%d \n",i+1);
        v[i]=i+1;
    }
    printf("__________________ \n");
    printf("\n");
    for(int i=0;i<100;i++){
        soma += v[i];
    }
    printf("O somatorio de todos os numeros e: %d \n",soma);


    return 0;    
}