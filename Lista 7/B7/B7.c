#include <stdio.h>
#include <string.h>
int main(){
    int l,i,j;
    scanf("%d\n",&l);
    int vet[l+1];
    char str[l+1][1000],x;
    for(i=1;i<=l;i++){
        gets(str[i]);
        vet[i]=strlen(str[i]);
    }
    scanf(" %d%d",&i,&j);
    while(scanf(" %c",&x)!=EOF){
        if(x=='j'&&i<l){
            i++;
        }
        else if(x=='k'&&i>1){
            i--;
        }
        if(vet[i]<j){
            x=str[i][vet[i]-1];
            printf("%d %d %c\n",i,vet[i],x);
        }
        else{
            x=str[i][j-1];
            printf("%d %d %c\n",i,j,x);
        }
    }
    return 0;
}