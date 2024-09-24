/*função armazenamento de valores do tipo Float em um vetor de 20 espaços.
  
  código por: João Carlos de Sousa Gurgel rocha.

  git hub:Joãouvem.
  
  Link: https://github.com/Joaonuvem

  - A função código main declara duas variáveis que serão usados pela função (funcao_aux_vetor) e usa um laço
  de repetição for para exibir os valores atribuidos pela função anteriormente mencionada.
  
  -A função (funcao_aux_vetor) recebe os valores que são armazenados nos 20 espaços do vetor atravez de um laço
  de repetição for. */

#include <stdio.h>

float funcao_aux_vetor(float v[20]);

int main()
{
    float vetor[20];
    int i;

    funcao_aux_vetor(vetor);

    for (i = 0; i < 20; i++)
    {
        printf("O índice %d, recebeu o valor %.2f\n", i, vetor[i]);
    }

    return 0;
}

float funcao_aux_vetor(float v[20])
{
    int i;
    
    for (i = 0; i < 20; i++)
    {

        printf("Digite valor que será armazenado no índice %d.\t", i);
        scanf("%f", &v[i]);
    }
    return (v[20]);
}