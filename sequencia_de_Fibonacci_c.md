#include <stdio.h>
#include <stdlib.h>

//Autor:João Carlos De Sousa Gurgel Rocha.
/*O código realiza a sequência de Fibonnaci, onde todo número(fora os 2 primeiros[0 e 1])
 é resultado da soma dos números anteriores a ele */


int main()
{
    int n;
    int an = 0, at = 1, pr;

    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("%d ", an);
    }

    if (n > 1)
    {
        printf("%d ", at);
    }

    for (int i = 2; i < n; i++)
    {
        pr = an + at;
        printf("%d ", pr);
        an = at;
        at = pr;
    }

    printf("\n");
    system("pause");
    return 0;
}
