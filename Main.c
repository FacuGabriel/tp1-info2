#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "function.h"

/**
 * articulos [ index, cantidad_sucursal[SUCURSAL_1], cantidad_sucursal[SUCURSAL_2], cantidad_sucursal[SUCURSAL_3], total]
 * articulos [index, descripcion]
 */

int main(void)
{

    int  opc=0, i;
    
    articulos_t articulos[CANT_ARTICULOS] = {0};
    printf("Bienvendio al final de Info 1\n\n");

    /*CARGA de las fichas*/

    do
    {
        datos(articulos);
        printf("Desea ingresar otro articulo? 1-Si, 2-No \n");
        scanf("%d",&opc);
 
    } while (opc==1);


    /* Impresion de fichas cargadas*/


    mostrar_articulos (articulos);


    /* Ordenamiento */

    ordenaminto (articulos);

    printf("\n\n###################################");
    printf("\n##############ORDENADO################");
    printf("\n################################### \n");

    i = 0;
    mostrar_articulos (articulos);

    return 0;
}