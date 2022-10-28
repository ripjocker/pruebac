#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

nodo * iniciLista(){
    return NULL;
}

nodo * crearNodo(stPersona dato){
    nodo* nuevo = (nodo*)malloc(sizeof(nodo));
    nuevo->dato = dato;
    nuevo->siguiente = NULL;
    return nuevo;
}

nodo * agregarAlPpio(nodo* lista, nodo* nuevo){
    if(lista==NULL){
        lista=nuevo;
    }else{
        nuevo->siguiente=lista;
        lista = nuevo;
    }
    return lista;
}

nodo * agregarAlPrincipioPro(nodo* lista, nodo* nuevo){
    nuevo->siguiente = lista;
    return nuevo;
}

void muestraLista(nodo* lista){
    nodo* seg = lista;
    while(seg!=NULL){
        muestraNodo(seg);
        seg=seg->siguiente;
    }
}

void muestraNodo(nodo* n){
    printf("\n Nodo: %p", n);
    muestraUnaPersona(n->dato);
    printf("\n Nodo->sig: %p", n->siguiente);
}

//-------------------------------------------------------------------------------------
nodo * agregarultimo(nodo* lista, nodo* nuevo){
    nodo* seg = lista;
    if(lista==NULL){
        lista=nuevo;
    }else{

        while(seg->siguiente !=NULL){
        seg=seg->siguiente;
    }
     seg->siguiente = nuevo;
    }

    return lista;

}


/// borrar nodo por valor de un campo


nodo * buscarXnombre (nodo*lista, char nombre [20]){
    nodo* bus = lista;
    if(!lista){
        while(lista->dato.nombre != nombre){
        bus=bus->siguiente;
            }

        return lista;
    }


}


nodo * borrarNodo(nodo * lista, char nombre[20]) {
   nodo * seg;
   nodo * ante; //apunta al nodo anterior que seg.
   if((lista != NULL) && (strcmp(nombre, lista->dato.nombre)==0 )) {

      nodo * aux = lista;
      lista = lista->siguiente; //salteo el primer nodo.
      free(aux);                //elimino el primer nodo.
   }else {
      seg = lista;
      while((seg != NULL) && (strcmp(nombre, seg->dato.nombre)!=0 )) {
         ante = seg;           //adelanto una posición la variable ante.
         seg = seg->siguiente; //avanzo al siguiente nodo.
      }
      //en este punto tengo en la variable ante la dirección de
      //memoria del nodo anterior al buscado, y en la variable seg,
      //la dirección de memoria del nodo que quiero borrar.
      if(seg!=NULL) {
         ante->siguiente = seg->siguiente;
         //salteo el nodo que quiero eliminar.
         free(seg);
         //elimino el nodo.
      }
   }
   return lista;
}


//------------------------------CLASE 7-9 --------------------------------------------------------------------------------------------------------------------------------


int sumarEdadesLista (nodo* lista){
    int suma = 0;

    nodo* seg=lista;

    while(seg->siguiente !=NULL){
        suma = suma + seg->dato.edad;
        seg = seg->siguiente;

    }

    return suma;
}




int contarNodosLista (nodo* lista){
    int contador = 0;
    nodo* seg=lista;

    while(seg != NULL){
        seg = seg->siguiente;
        contador ++;

    }

    return contador;
}

void verPirmero(nodo* lista){
    nodo* seg = lista;
    while(seg!=NULL){
        muestraNodo(seg);
    }
}
