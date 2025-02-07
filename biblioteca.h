#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H


typedef struct {
    char titulo[50];
    char autor[50];
} Libro;


extern Libro biblioteca[25];
extern int librn;


void cargarLibrosIniciales();
void agregarLibro();
void mostrarCatalogo();
void registrarPrestamo();
void registrarDevolucion();

#endif 
