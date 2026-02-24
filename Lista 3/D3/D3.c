#include <stdio.h>
int main(){
int x=1,a=0;
 while(x!=0){
    scanf("%d",&x);
    if(x%2==0){
        a+=x;
    }
 }
 printf("%d\n",a);
return 0;
}