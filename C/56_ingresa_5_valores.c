#include <stdio.h>
#include <stdlib.h>

void datos(void);
void captura(int v[]);
void imprimir(int v[]);

int main(){
    datos();
    return 0;
}

void datos(void){
    printf("\n\t Inicializando un vector con 5 elementos: ");
    int v[5];
    printf("\n\t Digita los 5 elementos de tu vector: ");
    captura(v);
    imprimir(v);
}

void captura(int v[]){
    for(int i=0;i<5;i++){
        scanf("%d", &v[i]);
    }
}

void imprimir(int v[]){
    printf("\n\t Tu vector es: ");
    for(int i=0;i<5;i++){
        printf("%d ", v[i]);
    }
}