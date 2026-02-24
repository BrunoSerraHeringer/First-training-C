#include <stdio.h>
int main(){
double x,x2,p1,p2,x1;
scanf("%lf",&x);
scanf("%lf",&x2);
scanf("%lf%lf",&p1,&p2);
if(x>=0&&x<=1000000000&&x2>=0&&x2<=1000000000&&p1>0&&p1<100&&p2>0&&p2<100){
x1=((p1+p2)*x-x2*p2)/p1;
printf("%lf\n",x1);
}
else{
printf("esses valores nao sao aceitos");
}
return 0;
}