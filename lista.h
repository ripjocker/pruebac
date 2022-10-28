#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "persona.h"

typedef struct{
    stPersona dato;
    struct nodo * siguiente;
}nodo;


nodo * iniciLista();
nodo * crearNodo(stPersona dato);
nodo * agregarAlPpio(nodo* lista, nodo* nuevo);
void muestraLista(nodo* lista);
nodo * agregarAlPrincipioPro(nodo* lista, nodo* nuevo);
nodo * agregarultimo(nodo* lista, nodo* nuevo);
int recorreLista (nodo* lista);
nodo * buscarXnombre (nodo*lista, char nombre[20]);
#endif // LISTA_H_INCLUDED
