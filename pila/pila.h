#ifndef __PILA_H__
#define __PILA_H__


#include <stdio.h>

#include <stdlib.h>

struct nodo{
	int dato;
	struct nodo* siguiente;
};

struct nodo* primero = NULL;

void insertarNodo();
void buscarNodo();
void eliminarNodo();
void imprimirPila();

#endif
