#include <stdio.h>

int main() {
    int n, s = 0;
    printf("Digite um Número: ");
    scanf("%d", &n);
         s = s + n;
    
    if(s > 100){
          printf("A Soma dos valores é de %d, ultrapassando 100!", s);
    }
    else{
    while (s < 100) {
        printf("Digite um Número: ");
        scanf("%d", &n);
        s = s + n;
    }
     printf("A Soma dos valores é de %d, ultrapassando 100!", s);

}

    return 0;
}
