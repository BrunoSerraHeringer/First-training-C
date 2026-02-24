#include <stdio.h>
struct tipoLogradouro{
    char tipo[80];
    char nome[80];
    char complemento[80];
};
void criaLinhaCSV(struct tipoLogradouro info, char linha[240]){
    int i,j;
    for(i=0;info.tipo[i]!='\0';i++){
        linha[i]=info.tipo[i];
    }
    linha[i]=';';
    i++;
    for(j=0;info.nome[j]!='\0';j++){
        linha[i]=info.nome[j];
        i++;
    }
    linha[i]=';';
    i++;
    for(j=0;info.complemento[j]!='\0';j++){
        linha[i]=info.complemento[j];
        i++;
    }
    linha[i]='\0';
}