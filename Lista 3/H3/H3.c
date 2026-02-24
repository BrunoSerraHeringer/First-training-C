#include <stdio.h>
int main(){
int t,p,a=0,b=2;
long int c=1,d=1;
scanf("%d",&t);
while(a<t){
    scanf("%d",&p);
    while(b<p&&p%b!=0){
        if(b==p-1){
            p=p/10;
            b=1;
        }
        b++;
    }
    if(p==0||p==2){
        c=c*2+1;
    }
    else{
        c=c*2;
    }
    a++;
}
while(c>1){
    if(c%2==1){
        c=(c-1)/2;
        d=d*2+1;
    }
    else{
        c=c/2;
        d=d*2;
    }
}
while(d>1){
    if(d%2==1){
        d=(d-1)/2;
        printf("S\n");
    }
    else{
        d=d/2;
        printf("N\n");
    }
}
return 0;
}