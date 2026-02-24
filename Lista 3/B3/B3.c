#include <stdio.h>
int main(){
int n,x,y=2,z;
scanf("%d",&n);
if(n==1){
    scanf("%d",&x);
    printf("%d\n",x);
}
scanf("%d",&x);
while(y<=n){
    scanf("%d",&z);
    y++;
    while(y<=n&&z>x){
        scanf("%d",&x);
        y++;
    }
}
if(x>=z){
    printf("%d\n",x);
}
else{
    printf("%d\n",z);
}
return 0;
}