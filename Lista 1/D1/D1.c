#include<stdio.h>
int main(){
double h,m,s;
scanf("%lf",&h);
m=60*h;
s=3600*h;
printf("%.0lf\n%.0lf\n",m,s);
return 0;
}