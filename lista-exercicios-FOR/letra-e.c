// e) Entrar com 10 números e imprimir a metade de cada número digitado.

#include <stdio.h>
int main() {
    int v[10],v_met[10];
    for(int i=0;i<10;i++){
        printf("Digite um numero (%d/10): \n",i+1);
        scanf("%d",&v[i]);
        v_met[i]= v[i]/2;
    }
    for(int i=0;i<10;i++){
        printf("A metade de %d e %d \n",v[i],v_met[i]);
    }
    return 0;
}