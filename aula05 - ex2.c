#include <stdio.h>

void somaNum(int n){
  int soma = 0;
  
    for(int i = 0; i <= n; i++){
      soma += i; 
    }
  
    printf("A soma dos %d primeiros números é %d\n", n, soma);
}

int main(void) {

  int n;
  printf("Digite um numero natural:");
  scanf("%d", &n);

  somaNum(n);


  return 0;
}