#include<stdio.h>
int main ()
{

    float n1, n2, n3,
          media;
    int frequencia;

    printf("Digite suas tres notas: ");
    scanf("%f %f %f", &n1,&n2,&n3);

    printf("Digite sua frequencia:");
    scanf("%d", &frequencia);

    media = (n1+n2+n3)/3;

    if((media > 8.0) && (frequencia >= 75))
        printf("O estudante foi aprovado com distincao pois sua media foi %f e sua frequencia foi %d%%", media, frequencia);

    else if((media >= 8.0) && (frequencia >= 75))
        printf("O estudante foi aprovado direto pois sua media foi %f e sua frequencia foi %d%%", media, frequencia);

    else if((media >=4.0) && (media <6.0) && (frequencia >= 75)
            ||
            (media >= 6) && (frequencia < 75 )
            ||
            (media >= 4) && (frequencia > 50) && (frequencia < 75))
        printf("O estudante vai pára final pois sua media foi %f e sua frequencia foi %d%%", media , frequencia);

    else
        printf("O estudante foi reprovado direto pois sua media foi %f e sua frequencia foi %d%%", media, frequencia);

    return 0;
}
