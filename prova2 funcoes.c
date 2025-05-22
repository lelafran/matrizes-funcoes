#include<stdio.h>
#include<math.h>


int calcula_raizes(float a, float b, float c, float *x1, float *x2);

int main()
{
    float a, b, c;
    float x1, x2;
    int resultado;

    printf ("Digite os valores de a, b e c:");
    scanf("%f %f %f", &a, &b, &c);

    resultado = calcula_raizes(a,b,c,&x1,&x2);

    if (resultado == 2)
    {
        printf("Raizes são %.2f e %.2f\n", x1, x2);
    }
    else if (resultado == 1)
    {
        printf("Uma raiz %.2f\n", x1);
    }
    else
    {
        printf("Sem raiz real\n");
    }

    return 0;
}

int calcula_raizes(float a, float b, float c, float *x1, float *x2)
{


    if (a==0)
    {
        return 0;
    }

    float delta = b*b -4*a*c;

    if (delta>0)
    {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);

        return 2;
    }
    else if (delta==0)
    {
        *x1 = (-b / (2*a));
        *x1 = *x2;

        return 1;
    }
    else
    {
        return 0;
    }
}

