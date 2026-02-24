#include <stdio.h>
struct tipoData{
    int dia;
    int mes;
    int ano;
};
struct tipoPessoa{
    char nome[80];
    struct tipoData dtNascimento;
};
struct tipoPessoa n;
struct tipoPessoa separaInfo(char nome[80],int dt_nascimento){
    int i,a;
    for(i=0;nome[i]!='\0';i++){
        n.nome[i]=nome[i];
    }
    n.nome[i]='\0';
    i=dt_nascimento/10000;
    n.dtNascimento.ano=i;
    a=dt_nascimento-i*10000;
    a=a/100;
    n.dtNascimento.mes=a;
    i=dt_nascimento-i*10000-a*100;
    n.dtNascimento.dia=i;
    return n;
}