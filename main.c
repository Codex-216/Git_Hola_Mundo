#include <stdio.h>

int suma(int x, int y){
    if(x < 0){
        printf("Validacion Funcion Suma\n");
        printf("Este numero es menor de cero\n");
    }
    
    return x + y;
}

int resta(int x, int y){
    return x - y;
}

int multiplicacion(int x, int y){
    return x * y;
}

int main(){
    printf("Hola Mundo en C\n");

    printf("Suma = %d\n",suma(5,6));
    printf("Resta = %d\n",resta(10,4));
    printf("Multiplicacion = %d\n",multiplicacion(7,5));
    return 0;
}