#include <stdio.h>
void op(int n, int p, int i){
    scanf("%d", &n);
    if(n==0){
        printf("O Produtorio dos numeros pares eh: %d\n",p);
        printf("O somatorio dos numeros impares eh: %d",i);
    }
    else if(n%2==1){
        i+=n;
        op(n,p,i);
    }
    else op(n, p*=n,i);
}
int main(void){
    int p=1, i=0, n;
    printf("Escolha uma sequencia de numeros que tem o 0 como parada\n");
    op(n,p,i);
    return 0;
}