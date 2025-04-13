#include <stdio.h>

void sumar(int a, int b, int* resultado);

int main()
{
    int num1=7, num2=2;
    int suma;
    sumar(num1,num2,&suma);


    printf("La suma es: %d\n",suma);

    return 0;
}


void sumar(int a, int b, int* resultado){
    *resultado = a+b;
}