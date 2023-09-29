#include<stdio.h>
// Atribuicoes aritmeticas
// Operadores de atribuicao aritmetica

int main(){
    int dado=10; // atribuindo a variavel dado que vale 10
    printf("Valor atual de dado: %d\n",dado);

    dado++; // Incremento em 1 unidade: ++
    printf("dado + 1/: %d\n",dado);

    dado--; // Incremento em 1 unidade a menos: --
    printf("dado - 1/: %d\n",dado);
    
    dado+=3; // Incremento em n unidades: +=
    printf("dado com incremento em 3 unidades: %d\n",dado);
    
    dado-=3; // Decremento em n unidades: -=
    printf("dado com decremento em 3 unidades: %d\n",dado);
    
    dado*=3; // Atribuicao com multiplicacao: *=
    printf("dado * 3 unidades: %d\n",dado);
   
    dado/=3; // Atribuicao com divisao: /=
    printf("dado / 3 unidades: %d\n",dado);
    
    return 0;

}
