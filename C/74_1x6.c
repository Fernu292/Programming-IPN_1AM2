#include <stdlib.h>
#include <stdio.h>

void datos();
void captura(float **ma, int n, int m);
void imprimir(float **ma, int n, int m);

int main(){

    datos();

    return 0;
}

void datos(){
    const int n = 1,m = 6;

    float **matriz = (float **)malloc(sizeof(float*)*n);
    for(int i=0;i<n;i++){
        matriz[i] = (float *)malloc(sizeof(float)*m);
    }

    captura(matriz, n, m);
    imprimir(matriz, n ,m);
}

void captura(float **ma, int n, int m){
    printf("\n\t Digita los datos de tu matriz %dx%d:\n\t ", n, m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%f", &ma[i][j]);
        }
        printf("\t ");
    }
}

void imprimir(float **ma, int n, int m){
    printf("\n\t Digita los datos de tu matriz %dx%d:\n\t ", n, m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%.1f ", ma[i][j]);
        }
        printf("\n\t ");
    }

    for(int i=0;i<n;i++){
        free(ma[i]);
    }

    free(ma);
}