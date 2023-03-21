/*
    Luis Fernando Nuñez Rangel
    Ing Aeronautica IPN

    Fundamentos de programacion
*/

#include<stdio.h>
#include<stdlib.h>

void datos(){
    int n;
    printf("\n\t Digita un numero: ");
    scanf("%d", &n);

    switch (n
    )
    {
    case 1:
        printf("\n\t Elegiste el 1");
        break;
    case 2:
        printf("\n\t Elegiste el 2");
        break;
    default:
            printf("\n\t Numero fuera de rango");
        break;
    }
}

int main(){
    datos();

    return 0;
}