#include<stdio.h>
int main ()
{
    float base, altura, largura, perimetro_total, perimetro, area;

    printf("Digite a base do quarto (em metros):");
    scanf("%f", &base);

    printf("Digite a altura do quarto (em metros):");
    scanf("%f", &altura);

    perimetro_total = (2* (base + altura));
    largura = (0.8);
    perimetro = (perimetro_total - largura);
    area = (base * altura);

    printf(" O perimetro total do quarto eh: %f", perimetro_total);
    printf(" O perimetro do quarto eh: %f", perimetro);
    printf (" A area do quarto eh: %f", area);


    return 0;

}
