double calculaVelocidadeMedia(int tA,int tB,double distancia){
    double t,v;
    t=tB-tA;
    t=t/3600;
    v=distancia/t;
    return v;
}
int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
    double t,v;
    t=tB-tA;
    t=t/3600;
    v=distancia/t;
    if(v>velocidadeMaxima){
        return 1;
    }
    else{
        return 0;
    }
}
