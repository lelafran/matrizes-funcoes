#include<stdio.h>


int arredonda (float x);
int main ()
{
    float valor;
    int  valor_inteiro;

    printf("Digite um valor:");
    scanf("%f", &valor);

    valor_inteiro = arredonda (valor);
    printf("%d", valor_inteiro);

}

int arredonda (float valor)
{
    if (valor > 0)
        return (int) (valor + 0.5);
    else
        return (int) (valor - 0.5);
}

