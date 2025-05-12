#include <stdio.h>
#define primeira 1
#define ultima 9
int main (){

    int quantidade_1, quantidade_2;
    float valor, valor_desconto;

        printf("Digite a quantidade:");
        scanf ("%d %d", &quantidade_1, &quantidade_2);

    valor = ((quantidade_1+quantidade_2) * (ultima-primeira) / 2);
    valor_desconto = (valor * 0.8);

    if (valor>quantidade_1){
        printf("O resultado eh %f e as quantidades são %d e %d", valor, quantidade_1, quantidade_2);

    } else {
        printf("O resultado eh %f e as quantidades são %d e %d", valor_desconto, quantidade_1, quantidade_2);
        }

        return 0;
        }
