#include <stdio.h>

int main() {
int c, maior, menor, n;

for(c = 1; c <= 5; c++){
    printf("Digite um número: ");
    scanf("%d", &n);
    
    if(c == 1) { 
            maior = n;
            menor = n;
        } else {
            if(n > maior) {
                maior = n;
            }
            if(n < menor) { 
                menor = n;
            }
       }
   
}
printf("O Maior Valor Digitado foi: %d\n", maior);
printf("O Menor Valor Digitado foi: %d", menor);
    return 0;
}
