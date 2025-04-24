#include<stdio.h>
int main ()
{
    int distancia, tempo_minutos, tempo_segundos, tempototal_segundos, ritmo_minutos, ritmo_segundos, resto_minutos;

    printf("Digite a sua distancia percorrida em kilometros:");
    scanf("%d", &distancia);

    printf("Digite o tempo em que voce percorreu em minutos:");
    scanf("%d", &tempo_minutos);

    printf("Digite o tempo em que voce percorreu em segundos:");
    scanf("%d", &tempo_segundos);

    ritmo_minutos = (tempo_minutos/distancia);
    resto_minutos = (tempo_minutos%distancia);
    tempototal_segundos = (tempo_segundos + resto_minutos*60);
    ritmo_segundos = (tempototal_segundos/distancia);

    printf("Seu ritmo foi de %d : %d", ritmo_minutos, ritmo_segundos);

    return 0;

}
