#include <stdio.h>

int opcion;

struct producto
{
    char codigo[25];
    char nombreproducto[50];
    char marca[50];
    int cantidad;
    float preciocompra;
};

int main()
{
    printf("Bienvenido al registro de productos.\n");
    FILE *registro;
    struct producto n;

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
            registro = fopen("archivo.txt", "a");
            if (registro == NULL)
            {
                printf("Se ha producido un error al intentar abrir el archivo\n");
                return 1;
            }

            printf("Bienvenido al registro de los productos.\n");
            printf("Por favor, inserta el codigo del producto: ");
            scanf("%s", n.codigo);
            printf("Por favor, inserta el nombre del producto: ");
            scanf("%s", n.nombreproducto);
            printf("Por favor, inserta la marca del producto: ");
            scanf("%s", n.marca);
            printf("Por favor, inserta la cantidad que hay del producto: ");
            scanf("%d", &n.cantidad);
            printf("Por favor, inserta el precio del producto: ");
            scanf("%f", &n.preciocompra);
            printf("Exito! El producto ha sido registrado.\n");
            fprintf(registro, "%s\t%s\t%s\t%d\t%.2f\n", n.codigo, n.nombreproducto, n.marca, n.cantidad, n.preciocompra);
            fclose(registro);
        }
        else if (opcion == 2)
        {
            printf("Los productos ingresados son:\n");
        }

        else if (opcion != 3)
        {
            printf("Opcion no valida. Por favor, vuelve a intentarlo.\n");
            printf("\n");
        }

    } while (opcion != 3);

    printf("Gracias por utilizar el programa.\n");

    return 0;
}
