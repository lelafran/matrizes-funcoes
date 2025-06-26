#include <stdio.h>

int main()
{
    FILE *arquivo;
    float numero, soma = 0.0;


    arquivo = fopen("teste2.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo teste2.txt.\n");
        return 1;
    }


    while (fscanf(arquivo, "%f", &numero) == 1)
    {
        soma += numero;
    }

    fclose(arquivo);


    printf("A soma dos valores do arquivo eh: %.2f\n", soma);

    return 0;
}
