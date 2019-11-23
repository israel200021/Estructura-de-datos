//Mendoza Rodriguez Israel
#ifndef __LISTA__H
#define __LISTA__H

#include<stdio.h>
#include<stdlib.h>

void principal();
void insertar();
void imprimir();
void buscar();
void eliminar();

struct lista
{
	int datos;
	struct lista *siguiente; 
};

struct lista *primero = NULL;
struct lista *ultimo = NULL;
#endif
