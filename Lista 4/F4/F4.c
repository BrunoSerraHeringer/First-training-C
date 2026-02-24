#include <stdio.h>
int main(){
int n,d=0;
scanf("%d",&n);
int a[n],b[n],c[n];
while(d<n){
    scanf("%d",&a[d]);
    d++;
}
d=0;
while(d<n){
    scanf("%d",&b[d]);
    c[d]=a[d]+b[d];
    d++;
}
d=0;
while(d<n-1){
    printf("%d ",c[d]);
    d++;
}
printf("%d\n",c[d]);
return 0;
}