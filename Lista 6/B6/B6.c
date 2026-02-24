#include <stdio.h>
int validaPeso(double pesoKg){
    if(pesoKg>=0){
        return 1;
    }
    else{
        return 0;
    }
}
void fazTonelada(double pesoKg){
    pesoKg=pesoKg/1000;
    printf("%.4lf\n",pesoKg);
}
void fazGrama(double pesoKg){
    pesoKg=pesoKg*1000;
    printf("%.4lf\n",pesoKg);
}