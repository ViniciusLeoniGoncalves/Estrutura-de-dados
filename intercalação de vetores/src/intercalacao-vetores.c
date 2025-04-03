#include <stdio.h>
#define N 4
#define M 8

int main(){
    int A[N] = {-5, -2, 9, 66};
    int B[M] = {-10, -4, -1, 8, 10, 50, 51, 70};
    int C[N + M]; //Recebe A e B intercalados.
    int i = 0, j = 0, k = 0;
    while (i < N && j < M) { //Enquanto i e j são válidos... Esse laço só roda enquanto i < N e j < M ao mesmo tempo. Ou seja, ele para assim que um dos vetores acabar.r
        if (A[i] < B[j]) {
            C[k] = A[i]; 
            i++;
        }
        else {
            C[k] = B[j]; 
            j++;
        }
        k++;
        }//Excedente:
    while (i < N) { C[k] = A[i]; k++; i++; }
    while (j < M) { C[k] = B[j]; k++; j++; }

    puts("\nVetor intercalado:");
    for (int idx = 0; idx < N + M; idx++)
        printf("%d ", C[idx]);
    
    return 0;
}