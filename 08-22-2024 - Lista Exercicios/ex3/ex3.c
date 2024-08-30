#include <stdio.h>
#include <stdlib.h>

void calculaDiagonal(int tam, int *m, int *soma);

int main(){
    int L, C, soma, resultado;

    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &L);

    C = L;

    int *m = (int *) malloc(L * C * sizeof(int));


    printf("\nDigite os numeros da matriz:\n");
        for (int i = 0; i < L; i++)
        {
            for (int j = 0; j < C; j++)
            {
                scanf("%d", &m[i * C + j]);
            }
            
        }     
    
    printf("\n\nA matriz digitada foi:\n");
        for (int i = 0; i < L; i++)
        {
            for (int j = 0; j < C; j++)
            {
                printf("%8d ", m[i * C + j]);
            }
            printf("\n");
        }


   calculaDiagonal(L, m, &soma);
    printf("\nA soma da diagonal principal e: %d", soma);

}

void calculaDiagonal(int tam, int *m, int *soma){
    *soma = 0;
    for (int i = 0; i < tam; i++)
        *soma = *soma + m[i * tam + i];
}