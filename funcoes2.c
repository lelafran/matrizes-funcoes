#include <stdio.h>

int ultimos_digitos_iguais (numero1, numero2)
{
    int flag = 1;
    while(numero1>0 && numero2>0)
    {
        if ((numero1 % 10) != (numero2 % 10))
            flag = 0;
        numero1 = numero1/10;
        numero2 = numero2/10;
    }
    return flag;
}

int main ()
{
    printf("%d", ultimos_digitos_iguais(1245, 1243));
}
