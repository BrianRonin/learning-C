#include <stdio.h>
#include <string.h>
#include <locale.h>

void imprimeMeuOvo(int *vetorOvo, int tamanhoDoOvo)
{
  int index;
  for (index = 0; index < tamanhoDoOvo; index++)
  {
    printf("%d ", vetorOvo[index]);
  }
}

void imprimeMatrix(int m[][4], int lenght)
{
  int i1, i2;
  for (i1 = 0; i1 < lenght; i1++)
  {
    for (i2 = 0; i2 < 4; i2++)
    {
      printf("%d ", m[i1][i2]);
    }
    printf("\n");
  }
}

int main()
{
  int vetor[2][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}};

  imprimeMatrix(vetor, 2);
}