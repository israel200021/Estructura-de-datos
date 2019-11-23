#ifndef __COLA__H
#define __COLA__H

#include <stdio.h>
#include <stdlib.h>

struct nodo{
	int dato;
	struct nodo* siguiente;
};

struct nodo* primero = NULL;
struct nodo* ultimo = NULL;

void insertarNodo();
void buscarNodo();
void mostrarCola();

#endif
