#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void gerarMatrizes(int matriz1[][TAM], int matriz2[][TAM]);
void exibirMatrizes(int matriz1[][TAM], int matriz2[][TAM]);
void adicionarMatrizes(int matriz1[][TAM], int matriz2[][TAM], int resultado[][TAM]);
void diminuirMatrizes(int matriz1[][TAM], int matriz2[][TAM], int resultado[][TAM]);
void escalarMatriz(int matriz[][TAM], int resultado[][TAM], int constante);
void mostrarMatriz(int matriz[][TAM]);

int main() {
    char comando[20];
    int matriz1[TAM][TAM], matriz2[TAM][TAM], resultado[TAM][TAM];
    int matrizesCriadas = 0;
    int constante;

    srand(time(NULL));

    do {
        printf("\n=== MENU ===\n");
        printf("Digite um dos comandos:\n");
        printf("\"gerar\"     - Criar matrizes aleatórias\n");
        printf("\"exibir\"    - Mostrar matrizes\n");
        printf("\"somar\"     - Somar matrizes\n");
        printf("\"subtrair\"  - Subtrair matrizes\n");
        printf("\"multiplicar\" - Multiplicar matriz 1 por constante\n");
        printf("\"sair\"      - Encerrar o programa\n");
        printf("Comando: ");
        scanf("%s", comando);

        if (strcmp(comando, "gerar") == 0) {
            gerarMatrizes(matriz1, matriz2);
            matrizesCriadas = 1;
            printf("Matrizes geradas!\n");

        } else if (strcmp(comando, "exibir") == 0) {
            if (matrizesCriadas) {
                exibirMatrizes(matriz1, matriz2);
            } else {
                printf("Você precisa gerar as matrizes primeiro!\n");
            }

        } else if (strcmp(comando, "somar") == 0) {
            if (matrizesCriadas) {
                adicionarMatrizes(matriz1, matriz2, resultado);
                printf("Resultado da soma:\n");
                mostrarMatriz(resultado);
            } else {
                printf("Você precisa gerar as matrizes primeiro!\n");
            }

        } else if (strcmp(comando, "subtrair") == 0) {
            if (matrizesCriadas) {
                diminuirMatrizes(matriz1, matriz2, resultado);
                printf("Resultado da subtração (segunda - primeira):\n");
                mostrarMatriz(resultado);
            } else {
                printf("Você precisa gerar as matrizes primeiro!\n");
            }

        } else if (strcmp(comando, "multiplicar") == 0) {
            if (matrizesCriadas) {
                printf("Informe a constante: ");
                scanf("%d", &constante);
                escalarMatriz(matriz1, resultado, constante);
                printf("Resultado da multiplicação por %d:\n", constante);
                mostrarMatriz(resultado);
            } else {
                printf("Você precisa gerar as matrizes primeiro!\n");
            }

        } else if (strcmp(comando, "sair") == 0) {
            printf("Encerrando o programa. Tchau!\n");

        } else {
            printf("Comando inválido!\n");
        }

    } while (strcmp(comando, "sair") != 0);

    return 0;
}

void gerarMatrizes(int matriz1[][TAM], int matriz2[][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz1[i][j] = rand() % 100;
            matriz2[i][j] = rand() % 100;
        }
    }
}

void exibirMatrizes(int matriz1[][TAM], int matriz2[][TAM]) {
    printf("Matriz 1:\n");
    mostrarMatriz(matriz1);
    printf("\nMatriz 2:\n");
    mostrarMatriz(matriz2);
}

void mostrarMatriz(int matriz[][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void adicionarMatrizes(int matriz1[][TAM], int matriz2[][TAM], int resultado[][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void diminuirMatrizes(int matriz1[][TAM], int matriz2[][TAM], int resultado[][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = matriz2[i][j] - matriz1[i][j];
        }
    }
}

void escalarMatriz(int matriz[][TAM], int resultado[][TAM], int constante) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = matriz[i][j] * constante;
        }
    }
}

