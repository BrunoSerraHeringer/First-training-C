#include <stdio.h>
int main(){
    char s;
    int i=0, j=0;
    double m=0, f=0, n;
    printf("Digite o sexo (M ou F) e a nota que essa pessoa tirou:\n");
    printf("Digite P para parar\n");
    scanf(" %c",&s);
    while(s!='P'){
        scanf("%lf",&n);
        if(s=='M'){
            m+=n;
            i++;
        }
        else if(s=='F'){
            f+=n;
            j++;
        }
        scanf(" %c",&s);
    }
    if(i!=0) m=m/i;
    if(j!=0) f=f/j;
    if(m>f){
        printf("M %.2lf",m);
    }
    else if(f>m){
        printf("F %.2lf",f);
    }
    else{
        printf("Empate %.2lf",m);
    }
    return 0;
}