#include <stdio.h>

int main(){
    int i;
    for (i = 1; i <= 10; i++)
    {
        
        if (i==5)
        {
            printf("Comando 'continue' aplicado\n");
            continue; // continue bloqueia a impressão do 5
        }
        printf("%d\n",i);    
    }
    
}