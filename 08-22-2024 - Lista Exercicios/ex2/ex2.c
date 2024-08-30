#include <stdio.h>
#include <stdlib.h>

void modificaVetor (int *vetor, int tamanho);

int main(){
    int *v, tam, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    v = (int *) malloc(tam * sizeof(int));


    printf("Digite %d numeros: \n", tam);
    for (i = 0; i < tam; i++)
        scanf("%d", &v[i]);

    printf("\nVetor antes da modificacao: \n");
    for (i = 0; i < tam; i++)
        printf("%d ", v[i]);    

    modificaVetor(v, tam);

    printf("\n\nVetor apos a modificacao: \n");
    for(i = 0; i < tam; i++)
        printf("%d ", v[i]);

    free(v);
}

void modificaVetor (int *vetor, int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] % 3 != 0)
            vetor[i] = 0;
    }
}