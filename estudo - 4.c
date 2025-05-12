#include<stdio.h>
int main()
{
    float preco_fruta, preco_compraf, preco_total, valor;
    int i,quantidade_fruta,quantas_frutas, media;

    printf("Quantas frutas diferentes foram vendidas:");
    scanf("%d", &quantidade_fruta);

    for (i=1; i<=quantidade_fruta; i++){
    printf ("Qual o preco da fruta %d:", i);
    scanf("%f", &preco_fruta);

    printf("Quantas frutas %d foram vendidas:", i);
    scanf("%d", &quantas_frutas);

    preco_compraf = (preco_fruta*quantas_frutas);
    preco_total += preco_compraf ;

    }

    media = (preco_total/quantidade_fruta);

    printf("Informe um valor qualquer em reais:");
    scanf("%f", &valor);

    {
    if (valor>media){
    printf("ERROU PARA MAIS!");
    }
    else if (valor=media)
    {
    printf("VALOR IGUAL A MEDIA");
    }
    else
    {
    printf("VALOR MENOR QUE A MEDIA");
    }
    }

    return 0;

    }
