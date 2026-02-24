#include <stdio.h>
int main(){
int e1,e2,e3,a,b,c,d,x,y;
scanf("%d%d%d",&e1,&a,&b);
scanf("%d%d%d",&e2,&c,&d);
scanf("%d%d%d",&e3,&x,&y);
if(e1>=0&&e1<=1&&e2>=0&&e2<=1&&e3>=0&&e3<=1&&a>=0&&a<=10&&b>=0&&b<=10&&c>=0&&c<=10&&d>=0&&d<=10){
    if(e1==0&&(a+b)%2==0){
        if(e2==0&&(c+d)%2==0){
            if(e3==0&&(x+y)%2==0){
                printf("A");
            }
            else if(e3==0&&(x+y)%2==1){
            printf("C");
            }
            else if(e3==1&&(x+y)%2==1){
                printf("A");
            }
            else{
                printf("C");
            }
        }
        else if(e2==0&&(c+d)%2==1){
            if(e3==0&&(x+y)%2==0){
                printf("A");
            }
            else if(e3==0&&(x+y)%2==1){
            printf("D");
            }
            else if(e3==1&&(x+y)%2==1){
                printf("A");
            }
            else{
                printf("D");
            }
        }
        else if(e2==1&&(c+d)%2==0){
            if(e3==0&&(x+y)%2==0){
                printf("A");
            }
            else if(e3==0&&(x+y)%2==1){
            printf("D");
            }
            else if(e3==1&&(x+y)%2==1){
                printf("A");
            }
            else{
                printf("D");
            }
        }
        else{
            if(e3==0&&(x+y)%2==0){
                printf("A");
            }
            else if(e3==0&&(x+y)%2==1){
            printf("C");
            }
            else if(e3==1&&(x+y)%2==1){
                printf("A");
            }
            else{
                printf("C");
            }
        }
    }
    else if(e1==0&&(a+b)%2==1){
        if(e2==0&&(c+d)%2==0){
            if(e3==0&&(x+y)%2==0){
                printf("B");
            }
            else if(e3==0&&(x+y)%2==1){
            printf("C");
            }
            else if(e3==1&&(x+y)%2==1){
                printf("B");
            }
            else{
                printf("C");
            }
        }
        else if(e2==0&&(c+d)%2==1){
            if(e3==0&&(x+y)%2==0){
                printf("B");
            }
            else if(e3==0&&(x+y)%2==1){
            printf("D");
            }
            else if(e3==1&&(x+y)%2==1){
                printf("B");
            }
            else{
                printf("D");
            }
        }
        else if(e2==1&&(c+d)%2==0){
            if(e3==0&&(x+y)%2==0){
                printf("B");
            }
            else if(e3==0&&(x+y)%2==1){
            printf("D");
            }
            else if(e3==1&&(x+y)%2==1){
                printf("B");
            }
            else{
                printf("D");
            }
        }
        else{
            if(e3==0&&(x+y)%2==0){
                printf("B");
            }
            else if(e3==0&&(x+y)%2==1){
            printf("C");
            }
            else if(e3==1&&(x+y)%2==1){
                printf("B");
            }
            else{
                printf("C");
            }
        }
    }
    else if(e1==1&&(a+b)%2==0){
        if(e2==0&&(c+d)%2==0){
            if(e3==0&&(x+y)%2==0){
                printf("B");
            }
            else if(e3==0&&(x+y)%2==1){
            printf("C");
            }
            else if(e3==1&&(x+y)%2==1){
                printf("B");
            }
            else{
                printf("C");
            }
        }
        else if(e2==0&&(c+d)%2==1){
            if(e3==0&&(x+y)%2==0){
                printf("B");
            }
            else if(e3==0&&(x+y)%2==1){
            printf("D");
            }
            else if(e3==1&&(x+y)%2==1){
                printf("B");
            }
            else{
                printf("D");
            }
        }
        else if(e2==1&&(c+d)%2==0){
            if(e3==0&&(x+y)%2==0){
                printf("B");
            }
            else if(e3==0&&(x+y)%2==1){
            printf("D");
            }
            else if(e3==1&&(x+y)%2==1){
                printf("B");
            }
            else{
                printf("D");
            }
        }
        else{
            if(e3==0&&(x+y)%2==0){
                printf("B");
            }
            else if(e3==0&&(x+y)%2==1){
            printf("C");
            }
            else if(e3==1&&(x+y)%2==1){
                printf("B");
            }
            else{
                printf("C");
            }
        }
    }
    else{
        if(e2==0&&(c+d)%2==0){
            if(e3==0&&(x+y)%2==0){
                printf("A");
            }
            else if(e3==0&&(x+y)%2==1){
            printf("C");
            }
            else if(e3==1&&(x+y)%2==1){
                printf("A");
            }
            else{
                printf("C");
            }
        }
        else if(e2==0&&(c+d)%2==1){
            if(e3==0&&(x+y)%2==0){
                printf("A");
            }
            else if(e3==0&&(x+y)%2==1){
            printf("D");
            }
            else if(e3==1&&(x+y)%2==1){
                printf("A");
            }
            else{
                printf("D");
            }
        }
        else if(e2==1&&(c+d)%2==0){
            if(e3==0&&(x+y)%2==0){
                printf("A");
            }
            else if(e3==0&&(x+y)%2==1){
            printf("D");
            }
            else if(e3==1&&(x+y)%2==1){
                printf("A");
            }
            else{
                printf("D");
            }
        }
        else{
            if(e3==0&&(x+y)%2==0){
                printf("A");
            }
            else if(e3==0&&(x+y)%2==1){
            printf("C");
            }
            else if(e3==1&&(x+y)%2==1){
                printf("A");
            }
            else{
                printf("C");
            }
        }
    }

}
else{
    printf("esses valores nao sao aceitos");
}
return 0;
}