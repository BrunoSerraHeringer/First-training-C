#include <stdio.h>
struct tipoFiliacao{
    char nome[80];
    char nomeMae[80];
    char nomePai[80];
};
struct tipoFiliacao n;
struct tipoFiliacao separaLinhaCSV(char linha[240]){
    int i,j;
    for(i=0;linha[i]!=',';i++){
        n.nome[i]=linha[i];
    }
    n.nome[i]='\0';
    i++;
    for(j=0;linha[i]!=',';j++){
        n.nomeMae[j]=linha[i];
        i++;
    }
    n.nomeMae[j]='\0';
    i++;
    for(j=0;linha[i]!='\0';j++){
        n.nomePai[j]=linha[i];
        i++;
    }
    n.nomePai[j]='\0';
    return n;
}