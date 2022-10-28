#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include "lista.h"

 typedef struct {
    //nodo que apunta al principio de la lista.
    struct nodo1* primero;
    // nodo que apunta al ultimo de la lista.
    struct nodo1* ultimo;
 }Pila;


 typedef struct{
    int dato;
    struct nodo* sigte;
    struct nodo* anteri;

 }nodo1;



-----------------------------------
void (Pila* pila);
nodo1* inicLista();
void apilar (pila* pila, int dato);
int topePila (nodo1* lista);
int eliminiarPila (Pila* Pila);
nodo1* desapilar (nodo1* lista);

#endif // PILA_H_INCLUDED
