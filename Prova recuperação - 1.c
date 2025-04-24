#include<stdio.h>
#include<math.h>
int main()
{
    float altura, largura, area;
    int litro;


    printf("Digite a altura em metros:");
    scanf("%f", &altura);

    printf("Digite a largura em metros:");
    scanf("%f", &largura);

    area = (altura * largura);
    litro = ceil (area/2);

    printf("A area eh: %f", area);

    printf("A quantidade de tinta necesaria em litro eh: %d", litro);



    return 0;


}
