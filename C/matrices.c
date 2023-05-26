#include <stdlib.h>
#include <stdio.h>

int main(){

    int width, height;

    printf("\n\t Digita las dimensiones de tu matriz: ");
    scanf("%d",&width);
    scanf("%d",&height);
    printf("\n\t Las dimensiones de tu matriz seran: %d, %d", width, height);

    float **array2d = malloc(sizeof(*array2d) * height);
    float  *array1d = malloc(sizeof(*array1d) * width* height);

    for (int i = 0; i < height; ++i){
        array2d[i] = &array1d[i * width];
    }

    for(int i=0;i<width;i++){
        for(int j=0;j<height;j++){
            array2d[i][j] = 10;
        }
    }

    printf("\n");


    for(int i=0;i<width;i++){
        printf("\t");
        for(int j=0;j<height;j++){
            printf("%.f ", array2d[i][j]);
        }
        printf("\n");
    }
}