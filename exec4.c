#include <stdio.h>

int main() {

int i, numero, maiorQ = 0;

for (i = 1; i <= 10; i++){
    printf("Digite um numero: ");
   scanf("%d", &numero);
    if(numero > 50){
        maiorQ++;
    }   
}
printf("Maiores: %d\n", maiorQ);
return 0;
}
