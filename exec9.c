#include <stdio.h>

int main() {
    int p = 0, n = 0, z = 0, c1, c2, i;
    printf("Digite a quantidade de números: ");
    scanf("%d", &c1);
    
    for(c2 = 1; c2 <= c1; c2++){
        printf("Digite um número: ");
        scanf("%d", &i);
        if (i > 0){
            p++;
        }
        else if (i < 0){
            n++;
        }
        else{
            z++;
        }
    }
printf("A Quantidade de Números Positivos Digitados é %d \n", p);
printf("A Quantidade de Números Negativos Digitados é %d \n", n);
printf("A Quantidade de Zeros Digitados é %d \n", z);

    return 0;
}
