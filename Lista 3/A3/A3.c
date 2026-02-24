#include <stdio.h>
int main(){
int n,x=1;
scanf("%d",&n);
while(x<=n){
    if(x%2==1){
        printf("THUMS THUMS THUMS\n");
    }
    else{
        printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
    }
    x++;
}
return 0;
}