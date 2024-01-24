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
        printf("\n");

        if (opcion == 1)
        {
            FILE *registro;
            registro = fopen("archivo.txt", "w");
            if (registro == NULL)
            {
                printf("Se ha producido un error al intentar abrir el archivo\n");
                return 1;
            }

            printf("Bienvenido al registro de los productos.\n");
            printf("Por favor, inserta el nombre del producto\n");
        }
        else if (opcion == 2)
        {
            printf("Los productos que han sido registrados son: \n");
        }

        if (opcion != 1 && opcion != 2 && opcion!=3)
        {
            printf("No existe la opcion insertada. Por favor, vuelve a intentarlo.\n");
            printf("\n");
        }

    } while (opcion != 3);

    if (opcion == 3)
    {
        printf("Gracias por utilizar el programa.\n");
    }

    return 0;
}