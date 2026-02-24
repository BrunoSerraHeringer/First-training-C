#include <stdio.h>
struct tipoMusica{
    char nome[80];
    int ano;
};
struct tipoBanda{
    char nome[80];
    int qtd;
    struct tipoMusica musicas[100];
};
void pesquisarNomeMusica(char pesquisar[80],struct tipoBanda bandas[50],int n){
    int i,j,k,a=1,b=0;
    for (i=0;i<n;i++){
        for(j=0;j<bandas[i].qtd;j++){
            a=0;
            for(k=0;pesquisar[k]!='\0'&&bandas[i].musicas[j].nome[k]!='\0'&&a==0;k++){
                if(pesquisar[k]!=bandas[i].musicas[j].nome[k]){
                    a=1;
                }
            }
            if(pesquisar[k]!='\0'||bandas[i].musicas[j].nome[k]!='\0'){
                a=1;
            }
            if(a==0){
                printf("%s : ano %d\n",bandas[i].nome,bandas[i].musicas[j].ano);
                b=1;
            }
        }
    }
    if(b==0){
        printf("Musica nao cadastrada\n");
    }
}