#include <stdio.h>
int main(){
    int n,j,i,a=0,b=0,c=0;
    scanf("%d",&n);
    int vet[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&vet[i][j]);
        }
    }
    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
            b+=vet[i][j];
        }
        if(b>a){
                a=b;
                c=j+1;
            }
        b=0;
    }
    printf("%d\n",c);
    return 0;
}