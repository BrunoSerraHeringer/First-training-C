#include <stdio.h>
int main(){
int n,a=0,y=0;
scanf("%d",&n);
int x[n];
while(a<n){
    scanf("%d",&x[a]);
    y+=x[a];
    a++;
}
a=0;
y/=n;
while(a<n){
    if(y<x[a]){
        printf("%d ",x[a]);
    }
    a++;
}
a=0;
while(a<n&&y==x[a]){
    a++;
}
if(a==n){
    printf("0");
}
printf("\n");
return 0;
}