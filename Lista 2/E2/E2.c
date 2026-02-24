#include <stdio.h>
int main(){
int a,b;
scanf("%d%d",&a,&b);
if(a>=0&&a<=4&&b>=0&&b<=4){
    if(a==0&&b==0){
        printf("empate\n");
    }
    else if(a==0&&b==1){
        printf("B\n");
    }
    else if(a==0&&b==2){
        printf("A\n");
    }
    else if(a==0&&b==3){
        printf("A\n");
    }
    else if(a==0&&b==4){
        printf("B\n");
    }
    else if(a==1&&b==0){
        printf("A\n");
    }
    else if(a==1&&b==1){
        printf("empate\n");
    }
    else if(a==1&&b==2){
        printf("B\n");
    }
    else if(a==1&&b==3){
        printf("B\n");
    }
    else if(a==1&&b==4){
        printf("A\n");
    }
    else if(a==2&&b==0){
        printf("B\n");
    }
    else if(a==2&&b==1){
        printf("A\n");
    }
    else if(a==2&&b==2){
        printf("empate\n");
    }
    else if(a==2&&b==3){
        printf("A\n");
    }
    else if(a==2&&b==4){
        printf("B\n");
    }
    else if(a==3&&b==0){
        printf("B\n");
    }
    else if(a==3&&b==1){
        printf("A\n");
    }
    else if(a==3&&b==2){
        printf("B\n");
    }
    else if(a==3&&b==3){
        printf("empate\n");
    }
    else if(a==3&&b==4){
        printf("A\n");
    }
    else if(a==4&&b==0){
        printf("A\n");
    }
    else if(a==4&&b==1){
        printf("B\n");
    }
    else if(a==4&&b==2){
        printf("A\n");
    }
    else if(a==4&&b==3){
        printf("B\n");
    }
    else{
        printf("empate\n");
    }
}
else{
    printf("esses valores nao sao aceitos\n");
}
return 0;
}