// Laços de Repetição
// While (Enquanto)

// Inicialização de uma ou mais variáveis de controle
//▪ Definição de uma condição de parada
//▪ Enquanto for verdadeira: repete
//▪ Atualização da(s) variável(eis) de controle
//▪ Cuidado: loop infinito

#include <stdio.h>

int main(){
    int i=1;
    printf("Numeros de 1 a 10:\n");
    while (i<=10)
    {
        printf("%d\n",i);
        i++;
    }
    printf("Fim!");
return 0;
}