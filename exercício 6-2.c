#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define LIM 100
#define TAM 50

void preencheVetor(int v[], int n, int lim);
void imprimir_cresceVetor (int v[], int tamanho);
void imprimir_decresceVetor (int v[], int tamanho);

int main ()
{
    srand(time(NULL));
    int vetor [TAM];
    preencheVetor (vetor, TAM, LIM);


    imprimir_cresceVetor(vetor, TAM);
    printf("\n");
    imprimir_decresceVetor(vetor, TAM);

    return 0;
}



void preencheVetor(int v[], int n, int lim)
{
    for (int i=0; i<n; i++)
    {
        v[i]= rand()%(lim +1);
    }

}
void imprimir_cresceVetor (int v[], int tamanho)
{
    printf("Ordem direta:\n");
    for (int i = 0; i < tamanho ; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}
void imprimir_decresceVetor (int v[], int tamanho)
{
    printf("Ordem inversa:\n");
    for (int i = tamanho - 1; i >= 0; i--)
    {
        printf("%d ", v[i]);

    }
    printf("\n");
}


