#include <stdio.h>
#include <math.h>
int main(){
int g,a=0;
unsigned int b;
unsigned long int t;
scanf("%lu%d",&t,&g);
b=sqrt(t);
while(a<g){
    if(b%2==1){
        b=2*b-1;
    }
    else{
        b--;
    }
    t=b*b;
    printf("%lu\n",t);
    a++;
}
return 0;
}