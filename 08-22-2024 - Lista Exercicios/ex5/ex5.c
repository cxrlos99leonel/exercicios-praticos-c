#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

typedef struct pessoa {
    char nome[50];
    int idade;
} Gente;

void cadastraPessoa(Gente *p, int idade, char nome[]);
int confereIdade(Gente *v_CI, int tamanho_CI);

int main() {
    
    int tamV, idade, i, maisVelho;
    char nome[50];

    printf("Digite a quantidade de pessoas para cadastrar: ");
    scanf("%d", &tamV);

    Gente *v = (Gente *) malloc (tamV * sizeof(Gente));

    printf("\nDigite %d nomes e %d idades:\n", tamV, tamV);
    for (i = 0; i < tamV; i++){
        scanf("%s %d", nome, &idade);
        cadastraPessoa(&v[i], idade, nome);
    }

    printf("\nImprimindo o registro de %d pessoas:\n\n", tamV);
    for (i = 0; i < tamV; i++)
        printf("Pessoa %d:\nNome: %s\nIdade: %d\n\n", i+1, v[i].nome, v[i].idade);

    maisVelho= confereIdade(v, tamV);
    printf("A pessoa mais velha e %s, com %d anos", v[maisVelho].nome, v[maisVelho].idade);
    
    free(v);
}


void cadastraPessoa(Gente *p, int idade, char nome[]){
    p->idade = idade;
    strcpy(p->nome, nome);
}

int confereIdade(Gente *v_CI, int tamanho_CI){
    int maisVelho_CI = 0;
    
    for (int i = 0; i < tamanho_CI; i++)
        if (v_CI[i].idade >= v_CI[maisVelho_CI].idade)
            maisVelho_CI = i;

    return maisVelho_CI;
}
