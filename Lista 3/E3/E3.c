#include <stdio.h>
int main(){
int n,a=0;
scanf("%d",&n);
while(a<n){
    int b=1;
    a++;
    while(b<a){
        printf("%02d ",a);
        b++;
    }
    printf("%02d\n",a);
}
printf("\n");
a=0;
while(a<n){
    int b=1;
    a++;
    while(b<a){
        printf("%02d ",b);
        b++;
    }
    printf("%02d\n",b);
}
return 0;
}