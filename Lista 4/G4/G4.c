#include <stdio.h>
int main(){
int n,a=0,b=0;
scanf("%d",&n);
int x[n],y[n];
while(a<n){
    scanf("%d",&x[a]);
    a++;
}
a=0;
while(a<n){
    scanf("%d",&y[a]);
    if(x[a]!=y[a]){
        b=1;
    }
    a++;
}
if(b==0){
    printf("sim\n");
}
else{
    printf("nao\n");
}
return 0;
}