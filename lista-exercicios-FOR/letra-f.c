// f) Entrar com um nome, idade e sexo de 20 pessoas. Imprimir o nome se a pessoa for do sexo masculino e tiver mais de 21 anos.
#include<stdio.h>
int main(){
    int sexo,idade;
    char nome[100];

    for(int i=0;i<20;i++){
    printf("Digite seu nome: \n");
    scanf("%99s",nome);
    printf("Digite sua idade: \n");
    scanf("%d",&idade);
    printf("Sexo: [1] Masculino ou [2] Feminino: \n");
    scanf("%d",&sexo);
    
    if((idade>21) && (sexo==1)){
        printf("%s\n",nome);
        }
    }
    
    
    return 0;

}