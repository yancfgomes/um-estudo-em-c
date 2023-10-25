// b) Entrar com 10 números positivos e imprimir o dobro do número digitado.

#include <stdio.h>
int main() {
    int v[10],vdobro[10];
    for(int i=0;i<10;i++){
        printf("Digite um numero (%d/10): \n",i+1);
        scanf("%d",&v[i]);
        vdobro[i]= 2*v[i];
    }
    for(int i=0;i<10;i++){
        printf("O dobro de %d e %d \n",v[i],vdobro[i]);
    }
    return 0;
}



