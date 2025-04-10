#include <stdio.h>

int main()
{
    int n;
    printf("Digite um valor inteiro n: ");
    scanf("%d", &n);


    int i = 1;
    while (i <= 200)
    {
        if (i % n == 3 && i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;

}
