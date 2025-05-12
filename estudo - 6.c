#include <stdio.h>
#define meta 2000

int main()
{
 int pecas_hora, hora=1, producao_total=0;

 for (hora=1; hora<= 12; hora++)
 {
 printf("Hora %d, digite o total de pecas produzidas:\n", hora);
 scanf("%d", &pecas_hora);

 producao_total += pecas_hora;


 if (producao_total>=meta){
 printf("Meta atingida\n");
 break;
 }

 else {
 printf("meta nao atingida\n");
 }
 }

 return 0;
 }

