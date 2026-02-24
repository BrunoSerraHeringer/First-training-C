#include <stdio.h>
int main(){
int n,a=0,b=0,i=0;
scanf("%d",&n);
int vet[n],par[n],impar[n];
while(i<n){
    scanf("%d",&vet[i]);
    if(vet[i]%2==0){
        par[a]=vet[i];
        a++;
    }
    else{
        impar[b]=vet[i];
        b++;
    }
    i++;
}
i=0;
while(i<a-1){
    printf("%d ",par[i]);
    i++;
}
if(a!=0){
    printf("%d\n",par[i]);
    i=0;
}
while(i<b-1){
    printf("%d ",impar[i]);
    i++;
}
if(b!=0){
    printf("%d\n",impar[i]);
}
return 0;
}