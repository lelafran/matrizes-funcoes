#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void preencheMatriz(int m[TAM][TAM], int lim) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            m[i][j] = rand() % (lim + 1);
        }
    }
}

void imprimeMatriz(int m[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[TAM][TAM];
    int maior = -1, linha_maior = 0, coluna_maior = 0;
    int minimax, coluna_minimax;

    srand(time(NULL));

    preencheMatriz(matriz, 100); 
    
    imprimeMatriz(matriz);

  
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    minimax = matriz[linha_maior][0];
    
    coluna_minimax = 0;

    for (int j = 1; j < TAM; j++) {
        if (matriz[linha_maior][j] < minimax) {
            minimax = matriz[linha_maior][j];
            coluna_minimax = j;
        }
    }

    printf("\nMaior elemento da matriz: %d\n", maior);
    
    printf("Linha do maior elemento: %d\n", linha_maior);
    
    printf("Elemento minimax (menor da linha %d): %d\n", linha_maior, minimax);
    
    printf("Posição do minimax: linha %d, coluna %d\n", linha_maior, coluna_minimax);

    return 0;
}