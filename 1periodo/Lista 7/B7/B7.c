#include <stdio.h>
#include <string.h>
int main(){
    int l,i,j,a,b,andar[];
    scanf("%d",&l);
    int mat[l][1000],vet[l];
    char str[l],x;
    for(i=1;i<=l;i++){
        gets(str);
        vet[i]=strlen(str);
        for(j=0;str[j]!='\0';j++){
            mat[i][j+1]=str[j];
        }
    }
    scanf("%d%d",&a,&b);
    i=0;
    while(scanf("%c",&x)!=EOF){
        if(x=='j'){
            andar[i]=1;
        }
        else{
            andar[i]=0;
        }
        i++;
    }
    for(j=0;j<i;j++){
        if(andar[j]==1&&a!=l){
            a++;
        }
        else if(andar[j]==0&&a!=1){
            a--;
        }
        if(vet[a]<b){
            x=mat[a][vet[a]];
            printf("%d %d %c\n",a,vet[a],x);
        }
        else{
            x=mat[a][b];
            printf("%d %d %c\n",a,b,x);
        }
    }
    return 0;
}