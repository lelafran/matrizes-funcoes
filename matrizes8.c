#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 4
#define COLUNAS TAMANHO

int calcularProdutoMatrizes(int mat1[][COLUNAS], int lin1, int col1, int mat2[][COLUNAS], int lin2, int col2, int resultado[][COLUNAS]);
void exibirMatriz(int dados[][COLUNAS], int linhas, int colunas);
void duplicarMatriz(int alvo[][COLUNAS], int fonte[][COLUNAS], int linhas, int colunas);

int main() {
    int matrizA[TAMANHO][COLUNAS], matrizB[TAMANHO][COLUNAS], matrizResultado[TAMANHO][COLUNAS];
    int escolha, expoente;

    srand(time(NULL));
    printf("Gerando dados aleatorios nas matrizes...\n\n");

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            matrizA[i][j] = rand() % 10;
            matrizB[i][j] = rand() % 10;
        }
    }

    printf("Matriz A (%dx%d):\n", TAMANHO, TAMANHO);
    exibirMatriz(matrizA, TAMANHO, TAMANHO);

    printf("\nMatriz B (%dx%d):\n", TAMANHO, TAMANHO);
    exibirMatriz(matrizB, TAMANHO, TAMANHO);

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Resultado = A * B\n");
        printf("2 - Resultado = A²\n");
        printf("3 - Resultado = A^n\n");
        printf("0 - Encerrar\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            if (calcularProdutoMatrizes(matrizA, TAMANHO, TAMANHO, matrizB, TAMANHO, TAMANHO, matrizResultado)) {
                printf("\nResultado = A * B:\n");
                exibirMatriz(matrizResultado, TAMANHO, TAMANHO);
            } else {
                printf("\nMultiplicação inválida.\n");
            }

        } else if (escolha == 2) {
            if (calcularProdutoMatrizes(matrizA, TAMANHO, TAMANHO, matrizA, TAMANHO, TAMANHO, matrizResultado)) {
                printf("\nResultado = A²:\n");
                exibirMatriz(matrizResultado, TAMANHO, TAMANHO);
            } else {
                printf("\nErro ao calcular A².\n");
            }

        } else if (escolha == 3) {
            printf("Digite o valor de n: ");
            scanf("%d", &expoente);

            if (expoente < 1) {
                printf("Expoente inválido.\n");
                continue;
            }

            if (expoente == 1) {
                duplicarMatriz(matrizResultado, matrizA, TAMANHO, TAMANHO);
            } else {
                duplicarMatriz(matrizResultado, matrizA, TAMANHO, TAMANHO);
                for (int i = 1; i < expoente; i++) {
                    int auxiliar[TAMANHO][COLUNAS];
                    duplicarMatriz(auxiliar, matrizResultado, TAMANHO, TAMANHO);
                    if (!calcularProdutoMatrizes(auxiliar, TAMANHO, TAMANHO, matrizA, TAMANHO, TAMANHO, matrizResultado)) {
                        printf("\nErro na potenciação.\n");
                        break;
                    }
                }
            }

            printf("\nResultado = A^%d:\n", expoente);
            exibirMatriz(matrizResultado, TAMANHO, TAMANHO);

        } else if (escolha == 0) {
            printf("Encerrando o programa...\n");

        } else {
            printf("Escolha inválida!\n");
        }

    } while (escolha != 0);

    return 0;
}

int calcularProdutoMatrizes(int mat1[][COLUNAS], int lin1, int col1, int mat2[][COLUNAS], int lin2, int col2, int resultado[][COLUNAS]) {
    if (col1 != lin2) {
        return 0;
    }

    for (int i = 0; i < lin1; i++) {
        for (int j = 0; j < col2; j++) {
            resultado[i][j] = 0;
        }
    }

    for (int i = 0; i < lin1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                resultado[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    return 1;
}

void exibirMatriz(int dados[][COLUNAS], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%4d ", dados[i][j]);
        }
        printf("\n");
    }
}

void duplicarMatriz(int alvo[][COLUNAS], int fonte[][COLUNAS], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            alvo[i][j] = fonte[i][j];
        }
    }
}

