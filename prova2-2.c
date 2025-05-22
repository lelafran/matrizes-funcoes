#include<stdio.h>
#include<math.h>

void converteHora(int total_seg, int *hora, int *min, int *seg);

int main ()
{
    int total_seg, hora, min, seg;

    printf("Digite o total de segundos:");
    scanf("%d", &total_seg);

    converteHora(total_seg, &hora, &min, &seg);

    printf("%.2d:%.2d:%.2d", hora,min,seg);


    return 0;

}

void converteHora(int total_seg, int *hora, int *min, int *seg)
{
    *hora = (total_seg/3600);
    *min = (total_seg % 3600/60);
    *seg = (total_seg %60);

}
