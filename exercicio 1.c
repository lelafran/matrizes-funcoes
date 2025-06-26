#include <stdio.h>
#include <stdlib.h>

#define TAM_LINHA 200

int main()
{
    FILE *arquivo;
    char linha[TAM_LINHA];

    // Abre o arquivo para leitura
    arquivo = fopen("teste1.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo teste1.txt.\n");
        return 1;
    }

    // Lê e imprime linha por linha
    printf("Conteúdo do arquivo:\n\n");
    while (fgets(linha, TAM_LINHA, arquivo) != NULL)
    {
        printf("%s", linha);  // já inclui \n, não precisa colocar outro
    }

    fclose(arquivo);
    return 0;
}
