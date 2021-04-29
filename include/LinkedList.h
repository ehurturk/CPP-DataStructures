#pragma once
#include <iostream>
#include "Node.h"
#include "Collections.h"

template <typename T>
class LinkedList : public Collections<T> {
public:
    T push(T obj) {
        Node<T>* newNode = (Node<T>*) malloc(sizeof(Node<T>));
        newNode->data = obj;
        newNode->next = NULL;
        if (this->head == NULL) {
            this->head = newNode;
            return obj;
        }

        Node<T>* temp = this->head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        return obj;

    }


};