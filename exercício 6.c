#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define LIM 100
#define TAM 50

void preencheVetor(int v[], int n, int lim);

int main ()
{
    srand(time(NULL));
    int vetor [TAM];
    preencheVetor (vetor, TAM, LIM);
    for (int i=0; i<TAM; i++)
    {
        printf("%d ", vetor [i]);

    }

    return 0;
}



void preencheVetor(int v[], int n, int lim)
{
for (int i=0; i<n; i++)
    {
     v[i]= rand()%(lim +1);
    }

}
