// a) Escrever um algoritmo que leia 20 valores e especifique ao final a somatória dos mesmos.

#include<stdio.h>
int main(){
    int v[20],soma;
    soma=0;
    for (int i=0;i<20;i++)
    {
        printf("Digite um numero: \n");
        scanf("%d",&v[i]);
        soma += v[i];
    }
    printf("A soma de todos os elementos e: %d",soma);




    return 0;
}