// h) Ler 200 números inteiros e imprimir quantos são pares e quantos são impares.

#include<stdio.h>
int main(){
    int pares=0,impares=0,v[200];
    
    for(int i=0;i<200;i++)
    {
        printf("Digite um numero (%d / 200): \n",i+1);
        scanf("%d",&v[i]);
        if(v[i]%2==0)
        {
            pares++;
        }
        if(v[i]%2!=0)
        {
            impares++;
        }
    }
    printf("A quantidade de numeros pares sao: %d \n",pares);
    printf("A quantidade de numeros impares sao: %d \n",impares);
    return 0;
}




