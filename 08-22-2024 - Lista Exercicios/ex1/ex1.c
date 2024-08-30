#include <stdio.h>
#include <stdlib.h>

float encontraMaiorMenor(float *v, int tam, int *menor);

int main()
{
    int tam, i, menor;
    float maior;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    float* v = (float*) malloc(sizeof(float));

    printf("\nDigite %d numeros: \n", tam);
    for (i = 0; i < tam; i++)
    {
        scanf("%f", &v[i]);
    }

    maior = encontraMaiorMenor(v, tam, &menor);

    printf("O maior numero e: %.2f\n", maior);
    printf("O menor numero e: %.2d\n", menor);

    free(v);

}

float encontraMaiorMenor(float *v, int tam, int *menor){
    float maior = v[0];
    *menor = v[0];

    
    for (int i = 1; i < tam; i++)
    {
        if (v[i] >= maior)
            maior = v[i];

        if (v[i] < *menor)
            *menor = v[i];
    }

    return maior;
    
}