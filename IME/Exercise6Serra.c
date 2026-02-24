#include <stdio.h>
int main(){
    int n,a=1,b=1,c;
    printf("digite a posicao do numero na sequencia de fibonacci:\n");
    scanf("%d",&n);
    while(n>2){
        c=b;
        b=a;
        a=a+c;
        n--;
    }
    if(n<0) printf("Essa pisicao eh invalido\n");
    else if(n==0) printf("Seu numero eh: 0\n");
    else printf("Seu numero eh: %d\n",a);
    return 0;
}