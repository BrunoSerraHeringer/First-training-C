#include <stdio.h>
int main(){
int n=1,a=0,b=0;
while(n!=0){
    scanf("%d",&n);
    if(n%2==0){
        a+=n;
    }
    if(n%2==1){
        b+=n;
    }
}
printf("%d %d",a,b);
return 0;
}