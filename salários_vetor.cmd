/*Vetor que armazena valores salariais mensais e exibe também seu somátorio total

  autor: João Carlos de Sousa Gurgel Rocha.

   GitHub: Joaonuvem / Joãonuvem.

   link: https://github.com/Joaonuvem

   - O código usa um laço de repetição do tipo for e lê 12 valores representando seus
    salários mensais, faz seu somatório e depois usa outro laço for igual para os imprimir.
  */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float s[12], ss = 0;
    int i;

    //viaja pelo vetor.
    for (i = 0; i < 12; i++)
    {
        //O prinf indica o mês e o scanf lê o valor que será atribuido ao respecitivo valor do índice.
        printf("Digite o salário do seu %dº mês:   ", i + 1);
        scanf("%f", &s[i]);

        // faz o somatório dos valores.
        ss = ss + s[i];
    }

    // um espaço para a organização do código.
    printf("\n");

    for (i = 0; i < 12; i++)
    {
        //exibe o mês e o valor guardado no vetor do respectivo ínidice e mês.
        printf("No mês %d seu salário foi %.2f.\n", i + 1, s[i]);
    }

    //linha para a organização.
    printf("--------------------------------------------------------\n");
    
    //exibe o total do somatório.
    printf("Total salarial do mês : %.2f. \n", ss);

    system("pause");

    return (0);
}
