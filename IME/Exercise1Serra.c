#include <stdio.h>
int main(){
    int n, i=2;
    printf("escolha um numero para receber a sequencia de numeros pares menores ao seu numero\n");
    scanf("%d", &n);
    printf("sua sequencia é:\n");
    while(i<n){
        printf("%d\n",i);
        i+=2;
    }
    return 0;
}