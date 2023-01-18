#include <stdio.h>
int main(){
    int n,m,i,j,k,l=0,c=0;
    char str[80];
    scanf("%d%d",&n,&m);
    int a[n][80],b[m][80];
    for(i=0;i<n;i++){
        gets(str);
        for(j=0;str[j]!='\0';j++){
            a[i][j]=str[j];
        }
        a[i][j]=0;
    }
    for(i=0;i<m;i++){
        gets(str);
        for(j=0;str[j]!='\0';j++){
            b[i][j]=str[j];
        }
        b[i][j]=0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            l=0;
            for(k=0;a[i][k]!=0||b[j][k]!=0;k++){
                if(a[i][k]!=b[j][k]){
                    l=1;
                }
            }
            if(a[i][k]!=b[j][k]){
                l=1;
            }
            if(l==0){
                c=1;
            }
        }
    }
    printf("%d\n",c);
    return 0;
}