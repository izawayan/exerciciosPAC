#include <stdio.h>

void menuPrincipal(){
  int opcao;

  do{

    printf("Escolha uma das opçoes abaixo:\n1.Incluir \n2.excluir \n3.Alterar \n4.Consultar \n5.Relatorio \n6.Sair\n");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &opcao);
    if(opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4 || opcao == 5 || opcao == 6){

  printf("A escolha e valida, voce escolheu a opcao %d\n", opcao);
  }
  else{
    printf("A escolha é invalida, tente novamente\n");

    }
  }while(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5 && opcao != 6);
  
}

int main(void) {

  menuPrincipal();
 

  
  
  return 0;
}