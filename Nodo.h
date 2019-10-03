//
// Created by gustavo on 10/3/19.
//

#ifndef EXEMPLOLISTAENCADEADA_NODO_H
#define EXEMPLOLISTAENCADEADA_NODO_H

#include "Cao.h"

class Nodo {
private:
    Cao item;
    Nodo* prox;
public:
    Nodo();
    Nodo(Cao &c);

    const Cao &getItem() const;

    void setItem(const Cao &item);

    Nodo *getProx() const;

    void setProx(Nodo *prox);
};


#endif //EXEMPLOLISTAENCADEADA_NODO_H
