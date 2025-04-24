#include<stdio.h>
int main ()
{
    int n1,n2,n3,i = n1, soma;

    printf("Digite o numero inteiro base:");
    scanf("%d", &n1);

    printf("Digite o valor inicial do intervalo:");
    scanf("%d", &n2);

    printf("Digite o valor final do intervalo:");
    scanf("%d", &n3);


    for (i = n2 ; i <= n3; i++)

    {
        if(i % n1 == 0 )
        {
            soma += i;
        }

        printf("O resultado da soma dos múltiplos no intervalo entre %d e %d dado eh: %d", n2, n3, soma);


    }
    return 0;

}
