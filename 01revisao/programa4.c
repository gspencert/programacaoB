#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

int main(){
    
    int vetor[TAM];
    
    srand(time(NULL));
    for (int i = 0 ; i < TAM ; i++){
        vetor[i] = rand() % 10;
    }

    for (int i = 0; i < TAM ; i++){
        printf("%d\t", vetor[i]);
    }

    printf("\n");

    return 0;
}