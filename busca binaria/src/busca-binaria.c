#include <stdio.h>



/*
Função que realiza busca binária em um vetor ordenado

`ENTRADAS:` vetor de inteiros ordenado (int vec[]), limite esquerdo do vetor(int), limite direito do vetor (int), valor a ser buscado (int)

`SAÍDA:` indice do valor buscado dentro do vetor.
*/
int buscaBinaria(int vet[], int esq, int dir, int valor) {
    int tam = dir-esq+1;
    int meio = (dir+esq)/2;
    esq = 0;
    dir = tam - 1;
    while(esq <= dir) {
    meio = (esq + dir)/2;
    if(vet[meio] == valor)
    return meio;
    if(valor > vet[meio]) esq = meio + 1;
    else dir = meio - 1;
    }
    return -1;//valor fora dos limites do vetor ou até fora do vetor todo
    }

int main(){
    
    return 0;
}