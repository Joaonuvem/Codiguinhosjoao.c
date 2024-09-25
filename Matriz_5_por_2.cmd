/* Primeira matriz feita pelo usuário.

   autor: João Carlos de Sousa Gurgel Rocha.

   GitHub: Joãouvem / Joãonuvem.

   link: https://github.com/Joaonuvem

   - a função main ultiliza um laço de repetição para exibir os valores da matriz dada pela função.

   - a função (matriz) preenche uma matriz de números inteiros se 5 espaços em linha e 2 colunas.
*/

#include <stdio.h>
#include <stdlib.h>

// Protótipo da função (matriz).
int matriz(int v[5][2]);

int main()
{

    int vetor[5][2], i, j;

    // Utilização da função.
    matriz(vetor);

    for (i = 0; i < 2; i++)
    {
        // dá um espaço para dividir as duas colunas.
        printf("\n");
        for (j = 0; j < 5; j++)
        {
            // exibe a linha.
            printf(" %d ", vetor[j][i]);
        }
    }
    // da uma pause no código antes do terminal ser fechado.
    system("pause");

    return (0);
}

// corpo da função (matriz)
int matriz(int v[5][2])
{

    int i;
    int j;

    // contador das colunas.
    for (i = 0; i < 2; i++)
    {
        // contador das linhas.
        for (j = 0; j < 5; j++)
        {
            // lê os valores e os incorpora na matriz.
            scanf("%d", &v[j][i]);
        }
    }
    return (v[5][2]);
}
