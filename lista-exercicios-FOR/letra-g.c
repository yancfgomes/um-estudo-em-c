// g) Entrar com 12 números e imprimir a média desses números.
#include <stdio.h>
int main()
{

    float v[12];
    float soma;
    soma = 0.0;
    
    for(int i=0;i<12;i++)
    {
        printf("Digite um numero (%d / 12): \n",i+1);
        scanf("%f",&v[i]);
        soma = soma + v[i];
    }
    printf("A media desses 12 numeros e: %.2f \n",soma/12);
    
    return 0;
}