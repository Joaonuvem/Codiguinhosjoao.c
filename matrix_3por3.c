/* matriz 3 por 3 invertida.

   autor: João Carlos de Sousa Gurgel Rocha.

   GitHub: Joaonuvem / Joãonuvem.

   link: https://github.com/Joaonuvem

   - o código armazena nove valores em um vetor 3x3 e depois os impreme de forma invertida.
*/


#include <stdio.h>
#include <locale.h>

int main()
{

    int j, i, vetor[3][3];


    //armazena os valores.
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &vetor[j][i]);
        }
    }

    printf("\n");


    //exibe os valores anteriormente armazenados em ordem inversa.
    for (i = 2; i >= 0; i--)
    {
        printf("\n");
        for (j = 2; j >= 0; j--)
        {
            printf("%d ", vetor[j][i]);
        }
    }

    return (0);
}
