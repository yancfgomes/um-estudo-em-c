#include<stdio.h>
int main(){
    int vnota[3],i,soma;
    soma = 0;
    for (i = 0; i < 3; i++)
    {
        printf("Digite sua nota: \n");
        scanf("%d",&vnota[i]);
        
    }

    for (i = 0; i < 3; i++)
    {
        soma = soma + vnota[i];
        
    }

    printf("A sua media e: %d \n",soma/3);
return 0;    
}