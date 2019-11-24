
#ifndef __LISTADOBLELIGADA__H
#define __LISTADOBLELIGADA__H
#include <stdio.h>
#include <stdlib.h>

struct nodo{
	int dato;
	struct nodo* siguiente;
	struct nodo* atras;
};

struct nodo* primero = NULL;
struct nodo* ultimo = NULL;

void insertarNodo();
void buscarNodo();
void modificarNodo();
void eliminarNodo();
void imprimirListainicio();
void imprimirListaUltimo();

#endif
