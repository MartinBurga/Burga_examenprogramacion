#include <stdio.h>

int opcion;

struct producto
{
    char codigo[25];
    char nombreproducto[50];
    char descproducto[50];
    int cantidad;
    float preciocompra;
};

int main()
{
    printf("Bienvenido al registro de productos.");
    do
    {
        printf("Por favor, elige una opcion a realizar.\n");
        printf("1. Ingresar informacion del producto.\n");
        printf("2. Imprimir informacion de los productos.\n");
        printf("3. Salir.\n");
        scanf("%d", &opcion);

    } while (opcion != 3);

    if (opcion==3)
    {
        printf("Gracias por utilizar el programa.\n");
    }
    

    return 0;
}