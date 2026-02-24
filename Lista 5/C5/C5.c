#include <stdio.h>
int main(){
    int n,i,a,b=0;
    char str[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",str);
        for(a=0;str[a]!='\0';a++){
        }
        if(b<a){
            b=a;
        }
        a=0;
    }
    printf("%d\n",b);
    return 0;
}