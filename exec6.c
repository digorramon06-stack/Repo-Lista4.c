#include <stdio.h>

int main() {
    int senha;
    printf("Digite a Senha: ");
    scanf("%d", &senha);

    while (senha != 1234) {
        printf("Senha Incorreta! \n");
        printf("Digite a Senha: ");
        scanf("%d", &senha);
    }

    printf("ACESSO LIBERADO!\n");

    return 0;
}
