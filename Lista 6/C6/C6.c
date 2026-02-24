double exp_natural (int x,int n){
    double a=1,c=1,b=x;
    while(c<=n){
        a+=b;
        c++;
        b=b*x/c;
    }
    return a;
}