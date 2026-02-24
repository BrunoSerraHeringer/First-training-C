#include <stdio.h>
int contarEstrelas(int qtd, int abertura){
    int x,i,j=0;
    for(i=0;i<qtd;i++){
        scanf("%d",&x);
        if(x*abertura>=40000000){
            j++;
        }
    }
    return j;
}