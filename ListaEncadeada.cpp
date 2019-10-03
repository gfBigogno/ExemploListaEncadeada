//
// Created by gustavo on 10/3/19.
//

#include "ListaEncadeada.h"

ListaEncadeada::ListaEncadeada() {
    this->quant = 0;
    this->head = NULL;
}

void ListaEncadeada::insert(Cao c) {
    Nodo* novo = new Nodo();
    novo->setItem(c);
    //atenção na ordem de declaração
    novo->setProx(this->head);
    head = novo;
    quant++;
}

void ListaEncadeada::remove() {
    head = head->getProx();
    quant--;
}

Nodo* ListaEncadeada::getElemento(int n) {
    Nodo* c = head;
    int i = 1;
    while(i <= n-1 && c->getProx() != NULL){
        c = c->getProx();
        i++;
    }
    if(i == n){
        return c;
    }else{
        return NULL;
    }
}

int ListaEncadeada::getQuant() const {
    return quant;
}

void ListaEncadeada::setQuant(int quant) {
    ListaEncadeada::quant = quant;
}

Nodo *ListaEncadeada::getHead() const {
    return head;
}

void ListaEncadeada::setHead(Nodo *head) {
    ListaEncadeada::head = head;
}
