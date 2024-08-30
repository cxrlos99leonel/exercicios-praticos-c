#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

typedef struct pessoa {
    char nome[50];
    int idade;
} Gente;

void cadastraPessoa(Gente *p, int idade, char nome[]);

int main() {
    
    int tamV, idade, i;
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
    {
        printf("Pessoa %d:\nNome: %s\nIdade: %d\n\n", i+1, v[i].nome, v[i].idade);
    }
    
    

    free(v);
}


void cadastraPessoa(Gente *p, int idade, char nome[]){
    p->idade = idade;
    strcpy(p->nome, nome);
}

