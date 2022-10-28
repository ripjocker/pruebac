#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main()
{
    nodo* lista;
    lista=iniciLista();
    nodo* busqueda;
    char nombre [20];


    for(int i=0;i<2;i++){
        lista=agregarAlPrincipioPro(lista, crearNodo(cargaUnaPersona()));
    }

    printf("\nLista de Personas!\n");
    muestraLista(lista);

    for(int i=0;i<2;i++){
    lista=agregarultimo(lista, crearNodo(cargaUnaPersona2()));
    }

     printf("\nLista de Personas! -----------------\n");
     muestraLista(lista);


     busqueda=buscarXnombre(lista, 'JUAN');
     printf("/nel nombre es: %d", lista->dato.nombre);








    return 0;
}
