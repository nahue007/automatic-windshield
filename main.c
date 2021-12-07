#include <stdio.h>
#include <stdlib.h>



int main()

{
    enum opciones {Configuracion, Simulacion, Salir};
    int valor_ingresado = 0;

    printf ("\t*** BIENVENIDO *** \n\n");
    printf("Ingrese una opcion: \n");
    printf("0) Configuracion \n");
    printf("1) Simulacion \n");
    printf("2) Salir \n");

    scanf("%d", &valor_ingresado);

    switch (valor_ingresado)
    {
    case Configuracion:
        printf("Configuracion de modo lluvia: \n");
        break;

    case Simulacion:
        printf("Simular lluvia: \n");
        break;

    case Salir:
        printf("Hasta luego! \n");
        break;

    default:
        printf("Opcion incorrecta \n");
        break;

    }
    return 0;

}
