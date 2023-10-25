// i) Entrar com o peso e a identificação de 5 ovelhas. Ao final especifique a ovelha mais pesada e o seu número de identificação e a mais leve e o número de identificação.

#include<stdio.h>

int main() {
    int id[5], id_pesado, id_leve;
    float peso[5], pesado, leve;

    printf("Digite o peso da primeira ovelha em kg: \n");
    scanf("%f", &leve);
    printf("Digite a sua identificacao: \n");
    scanf("%d", &id[0]);
    pesado = leve; 
    id_pesado = id_leve = id[0];

    for(int i = 1; i < 5; i++) {
        printf("Digite o peso da ovelha em kg: \n");
        scanf("%f", &peso[i]);
        printf("Digite a sua identificacao: \n");
        scanf("%d", &id[i]);

        if(peso[i] > pesado) {
            pesado = peso[i];
            id_pesado = id[i];
        }
        if(peso[i] < leve) {
            leve = peso[i];
            id_leve = id[i];
        }
    }

    printf("A ovelha mais pesada tem o ID: %d e pesa: %.2f kg\n", id_pesado, pesado);
    printf("A ovelha mais leve tem o ID: %d e pesa: %.2f kg\n", id_leve, leve);

    return 0;
}





