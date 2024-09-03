#include <stdio.h>
#include <locale.h>

int main()
{

    //autor : João Carlos de Sousa Gurgel Rocha.
    /*código para checagem de uma sêquencia de números primos determinados pelo usuário
     com laços de repetição do tipo "for", com "if's" encadeados.*/

    setlocale(LC_ALL, "portuguese");

    int x, y, contador, contador2, primo;

    printf("Digite o começo e o fim da sua sequência:\n\n");

    scanf("%d%d", &x, &y);

    if (x > y || x < 0)
    {
        printf("\nSequência inválida.\n");
    }
    else
    {
        for (contador = x; contador <= y; contador++)
        {
            if (contador == 1)
            {
                primo = 0;
            }
            else
            {
                primo = 1;
            }
            for (contador2 = 2; contador2 < contador; contador2++)
            {
                if (contador % contador2 == 0)
                {
                    primo = 0;
                    break;
                }
            }
            if (primo)
            {
                printf(" %d ", contador);
            }
        }
    }

    return 0;
}
