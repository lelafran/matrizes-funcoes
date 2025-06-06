#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_ESTUDANTES 5
#define TOTAL_QUESTOES 10
#define TOTAL_COLUNAS TOTAL_QUESTOES

void gerarRespostas(char respostas[][TOTAL_COLUNAS], int linhas, int colunas);
void exibirRespostas(char matriz[][TOTAL_COLUNAS], int linhas, int colunas);
void corrigirProva(char gabarito[], char respostas[][TOTAL_COLUNAS], int linhas, int colunas, int notas[]);

int main() {
    char gabaritoOficial[TOTAL_QUESTOES];
    char respostasAlunos[TOTAL_ESTUDANTES][TOTAL_COLUNAS];
    int resultados[TOTAL_ESTUDANTES] = {0};
    char alternativas[4] = {'a', 'b', 'c', 'd'};
    
    srand(time(NULL));

    printf("Gabarito Oficial:\n");
    for (int i = 0; i < TOTAL_QUESTOES; i++) {
        gabaritoOficial[i] = alternativas[rand() % 4];
        printf("Questão %2d: %c\n", i + 1, gabaritoOficial[i]);
    }

    printf("\nRespostas dos Estudantes:\n");
    gerarRespostas(respostasAlunos, TOTAL_ESTUDANTES, TOTAL_QUESTOES);
    exibirRespostas(respostasAlunos, TOTAL_ESTUDANTES, TOTAL_QUESTOES);
    corrigirProva(gabaritoOficial, respostasAlunos, TOTAL_ESTUDANTES, TOTAL_QUESTOES, resultados);

    printf("\nResultados Finais:\n");
    for (int i = 0; i < TOTAL_ESTUDANTES; i++) {
        printf("Estudante %d: %d pontos\n", i + 1, resultados[i]);
    }

    return 0;
}

void gerarRespostas(char respostas[][TOTAL_COLUNAS], int linhas, int colunas) {
    char alternativas[4] = {'a', 'b', 'c', 'd'};
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            respostas[i][j] = alternativas[rand() % 4];
        }
    }
}

void exibirRespostas(char matriz[][TOTAL_COLUNAS], int linhas, int colunas) {
    printf("         ");
    for (int j = 0; j < colunas; j++) {
        printf("Q%-2d ", j + 1);
    }
    printf("\n");

    for (int i = 0; i < linhas; i++) {
        printf("Estudante %d: ", i + 1);
        for (int j = 0; j < colunas; j++) {
            printf("%c   ", matriz[i][j]);
        }
        printf("\n");
    }
}

void corrigirProva(char gabarito[], char respostas[][TOTAL_COLUNAS], int linhas, int colunas, int notas[]) {
    for (int i = 0; i < linhas; i++) {
        notas[i] = 0;
        for (int j = 0; j < colunas; j++) {
            if (respostas[i][j] == gabarito[j]) {
                notas[i]++;
            }
        }
    }
}


