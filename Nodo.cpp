//
// Created by gustavo on 10/3/19.
//

#include "Nodo.h"

const Cao &Nodo::getItem() const {
    return item;
}

void Nodo::setItem(const Cao &item) {
    Nodo::item = item;
}

Nodo *Nodo::getProx() const {
    return prox;
}

void Nodo::setProx(Nodo *prox) {
    Nodo::prox = prox;
}
