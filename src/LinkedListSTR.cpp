#include <string>
#include <iostream>
#include "Nodo.h"
#include "LinkedListSTR.h"

LinkedListSTR::LinkedListSTR()
{
    this->head = NULL;
    this->tail = NULL;
}

void LinkedListSTR::add(std::string element)
{
    Nodo *n = new Nodo(element);
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        tail->prox = n;
    }
    tail = n;
    count++;
}
void LinkedListSTR::addCheck(std::string element)
{
    Nodo *ptr;
    Nodo *n = new Nodo(element);
    if (head == NULL)
    {
        head = n;
        tail = n;
        count++;
        return;
    }
    else
    {

        ptr = head;

        while (true)
        {
            if (element == ptr->nome)
            {
                std::cout << "nome ja incluso na lista: " << element << std::endl;
                delete n;
                return;
            }
            else
            {
                ptr = ptr->prox;
            }
            if (ptr == NULL)
            {
                break;
            }
        }

        tail->prox = n;
        tail = n;
        count++;
    }
}
void LinkedListSTR::removeByElement(std::string element)
{

    if (head == NULL)
    {
        std::cout << "Lista Vazia" << std::endl;
        return;
    }

    if (head->nome == element)
    {
        Nodo *aux = head;
        head = head->prox;
        if (count == 1)
        {
            tail = NULL;
        }
        count--;
        std::cout<<"removido o item head: "<<aux->nome<<std::endl;
        delete aux;
        return;
    }
    Nodo *aux = head->prox;
    Nodo *ant = head;

    while (aux != NULL)
    {
        if (aux->nome == element)
        {
            if (aux == tail)
            {
                tail = ant;
                tail->prox = NULL;
            }
            else
            {
                ant->prox = aux->prox;
            }
            count--;
            std::cout<<"removido o item: "<<aux->nome<<std::endl;
            delete aux;
            return;
        }
        ant = ant->prox;
        aux=aux->prox;
    }
    return;
}

void LinkedListSTR::imprimeLista()
{
    Nodo *ptr;
    if (head == NULL)
    {
        std::cout << "lista vazia";
        return;
    }
    ptr = head;
    while (true)
    {
        std::cout << "Nome: " << ptr->nome << std::endl;
        if (ptr->prox == NULL)
        {
            std::cout << "fim da lista";
            break;
        }
        ptr = ptr->prox;
    }
}