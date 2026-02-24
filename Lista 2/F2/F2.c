#include <stdio.h>
int main(){
int b,t;
scanf("%d%d",&b,&t);
if(b>=0&&b<=160&&t>=0&&t<=160){
    if(b+t==160){
        printf("0\n");
    }
    else if(b+t<160){
        printf("2\n");
    }
    else{
        printf("1\n");
    }
}
else{
    printf("esses valores nao sao aceitos");
}
return 0;
}