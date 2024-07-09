#include <stdio.h>
#include <math.h>

int calculaDist(int qtd){
  float x1, y1, x2, y2, dist;
  
  for(int i = 0; i<qtd; i++){
    printf("Digite x1 e x2 e y1 e y2");
    scanf("%f %f %f %f", &x1, &x2, &y1, &y2);
    dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("Distancia: %f", dist);
  }
}

int main(){
  int qtd;
  printf("Digite a quantidade de itens a ser informado");
  scanf("%d", &qtd);
  
  calculaDist(qtd);
    
  return 0;
}