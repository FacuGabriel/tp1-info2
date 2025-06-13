#include <stdio.h>
#include <string.h>
#include "function.h"
void datos (articulos_t articulos[])

{int  opc=0, i, articulo_index, sucursal;
    char articulo[90];
  printf("Ingrese la descripcion del articulo: ");
        scanf("%s",articulo);
        i=0;
        while (articulos[i].descripcion[0] && strcmp(articulo, articulos[i].descripcion)) 
        i++;
        articulo_index = i;
        strcpy(articulos[i].descripcion, articulo);

        printf("\n%s, Indice: %d\n", articulos[articulo_index].descripcion, articulo_index);

        printf("Para que sucursal va a realizar la carga? (1,2,3): \t");

        scanf("%d", &sucursal);

        printf("Ingrese la cantidad del articulo para la sucursal %d: ", sucursal);

        scanf("%d", &articulos[articulo_index].cantidad_sucursal[sucursal-1]);
       
        articulos[articulo_index].total = 0 ;
        
        for(i=0;i<3;i++) articulos[articulo_index].total += articulos[articulo_index].cantidad_sucursal[i];}   

void mostrar_articulos (articulos_t articulos[])
{
    int i=0;

    printf("Articulo\tSucursal 1\tSucursal 2\tSucursal 3\tTotal\n");
    while(i< CANT_ARTICULOS && articulos[i].descripcion[0]){
        printf("%s\t%d\t\t%d\t\t%d\t\t%d\n", articulos[i].descripcion, articulos[i].cantidad_sucursal[SUCURSAL_1], articulos[i].cantidad_sucursal[SUCURSAL_2], articulos[i].cantidad_sucursal[SUCURSAL_3],articulos[i].total);
        i++;
    };
}
void ordenaminto (articulos_t articulos[]){
    int opc, i, articulo_index;
    char articulo[90];
       for ( opc = 1; opc < CANT_ARTICULOS; opc++)
    {
        for ( i = 0; i < CANT_ARTICULOS-1; i++)
        {
            if(articulos[i].total<articulos[i+1].total){
                strcpy (articulo,articulos[i].descripcion);
                strcpy(articulos[i].descripcion,articulos[i+1].descripcion);
                strcpy(articulos[i+1].descripcion, articulo);

                articulo_index = articulos[i].cantidad_sucursal[SUCURSAL_1];
                articulos[i].cantidad_sucursal[SUCURSAL_1] = articulos[i+1].cantidad_sucursal[SUCURSAL_1];
                articulos[i+1].cantidad_sucursal[SUCURSAL_1] = articulo_index;

                articulo_index = articulos[i].cantidad_sucursal[SUCURSAL_2];
                articulos[i].cantidad_sucursal[SUCURSAL_2] = articulos[i + 1].cantidad_sucursal[SUCURSAL_2];
                articulos[i + 1].cantidad_sucursal[SUCURSAL_2] = articulo_index;

                articulo_index = articulos[i].cantidad_sucursal[SUCURSAL_3];
                articulos[i].cantidad_sucursal[SUCURSAL_3] = articulos[i + 1].cantidad_sucursal[SUCURSAL_3];
                articulos[i + 1].cantidad_sucursal[SUCURSAL_3] = articulo_index;

                articulo_index = articulos[i].total;
                articulos[i].total = articulos[i + 1].total;
                articulos[i + 1].total = articulo_index;
            }
            
        }
        
    }}
 



        
