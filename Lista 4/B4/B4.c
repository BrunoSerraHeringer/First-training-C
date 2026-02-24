#include <stdio.h>
int main(){
int n,a=0;
scanf("%d",&n);
int vet[n];
scanf("%d",&vet[0]);
int b=vet[0];
for(int i=1;i<n;i++){
    scanf("%d",&vet[i]);
    if(b>vet[i]){
        b=vet[i];
        a=i;
    }
}
printf("%d\n",a);
return 0;
}