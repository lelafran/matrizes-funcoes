#include <stdio.h>
int main ()
{

    int n, quantidade, quantidade_feira, i, i2;
    float preco, preco_total, preco_fruta, media, valor_qualquer;

    printf ("Quantas frutas diferentes estão sendo vendidas:");
    scanf("%d", &n);


    for (i=1; i<=n; i++){
    printf("Qual o preco da fruta %d:", i);
    scanf("%f", &preco);

    printf("Qual a quantidade da fruta %d:", i);
    scanf("%d", &quantidade);

    preco_fruta = (preco*quantidade);
    printf("O valor gasto na fruta %d eh %.2f\n", i, preco_fruta);

     preco_total += preco_fruta ;
    }

   media = preco_total/n;

    printf("O valor total gasto na feira eh: %.2f\n", preco_total);
    printf("A media do valor das frutas eh: %.2f\n", media);


     printf("Digite um valor qualquer:");
    scanf("%f", &valor_qualquer);



        if (valor_qualquer>media)
        {
        printf("Acima da arrecadacao media");
        }
        else if (valor_qualquer=media)
        {
            printf("Valor igual a arrecadacao media");
        }
        else
        {
            printf("Valor menor que a arrecadacao media");

        }


    return 0;

    }
