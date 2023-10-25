// j) No dia da estreia do filme “Senhor dos Anéis”, uma grande emissora de TV realizou uma pesquisa logo após o encerramento do filme. Cada espectador respondeu a um questionário no qual constava sua idade e a sua opinião em relação ao filme:

// excelente	3
// bom	2
// regular	1
//Criar um algoritmo que receba a idade e a opinião de 20 espectadores, calcule e imprima:

//A média das idades das pessoas que responderam excelente;

//A quantidade de pessoas que responderam regular;

//A percentagem de pessoas que responderam bom entre todos os expectadores analisados.

#include <stdio.h>
int main()
{
    int idade,opiniao;
    int soma_idade=0,qtde_ex=0;
    int qtde_reg=0;
    int qtde_bom=0;
    
    for(int i=0;i<20;i++)
    {
        printf("Digite sua idade: \n");
        scanf("%d",&idade);
        printf("Digite sua opiniao ([1] Regular | [2] Bom | [3] Excelente ): \n");
        scanf("%d",&opiniao);
        
        if(opiniao==3){
            soma_idade += idade; 
            qtde_ex ++; 
        }
        if(opiniao==2){
            qtde_bom ++; 
        }
        if(opiniao==1){
            qtde_reg ++;

        }
    }
    printf("\nA média das idades das pessoas que responderam excelente: %.2f anos\n",(float)soma_idade/qtde_ex);
    printf("A quantidade de pessoas que responderam regular: %d \n",qtde_reg);
    printf("A percentagem de pessoas que responderam bom entre todos os expectadores analisados: %.2f%%\n",(float)qtde_bom/20*100);
    return 0;
}