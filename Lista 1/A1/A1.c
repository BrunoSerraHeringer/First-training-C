#include <stdio.h>
int main(){

double p1, p2, p3, t, l1, l2, l3, l4, l5, ml, mf;

scanf("%lf %lf %lf", &p1, &p2, &p3);
scanf("%lf", &t);
scanf("%lf %lf %lf %lf %lf", &l1, &l2, &l3, &l4, &l5);

if(p1>=0 && p1<=10 && p2>=0 && p2<=10 && p3>=0 && p3<=10 && t>=0 && t<=10 &&l1>=0 && l1<=1 && l2>=0 && l2<=1 && l3>=0 && l3<=1 && l4>=0 && l4<=1 && l5>=0 && l5<=1)
{
ml = (l1+l2+l3+l4+l5)/10;
mf = (p1+ 2*p2+ 3*p3+ 2*t)/8 + ml;

printf("%lf\n",mf);
}
else{
printf("esses valores nao sao aceitos");
}

return 0;
}