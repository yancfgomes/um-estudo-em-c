#include<stdio.h>

int main(){
char num;

printf("Escolha um conceito: \n");
scanf("%c",&num);

switch (num)
{
    case 'a':
        printf("Excelente");
        break;

    case'b':
        printf("Otimo!");
        break;

    case 'c':
        printf("Bom");
        break;

    case 'd':
        printf("Regular");
        break;

    case 'e':
        printf("Ruim");
        break;

    case 'f':
        printf("Nos vemos no ano que vem...");
        break;

    default:
        printf("Erro! Voce selecionou uma letra fora das opcoes listadas. Tente novamente.");
        break;
}


return 0;
}