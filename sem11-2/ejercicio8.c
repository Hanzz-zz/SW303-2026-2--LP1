#include <stdio.h> 
#include <stdlib.h> 

typedef struct nodo {
    int valor;
    int altura;             
    struct nodo *izq;
    struct nodo *der;
} Nodo;

int obtenerAltura(Nodo *n) {
    if (n == NULL) return 0;
    return n->altura;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

Nodo* crearNodo(int valor) {
    Nodo *nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->valor = valor;
    nuevo->izq = NULL;
    nuevo->der = NULL;
    nuevo->altura = 1;
    return nuevo;
}

int obtenerBalance(Nodo *n) {
    if (n == NULL) return 0;
    return obtenerAltura(n->izq) - obtenerAltura(n->der);
}

Nodo* rotarDerecha(Nodo *y) {
    Nodo *x = y->izq;
    Nodo *T2 = x->der;
    x->der = y;
    y->izq = T2;

    y->altura = max(obtenerAltura(y->izq), obtenerAltura(y->der)) + 1;
    x->altura = max(obtenerAltura(x->izq), obtenerAltura(x->der)) + 1;

    return x;
}

Nodo* rotarIzquierda(Nodo *x) {
    Nodo *y = x->der;
    Nodo *T2 = y->izq;

    y->izq = x;
    x->der = T2;

    x->altura = max(obtenerAltura(x->izq), obtenerAltura(x->der)) + 1;
    y->altura = max(obtenerAltura(y->izq), obtenerAltura(y->der)) + 1;

  
    return y;
}

Nodo* Insertar(Nodo *nodoActual, int nuevoValor) {

    if (nodoActual == NULL) {
        return crearNodo(nuevoValor);
    }

    if (nuevoValor < nodoActual->valor) {
        nodoActual->izq = Insertar(nodoActual->izq, nuevoValor);
    } else if (nuevoValor > nodoActual->valor) {
        nodoActual->der = Insertar(nodoActual->der, nuevoValor);
    } else {
    
        return nodoActual;
    }

    nodoActual->altura = 1 + max(obtenerAltura(nodoActual->izq), 
                                 obtenerAltura(nodoActual->der));

    int balance = obtenerBalance(nodoActual);

    if (balance > 1 && nuevoValor < nodoActual->izq->valor) {
        return rotarDerecha(nodoActual);
    }

    if (balance < -1 && nuevoValor > nodoActual->der->valor) {
        return rotarIzquierda(nodoActual);
    }

    if (balance > 1 && nuevoValor > nodoActual->izq->valor) {
        nodoActual->izq = rotarIzquierda(nodoActual->izq);
        return rotarDerecha(nodoActual);
    }

    if (balance < -1 && nuevoValor < nodoActual->der->valor) {
        nodoActual->der = rotarDerecha(nodoActual->der);
        return rotarIzquierda(nodoActual);
    }

    return nodoActual;
}


int Buscar(Nodo *nodoActual, int valorBuscado) {
    if (nodoActual == NULL) {
        return 0; 
    }

    if (valorBuscado == nodoActual->valor) {
        return 1; 
    }

    if (valorBuscado < nodoActual->valor) {
        return Buscar(nodoActual->izq, valorBuscado);
    } else {
        return Buscar(nodoActual->der, valorBuscado);
    }
}
void liberarArbol(Nodo *raiz) {
    if (raiz != NULL) {
        liberarArbol(raiz->izq);
        liberarArbol(raiz->der);
        free(raiz);
    }
}

int main(void) {
    Nodo *arbol1 = NULL;


    arbol1 = Insertar(arbol1, 10);
    arbol1 = Insertar(arbol1, 12); 
    arbol1 = Insertar(arbol1, 7);  
    arbol1 = Insertar(arbol1, 15); 
    arbol1 = Insertar(arbol1, 20);

    int encontrado = Buscar(arbol1, 7);
    if (encontrado) {
        printf("Valor 7 encontrado\n");
    } else {
        printf("Valor 7 no encontrado\n");
    }

    encontrado = Buscar(arbol1, 20);
    if (encontrado) {
        printf("Valor 20 encontrado\n");
    } else {
        printf("Valor 20 no encontrado\n");
    }
    liberarArbol(arbol1);

    return 0;
}