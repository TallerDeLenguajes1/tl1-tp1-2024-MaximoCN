#include <stdio.h>
int main(){
    printf("HOLA MUNDO");
    
    int num= 2;
    int *punt= &num;
    printf("CONTENIDO DEL PUNTERO %d\n", *punt);
    printf("Direccion de memoria alamcenada : %p\n" ,punt);
    printf("Direccin de memoria de la variable: %p\n", &num);
    printf("direccion de memoria del puntero: %p\n", &punt);
    printf("Tamanio de memoria utilizado por la variable: %zu",sizeof(num));
    return 0;
}