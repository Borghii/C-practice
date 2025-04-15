#include <stdio.h>

void printMenu();
int actualizarEnergia(int* energia, int consumo);
void realizarAccion(int* energia, int opcion);
void recolectarFruta(int* energia);
void cargarBateria(int* energia);
void esperar(int* energia);
void apagarRobot(int* energia);
void mostrarEnergia(int* energia);

int main() {
    int energia = 100;
    int opcion;
    
    do {
        printMenu();
        scanf("%d", &opcion);
        realizarAccion(&energia, opcion);
        mostrarEnergia(&energia);
    } while (energia > 0);
    
    printf("Robot apagado. Fin del programa.\n");
    return 0;
}

void printMenu() {
    printf("\nMenu de opciones\n");
    printf("1 - Recolectar fruta\n");
    printf("2 - Cargar bateria\n");
    printf("3 - Esperar\n");
    printf("4 - Apagar robot\n");
    printf("Ingrese una opcion: ");
}

int actualizarEnergia(int* energia, int consumo) {
    if (consumo < 0) {
        if (*energia + consumo <= 0) {
            printf("No hay suficiente energia para realizar esta accion.\n");
            return 0;
        }
    }
    
    *energia += consumo;
    
    if (*energia > 100) {
        *energia = 100;
    }
    
    return 1;
}

void realizarAccion(int* energia, int opcion) {
    switch (opcion) {
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
            printf("Opcion no valida\n");
            break;
    }
}

void recolectarFruta(int* energia) {
    printf("Intentando recolectar fruta...\n");
    if (actualizarEnergia(energia, -20)) {
        printf("Fruta recolectada con exito!\n");
    }
}

void cargarBateria(int* energia) {
    printf("Cargando bateria...\n");
    actualizarEnergia(energia, 30);
    printf("Bateria cargada!\n");
}

void esperar(int* energia) {
    printf("El robot esta esperando...\n");
    if (actualizarEnergia(energia, -10)) {
        printf("Espera completada.\n");
    }
}

void apagarRobot(int* energia) {
    printf("Apagando robot...\n");
    *energia = 0;
}

void mostrarEnergia(int* energia) {
    printf("Energia actual: %d%%\n", *energia);
}