#include <stdio.h>
int main(){
int n,a=0,b=0,c=0;
scanf("%d",&n);
int vet[n],p[n],i[n];
while(a<n){
    scanf("%d",&vet[a]);
    if(vet[a]%2==0){
        p[b]=a;
        b++;
    }
    else{
        i[c]=a;
        c++;
    }
    a++;
}
a=0;
while(a<b-1){
    printf("%d ",p[a]);
    a++;
}
if(b!=0){
    printf("%d\n",p[a]);
    a=0;
}
while(a<c-1){
    printf("%d ",i[a]);
    a++;
}
if(c!=0){
    printf("%d\n",i[a]);
}
return 0;
}