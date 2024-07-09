#include <stdio.h>

int soma(int n){
  int soma = 0;
  int cont = 0;
  while(cont<=n){
    soma  += cont;
    cont++;
  }
  printf("A soma dos %d primeiros números é %d", n, soma);
}

int main(void) {

  int n;
  printf("Digite um numero natural:");
  scanf("%d", &n);

  soma(n);

  
  return 0;
}