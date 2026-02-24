#include <stdio.h>
void f(int n, int a, int b){
    int c;
    if(n>2){
        c=b;
        b=a;
        a=a+c;
        n--;
        f(n,a,b);
    }
    else if(n==2) printf("Seu numero eh: %d\n",a);
    else if(n==1) printf("Seu numero eh: 1\n");
    else if(n==0) printf("Seu numero eh: 0\n");
    else printf("Essa pisicao eh invalido\n");
}
int main(){
    printf("digite a posicao do numero na sequencia de fibonacci:\n");
    int n, a=1, b=1;
    scanf("%d",&n);
    f(n,a,b);
    return 0;
}