#include <stdio.h>
int funcCuadra(int num);
void cuadVoid(int num);
void invertir(int a,int b);
void ordenar(int a, int b, int *menor, int *mayor);

int main(){
    int menor;
    int mayor;
    int num=2;
    int a;
    int b;
    funcCuadra(num);
    cuadVoid(num);
    printf("Ingrese a num a inverir:");
    scanf("%d",&a);
    printf("Ingrese b num a invertir:");
    scanf("%d",&b);
    printf("Antes del intercambio: a = %d, b = %d\n", a, b);
    invertir(a,b);
    printf("Después del intercambio: a = %d, b = %d\n", a, b);
    ordenar(a,b,&menor,&mayor);
    printf("Menor: %d, Mayor: %d\n", menor, mayor); 
   return 0;
}

int funcCuadra(int num){
    int cuadr=num*num;
    return cuadr;

}
void cuadVoid(int num) {
    int resultado = num * num;
    printf("El cuadrado de %d es %d\n", num, resultado);
}
void invertir(int a, int b) {
    int temporal = a;
    a = b;
    b = temporal;
    printf("Dentro de la función: a = %d, b = %d\n", a, b);
}
void ordenar(int a, int b, int *menor, int *mayor) {
    if (a < b) {
        *menor = a;
        *mayor = b;
    } else {
        *menor = b;
        *mayor = a;
    }
}