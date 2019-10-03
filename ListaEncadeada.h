//
// Created by gustavo on 10/3/19.
//

#ifndef EXEMPLOLISTAENCADEADA_LISTAENCADEADA_H
#define EXEMPLOLISTAENCADEADA_LISTAENCADEADA_H

#include "Nodo.h"

class ListaEncadeada {
private:
    int quant;
    Nodo* head;
public:
    ListaEncadeada();

    int getQuant() const;

    void setQuant(int quant);

    Nodo *getHead() const;

    void setHead(Nodo *head);

    void insert(Cao c);

    void remove();

    Nodo* getElemento(int n);
};


#endif //EXEMPLOLISTAENCADEADA_LISTAENCADEADA_H
