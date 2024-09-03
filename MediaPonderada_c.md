#include <stdio.h>

//Autor: Joao Carlos de Sousa Gurgel Rocha.


int main()
{
    float n1, n2, mv = 0, mf = 0,m=0;

    for (int i = 1; i <= 10; i++)
    {
        scanf("%f%f", &n1, &n2);

        if (i % 2 == 0)
        {
            m = ((n1 * 7) + (n2 * 3)) / 10;
        }
        else
        {
            m = ((n1 * 6) + (n2 * 4)) / 10;
        }
       printf("%f\n",m);
       
        mv = mv + m;
    }

    mf = mv / 10;
    printf("\n%f\n", mf);

    return 0;
}
