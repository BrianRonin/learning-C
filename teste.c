#include <stdio.h>
#include <string.h>

int main()
{
  int idade = 21;
  char nome[50];

  strcpy(nome, "Brian matias");

  printf("O funcionario %s tem %i anos", nome, idade);
  return 0;
}