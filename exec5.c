#include <stdio.h>

int main() {

int n, t = 0, ps = 0;
printf("Informe o número:\n");
scanf("%d", &n);
while (n != 0){
    t++;
if(n > 0){
    ps++; 
}
printf("Informe o numero: \n");
scanf("%d", &n);
}
printf("Total: %d\n", t);
printf("Positivos: %d\n", ps);
return 0;
}
