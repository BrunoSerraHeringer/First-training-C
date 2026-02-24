#include <stdio.h>
int main(){
int n,x,y=2,z,a=0;
scanf("%d",&n);
if(n!=0){
    scanf("%d",&x);
    a=x;
}
while(y<=n){
    scanf("%d",&z);
    a+=z;
    y++;
    while(y<=n&&z>x){
        scanf("%d",&x);
        a+=x;
        y++;
    }
}
printf("%d\n",a);
return 0;
}