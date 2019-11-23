#ifndef __LISTACIRCULAR__H
#define __LISTACIRCULAR__H


#include <stdio.h>
#include <stdlib.h>

struct nodoCircular{
	int dato;
	struct nodoCircular* siguiente;
} ;


struct nodoCircular* primero = NULL;
struct nodoCircular* ultimo = NULL;

void insertarNodo();
void buscarNodo();
void modificarNodo();
void eliminarNodo();
void mostrarLista();

#endif
