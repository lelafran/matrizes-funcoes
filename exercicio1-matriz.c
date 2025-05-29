#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[5][5], transposta[5][5];
    int i, j;

    srand(time(NULL));


    printf("Matriz original (5x5):\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {

            matriz[i][j] = rand()% 100;
            printf("%2d ", matriz[i][j]);
        }

        printf("\n");

    }


    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("Matriz transposta (5x5):\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {


            printf("%2d ", transposta[i][j]);
        }

        printf("\n");

    }
    return 0;
}

