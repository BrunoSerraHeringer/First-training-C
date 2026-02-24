#include <stdio.h>
int main(){
int p,v,m1,m2,m3,m4,m5,m6;
scanf("%d",&p);
scanf("%d",&v);
if(p>=0&&p<=1000000&&v>=0&&p<=1000000&&p<=v){
m1=(v-p)/500;
m2=(v-p-500*m1)/100;
m3=(v-p-500*m1-100*m2)/50;
m4=(v-p-500*m1-100*m2-50*m3)/10;
m5=(v-p-00*m1-100*m2-50*m3-10*m4)/5;
m6=v-p-00*m1-100*m2-50*m3-10*m4-5*m5;
printf("%d\n%d\n%d\n%d\n%d\n%d\n",m1,m2,m3,m4,m5,m6);
}
else{
printf("esses valores nao sao aceitos");
}
return 0;
}