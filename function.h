#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H 1
#define CANT_ARTICULOS 60
#define SUCURSAL_1 0
#define SUCURSAL_2 1
#define SUCURSAL_3 2
#define TOTAL 4

typedef struct {
    char descripcion[90];
    int cantidad_sucursal[3]; // sucursal 1 2 3    
    int total;
}articulos_t;

void datos(articulos_t articulos[]);
void mostrar_articulos (articulos_t articulos[]);
void ordenaminto (articulos_t articulos[]);

#endif