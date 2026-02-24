#include <stdio.h>
int main(){
int n,a=1000000,b=1000000,c=1000000;
scanf("%d",&n);
int vet[n];
for(int i=0;i<n;i++){
    scanf("%d",&vet[i]);
    if(a>=vet[i]){
        c=b;
        b=a;
        a=vet[i];
    }
    else if(b>=vet[i]){
        c=b;
        b=vet[i];
    }
    else if(c>=vet[i]){
        c=vet[i];
    }
}
printf("%d\n%d\n",b,c);
return 0;
}