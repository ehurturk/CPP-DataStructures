#pragma once
#include <iostream>
#include "Node.h"
#include "Collections.h"

template <typename T>
class Stack : public Collections<T> {
public:
    T push(T obj) {
        Node<T>* newNode = (Node<T>*) malloc(sizeof(Node<T>));
        newNode->data = obj;
        newNode->next = this->head;
        this->head = newNode;
        return obj;

    }


};