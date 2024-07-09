#include <stdio.h>

int anoBissexto(int ano){
  if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
    return 1;
  }else{
    return 0;
  }
}

int main() {
  int dia, mes, ano, datavalida;

  printf("Verificador de ano bissexto\n");
  printf("Insira uma data: ");
  scanf("%d %d %d", &dia, &mes, &ano);

  if(mes == 2){
    if(anoBissexto(ano) == 1){
      if(dia <= 29){
        datavalida = 1;
      }else{
        printf("Data invalida\n");
        return 0;
      }
    }else{
      if(dia <= 28){
        datavalida = 1;      
      }else{
        printf("Data invalida\n");
        return 0;
      }
    }
  }else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
    if(dia <= 31){
      datavalida = 1;
    }else{
      printf("Data invalida\n");
      return 0;
    }
  }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
    if(dia <= 30){
      datavalida = 1;
    }else{
      printf("Data invalida\n");
      return 0;
    }
  }else{
    printf("Mes invalido\n");
    return 0;
  }

  if(datavalida == 1){
    printf("Data valida\n");
  }

  return 0;
}
 