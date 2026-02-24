#include <stdio.h>
int main(){
int l,m,a=0,b=0;
scanf("%d%d",&l,&m);
while(a<l){
    while(b<m-1){
        printf("[%03d,%03d]",a,b);
        b++;
    }
    printf("[%03d,%03d]\n",a,b);
    b=0;
    a++;
}
return 0;
}