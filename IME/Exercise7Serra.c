#include <stdio.h>
//Vamos aplicar o metodo da bolha
int main(){
    int t;
    printf("Insira o tamanho do seu vetor: ");
    scanf("%d",&t);
    int v[t];
    printf("insira os elementos do seu vetor:\n");
    for(int i=0;i<t;i++){
        scanf("%d",&v[i]);
    }
    printf("Seu vetor ordenado eh:\n");
    int a=1, b;
    while(a!=0){
        a=0;
        for(int i=1;i<t;i++){
            if(v[i-1]>v[i]){
                b=v[i];
                v[i]=v[i-1];
                v[i-1]=b;
                a=1;
            }
        }
    }
    for(int i=0;i<t;i++){
        printf("%d ",v[i]);
    }
    return 0;
}