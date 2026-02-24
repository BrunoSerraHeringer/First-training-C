#include <stdio.h>
int main(){
    int i,a,b=0;
    char nome[100],pri[100],ult[100];
    scanf("%[^\n]s",nome);
    for(i=0;nome[i]!=' ';i++){
        pri[i]=nome[i];
    }
    pri[i]='\0';
    printf("%s.",pri);
    for(;nome[i]!='\0';i++){
        if(nome[i]==' '){
            a=i+1;
        }
    }
    for(b=0;a!=i;a++){
        ult[b]=nome[a];
        b++;
    }
    ult[b]='\0';
    printf("%s@unb.br\n",ult);
    return 0;
}