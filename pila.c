#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


/// inicializar Pila
void (Pila* Pila){

    Pila->primero=inicLista();
    Pila->ultimo=inicLista();

}

nodo1* inicLista(){
    return NULL;
}


void apilar (pila* Pila, int dato){

    nodo1* nuevo = crearNodo(dato);
    if(Pila->primero==NULL){
        Pila->primero=nuevo;
        Pila->ultimo=nuevo;
    }
    else{
        Pila->primero=agregarultimo(Pila->primero, nuevo);
        Pila->ultimo = nuevo;

    }

}

int topePila (nodo1* lista){
    int rta=0;
    if (lista){
        rta=lista->dato;
    }

    return rta;
}


int eliminiarPila (Pila* Pila){
    int tope;

    if(Pila->primero!=NULL){
        tope = topePila(Pila->primero);
        Pila->primero=desapilar(Pila->primero);

        if(Pila->primero==NULL){
            Pila->ultimo=iniciLista();
        }
    }

return tope;

}


nodo1* desapilar (nodo1* lista){
    nodo1 * tope = lista;

    if(lista!=NULL){
        lista=lista->sigte;
        if(lista->sigte=NULL){
            free(tope);
        }
    }
    return lista;
}

