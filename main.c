#include <stdio.h>

int suma(int x, int y){
    return x + y;
}

int resta(int x, int y){
    return x - y;
}

int main(){
    printf("Hola Mundo en C\n");

    printf("Suma = %d\n",suma(5,6));
    printf("Resta = %d\n",resta(10,4));
    return 0;
}