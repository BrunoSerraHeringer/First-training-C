#include <stdio.h>
int main(){
    int i,a=0;
    char str[60],dir[60],inv[60];
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            dir[a]=str[i];
            a++;
        }
    }
    dir[a]='\0';
    i=0;
    a--;
    for(;a>=0;a--){
        inv[i]=dir[a];
        i++;
    }
    a=0;
    if(dir[a]=='\0'){
        printf("Valor invalido!\n");
    }
    else{
        for(i=0;dir[i]!='\0';i++){
            if(dir[i]!=inv[i]){
                a++;
            }
        }
        if(a!=0){
            printf("N\n");
        }
        else{
            printf("S\n");
        }
    }
    return 0;
}