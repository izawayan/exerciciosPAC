#include <stdio.h>

void verificaSal(float salario, int qtd) {
    float maior = 0;

    for (int i = 0; i < qtd; i++) {
        if (salario > maior) {
            maior = salario;
        }
    }

    printf("O maior salario entre os funcionarios eh: %.2f\n", maior);
}

int main(void) {
    float salario;
    int matricula, qtd;

    printf("Digite o numero de funcionarios da empresa: ");
    scanf("%d", &qtd);

    printf("Entre com sua matricula e salario: ");
    scanf("%d %f", &matricula, &salario);

    verificaSal(salario, qtd);

    return 0;
}
