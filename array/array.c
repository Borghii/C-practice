#include<stdio.h>

int main(){

    int temperature[7] = {20, 22, 19, 23, 21, 24, 25};
    int sumTemp = 0;
    double promTemp = 0;
    int contUppProm = 0;

    for (int i = 0; i < 7; i++)
    {
        sumTemp+=temperature[i];
    }

    promTemp=sumTemp/7;

    for (int i = 0; i < 7; i++)
    {
        if (temperature[i]>promTemp)contUppProm++;
    }

    printf("Promedio temperatura: %.2lf \n", promTemp);
    printf("Cantidad de dias arriba de la temperatura: %d \n", contUppProm);
    

    return 0;
}