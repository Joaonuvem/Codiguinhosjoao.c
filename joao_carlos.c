/*fun��o armazenamento de valores do tipo Float em um vetor de 20 espa�os.
  
  c�digo por: Jo�o Carlos de Sousa Gurgel rocha.

  git hub:Jo�ouvem.
  
  Link: https://github.com/Joaonuvem

  - A fun��o c�digo main declara duas vari�veis que ser�o usados pela fun��o (funcao_aux_vetor) e usa um la�o
  de repeti��o for para exibir os valores atribuidos pela fun��o anteriormente mencionada.
  
  -A fun��o (funcao_aux_vetor) recebe os valores que s�o armazenados nos 20 espa�os do vetor atravez de um la�o
  de repeti��o for. */

#include <stdio.h>

float funcao_aux_vetor(float v[20]);

int main()
{
    float vetor[20];
    int i;

    funcao_aux_vetor(vetor);

    for (i = 0; i < 20; i++)
    {
        printf("O �ndice %d, recebeu o valor %.2f\n", i, vetor[i]);
    }

    return 0;
}

float funcao_aux_vetor(float v[20])
{
    int i;
    
    for (i = 0; i < 20; i++)
    {

        printf("Digite valor que ser� armazenado no �ndice %d.\t", i);
        scanf("%f", &v[i]);
    }
    return (v[20]);
}