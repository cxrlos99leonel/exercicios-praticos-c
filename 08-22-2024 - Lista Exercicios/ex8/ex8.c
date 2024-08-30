#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

typedef struct cao{
    char nome[50], raca[50];
    float peso;
    int idade;
}Cao;

void cadastraCao(Cao *c, char nomeC[], char racaC[], float pesoC, int idadeC);
int idadeIgual(Cao *d);
void maisNovo(Cao *k, int *maisNovoF);

int main(){
    char nome[50], raca[50];
    float peso;
    int idade,qtIdIg, mais_Novo, i;
    Cao v[5];

    printf("Digite o nome, raca, peso e idade de 5 caes:\n");
    for (int i = 0; i < 5; i++){
        scanf("%s %s %f %d", nome, raca, &peso, &idade);
        cadastraCao(&v[i], nome, raca, peso, idade);
    }

    printf("\n\nImprimindo os caes cadastrados:\n");
    for (int i = 0; i < 5; i++){
        printf("Cao %d:\n", i+1);
        printf("Nome:%-50s Raca:%-50s Peso:%8.2fkg Idade:%8d anos\n\n", v[i].nome, v[i].raca, v[i].peso, v[i].idade);
    }

    qtIdIg = idadeIgual(v);
    printf("\n\nCaes com a mesma idade: %d", qtIdIg);

    maisNovo(v, &mais_Novo);
    printf("\n\nO cao mais novo e: %s", &v[mais_Novo].nome);

}

void cadastraCao(Cao *c, char nomeC[], char racaC[], float pesoC, int idadeC){
    strcpy(c->nome, nomeC);
    strcpy(c->raca, racaC);
    c->peso = pesoC;
    c->idade = idadeC;
}

int idadeIgual(Cao *d){
    int controle = 0, idade_igual = 0;

    for (int i = 0; i < 5; i++)
        if (d[controle].idade == d[i].idade)
            idade_igual++;

    if (idade_igual == 1)
        idade_igual--;    
    
    return idade_igual;
    
}

void maisNovo(Cao *k, int *maisNovoF){
    *maisNovoF = 0;

    for (int i = 0; i < 5; i++)
        if (k[i].idade <= k[*maisNovoF].idade )
            *maisNovoF = i;
}