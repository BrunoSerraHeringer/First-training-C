#include <stdio.h>
int main(){
    int n,m,i,j,k,l,c=0;
    scanf("%d%d\n",&n,&m);
    char a[n][80],b[m][80];
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    for(i=0;i<m;i++){
        scanf("%s",b[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            l=1;
            for(k=0;a[i][k]!='\0'&&b[j][k]!='\0'&&l==1;k++){
                if(a[i][k]!=b[j][k]){
                    l=0;
                }
            }
            if(a[i][k]!='\0'||b[j][k]!='\0'){
                l=0;
            }
            if(l==1){
                c=1;
            }
        }
    }
    printf("%d\n",c);
    return 0;
}