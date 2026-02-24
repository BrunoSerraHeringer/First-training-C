#include <stdio.h>
#include <math.h>

struct tipoPonto{
    int x;
    int y;
};

double distancia(struct tipoPonto pa,struct tipoPonto pb){
    double d;

    d=(pa.x-pb.x)*(pa.x-pb.x)+(pa.y-pb.y)*(pa.y-pb.y);
    d=sqrt(d);
    return d;
}