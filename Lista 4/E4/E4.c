#include <stdio.h>
int main(){
int n,x,i=0,a=0;
scanf("%d",&n);
int vet[n];
while(i<n){
    scanf("%d",&vet[i]);
    i++;
}
i=0;
scanf("%d",&x);
while(i<n){
    if(x==vet[i]){
        a=1;
    }
    i++;
}
if(a==1){
    printf("pertence\n");
}
else{
    printf("nao pertence\n");
}
return 0;
}