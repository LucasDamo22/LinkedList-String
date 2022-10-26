#include <string>
#include "Nodo.h"



Nodo::Nodo(){
    this->prox= NULL;
}
Nodo::Nodo(std::string nome){
    this->nome = nome;
    this->prox = NULL;
}
Nodo::Nodo(std::string nome, Nodo *prox){
    this->nome = nome;
    this->prox = prox;
}