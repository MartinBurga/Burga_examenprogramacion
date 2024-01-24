#include <stdio.h>

int opcion;

struct producto
{
    char codigo[25];
    char nombreproducto[50];
    char descripcion[50];
    int cantidad;
    float preciocompra;
};

int main()
{
    printf("\nBienvenido al registro de productos del Supermercado.\n");
    printf("\n");
    FILE *registro;
    struct producto n;

    do
    {
        printf("Elige una opcion a realizar.\n");
        printf("1. Registrar informacion de un nuevo producto.\n");
        printf("2. Ver la lista de los productos registrados.\n");
        printf("3. Salir.\n");
        scanf("%d", &opcion);
        printf("\n");

        if (opcion == 1)
        {
            registro = fopen("archivo.txt", "a");
            if (registro == NULL)
            {
                printf("Se ha producido un error al intentar abrir el archivo\n");
                return 1;
            }

            printf("Se procedera a registrar la informacion de un nuevo producto.\n");
            printf("Por favor, inserta el codigo del producto: ");
            scanf("%s", n.codigo);
            printf("Por favor, inserta el nombre del producto: ");
            scanf("%s", n.nombreproducto);
            printf("Por favor, inserta una breve descripcion dle producto\n");
            scanf("%s", n.descripcion);
            printf("Por favor, inserta la cantidad que hay del producto:");
            scanf("%d", &n.cantidad);
            printf("Por favor, inserta el precio del producto: ");
            scanf("%f", &n.preciocompra);
            printf("\n");
            printf("El producto ha sido registrado exitosamente.\n");
            printf("\n");
            fprintf(registro, "%s\t%s\t%s\t%d\t%.2f\n", n.codigo, n.nombreproducto, n.descripcion, n.cantidad, n.preciocompra);
            fclose(registro);
        }
        else if (opcion == 2)
        {
            registro = fopen("archivo.txt", "r");
            if (registro == NULL)
            {
                printf("Se ha producido un error al intentar abrir el archivo.\n");
                return 1;
            }
            printf("Los productos registrados en el archivo son:\n");
            printf("Codigo\tNombre\tMarca\tCantidad\tPrecioCompra\n");

            while (fscanf(registro, "%s %s %s %d %f", n.codigo, n.nombreproducto, n.descripcion, &n.cantidad, &n.preciocompra) != EOF) 
            //La funcion EOF permite al scanf detectar cuando se llega a la final de una archivo. Resumidamente, en la anterior linea dice que 
            //mientras exista datos registrados y no haya el fineal del archivo, se imprimira la n cantidad de productos ingresados por le usuario.
            {
                printf("%s\t%s\t%s\t%d\t%.2f\n", n.codigo, n.nombreproducto, n.descripcion, n.cantidad, n.preciocompra);
            }
            printf("\n");
            fclose(registro);
        }

        else if (opcion != 3)
        {
            printf("Opcion no valida. Por favor, vuelve a intentarlo.\n");
            printf("\n");
        }

    } while (opcion != 3);

    printf("Gracias por utilizar el programa.\n");
    printf("\n");

    return 0;
}
