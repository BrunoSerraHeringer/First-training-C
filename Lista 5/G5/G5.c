#include <stdio.h>
int main(){
    int p,i,a,b=0;
    char str[42],nome[42];
    scanf("%d",&p);
    for(i=0;i<p;i++){
        scanf("%s",str);
        for(a=0;str[a]!='\0';a++){
            nome[a]=str[a];
        }
        nome[a]='\0';
        for(a=0;str[a+1]!='\0';a++){
            if(str[a]>90){
                str[a]=str[a]-32;
            }
            if(str[a+1]>90){
                str[a+1]=str[a+1]-32;
            }
            if(str[a+1]<=str[a]){
                b++;
            }
        }
        if(b!=0){
            printf("%s :N\n",nome);
        }
        else{
            printf("%s :O\n",nome);
        }
        b=0;
    }
    return 0;
}