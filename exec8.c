#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("1 - Opção 1\n");
        printf("2 - Opção 2\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

    } while (opcao != 0);

    return 0;
}
