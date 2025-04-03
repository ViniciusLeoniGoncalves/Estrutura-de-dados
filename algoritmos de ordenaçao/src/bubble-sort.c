#include <stdio.h>
#define N 10

int A[N] = {1,-5, -2, 9, 66,55, 10, 8,7,21};

int main(){
    printf("Vetor desordenado: {");
    for(int j = 0;j<N;j++)
        printf("%d ",A[j]);
    printf("}\n");

    const int FALSO = 0, VERDADEIRO = 1;
    int ordenado = FALSO; //Flag (indicador)
    int fim = N; //n é o tamanho do vetor.
    while (!ordenado) { //Uso da flag evita redundância!
        ordenado = VERDADEIRO;
        for (int i = 0; i < fim - 1; i++) {
            if (A[i] > A[i+1]) {
                //Permutamos os valores de A[i] e A[i+1]:
                int aux = A[i];
                A[i] = A[i + 1];
                A[i + 1] = aux;
                ordenado = FALSO;
            }
        }
        fim--;
    }
    
    printf("Vetor ordenado: {");
    for(int j = 0;j<N;j++)
        printf("%d ",A[j]);
    printf("}\n");
return 0;
}