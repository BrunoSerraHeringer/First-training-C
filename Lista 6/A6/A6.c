#include <stdio.h>
int faz_conta_direito(int parcelas, char op){
    int x,p;
    scanf("%d",&x);
    for(int i=1;i<parcelas;i++){
        scanf("%d",&p);
        if(op=='+'){
            x=x+p;
        }
        else{
            x=x-p;
        }
    }
    return x;
}
