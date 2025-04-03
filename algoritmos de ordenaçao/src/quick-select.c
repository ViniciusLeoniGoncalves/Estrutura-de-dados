#include <stdio.h>
#include <stdlib.h>


/*funçao que vai colocar um elemento específico do vetor (pivô), na posiçao correta*/
int particiona(int v[],int esq,int dir){
    int pivo =v[dir];
    int tamvec=dir-esq+1;
    int *menores = (int*) calloc(tamvec,sizeof(int));
    int *maiores = (int*) calloc(tamvec,sizeof(int));
    int k=0,y=0;
    for (int i = esq; i <= dir; i++){
        if(v[i]<=pivo){//pivo entra na lista de menores
            menores[k]=v[i];
            k++;
        }
        else{
            maiores[y]=v[i];
            y++;
        }
        
    }
    int j=esq; 
    for(int i = 0; i < k; i++){//pivo ta em menores[k-1], entao ele vai pra v[j-1] ao fim do loop
        v[j]=menores[i];
        j++;
    }
    for (int i = 0; i < y; i++){
        v[j]=maiores[i];
        j++;
    }
    free(menores);
    free(maiores);
    return j-1; //pospivo
}

int main(){
    int vec[] ={10,90,30,5,50,40};
    int tam=sizeof(vec)/sizeof(vec[0]);
    particiona(vec,0,5);
    for (int i = 0; i <tam ; i++)
    {
        printf("%d ",vec[i]);
    }
    

    return 0;
}