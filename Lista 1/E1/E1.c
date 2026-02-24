#include <stdio.h>
int main(){
int x,y,a,b,c,d,e,f;
scanf("%d",&x);
a=x/100000;
b=(x-a*100000)/10000;
c=(x-a*100000-b*10000)/1000;
d=(x-a*100000-b*10000-c*1000)/100;
e=(x-a*100000-b*10000-c*1000-d*100)/10;
f=x-a*100000-b*10000-c*1000-d*100-e*10;
y=11-((2*f+3*e+4*d+5*c+6*b+7*a)%11);
if(x>=1&&x<=999998){
printf("%d\n",y);
}
else {
printf("esse valor nao eh aceito");
}
return 0;
}