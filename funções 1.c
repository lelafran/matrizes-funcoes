#include<stdio.h>


int arredonda (float x);
int main ()
{
float valor;
    int  valor_inteiro;



    scanf ("%f", &valor);
    printf("%f\n", valor);

    valor_inteiro = arredonda (valor);
printf("%d", valor_inteiro);

}

int arredonda (float valor){
if (valor > 0)
    return (int) (valor + 0.5);
    else
        return (int) (valor - 0.5);
}

