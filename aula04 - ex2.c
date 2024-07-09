#include <stdio.h>

int verificaCPF(long long cpf) {
  int V1, V2;
  int DV1, DV2;
  int soma1 = 0;
  int soma2 = 0;
  int aux = cpf / 100;
  for (int i = 9; i > 0; i--) {
    int d = aux % 10;
    aux /= 10;
    soma1 += d * i;
    soma2 += d * (i - 1);
  }
  DV1 = soma1 % 11;
  if (DV1 == 10) {
    DV1 = 0;
  }

  soma2 += DV1 * 9;
  DV2 = soma2 % 11;
  if (DV2 == 10) {
    DV2 = 0;
  }
  V1 = cpf / 10 % 10;
  V2 = cpf % 10;

  if (V1 == DV1 && V2 == DV2) {
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  long long cpf;

  printf("Digite o seu CPF: ");
  scanf("%lld", &cpf);

  if (verificaCPF(cpf)) {
    printf("CPF valido\n");
  } else {
    printf("CPF invalido\n");
  }

  return 0;
}
