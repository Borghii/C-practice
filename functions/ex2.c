#include <stdio.h>

void printMenu();

void realizarAccion(int* energia, int opcion);

void recolectarFruta(int* energia);
void cargarBateria(int* energia);
void esperar(int* energia);
void apagarRobot(int* energia);

void mostrarEnergia(int* energia);



int main()
{
    int energia=100;


    int opcion;
    
    do
    {
        printMenu();

        scanf("%d",&opcion);

        realizarAccion(&energia, opcion);

        mostrarEnergia(&energia);
       
    } while (energia>0);
    





    return 0;
}

void printMenu(){
    printf("Menu de opciones \n");
    printf("1 - Recolectar fruta\n");
    printf("2 - Cargar bateria\n");
    printf("3 - Esperar\n");
    printf("4 - Apagar robot\n");

}

void realizarAccion(int* energia, int opcion){
    switch (opcion)
    {
    case 1:
        recolectarFruta(energia);
    break;
    case 2:
        cargarBateria(energia);
    break;
    case 3:
         esperar(energia);
    break;
    case 4:
        apagarRobot(energia);
    break;

    default:
    printf("Opcionno valida\n");

        break;
    }
}

void recolectarFruta(int* energia){
    *energia = *energia - 20;
}

void cargarBateria(int* energia){
    if (*energia <= 70)
    {
        *energia += 30;
    } else {
        *energia = 100;
    }
}

void esperar(int* energia){
    *energia-=20;
}

void apagarRobot(int* energia){
    *energia=0;
}

void mostrarEnergia(int* energia){
    printf("Energía actual: %d\n", *energia);
}


