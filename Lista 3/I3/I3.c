#include <stdio.h>
int main(){
int n=0,i=1,x,y,a=0;
while(scanf("%d",&n)!=EOF){
    int z,w=-1;
    while(a<n){
        scanf("%d%d",&x,&y);
        a++;
        while(a<n&&y==w&&x<z){
            scanf("%d%d",&z,&w);
            a++;
        }
        while(a<n&&w<y){
            scanf("%d%d",&z,&w);
            a++;
            while(a<n&&y==w&&x<z){
                scanf("%d%d",&z,&w);
                a++;
            }
        }
    }
    a=0;
        if(y>w){
        printf("Dia %d\n%d\n\n",i,x);
        }
    else if(w>y){
        printf("Dia %d\n%d\n\n",i,z);
    }
    else if(x<z){
        printf("Dia %d\n%d\n\n",i,x);
    }
    else{
        printf("Dia %d\n%d\n\n",i,z);
    }
    i++;
}
return 0;
}