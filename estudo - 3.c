#include<stdio.h>
#define preco_litro 6
int main ()

{
    int i, quantidade_clientes;
    float litros, valor_total, valor_desc5, valor_desc20;

    printf("Digite quantos clientes são:");
    scanf("%d", &quantidade_clientes);

    for( i=1 ; i<=quantidade_clientes; i++)
    {

    printf("Quantos litros o cliente %d abasteceu:", i);
    scanf("%f", &litros);

    valor_total = (preco_litro*litros);
    valor_desc5 = (valor_total*0.05);
    valor_desc20 = (valor_total*0.2);

    if (litros<10) {
    printf("Sem desconto, o cliente %d pagara %.2f\n", i, valor_total);
    }
    else if (litros >= 11 && litros<=20){
    printf ("Desconto de 5 porcento, o cliente %d pagara %.2f\n",i, valor_desc5);
    }
    else {
    printf("Desconto de 20 porcento, o cliente %d pagara %.2f\n", i, valor_desc20);
    }
    }
    return 0;
}
