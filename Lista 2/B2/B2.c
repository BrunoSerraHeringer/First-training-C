#include <stdio.h>
int main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>=0&&a<=1&&b>=0&&b<=1&&c>=0&&c<=1){
    if(a!=b&&a!=c){
        printf("A");
    }
    else if(b!=a&&b!=c){
        printf("B");
    }
    else if(c!=a&&c!=b){
        printf("C");
    }
    else{
        printf("empate");
    }
}
else{
    printf("sao sao aceitos valores iguais a 0 ou 1");
}
return 0;
}