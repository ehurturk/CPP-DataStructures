#pragma once

#include <iostream>
#include "Node.h"

#define LOG(x) std::cout << x << std::endl;

template <typename T>
class Queue : public Collections<T> {

public:
    Node<T>* tail = NULL;


    T push(T obj)
    {
        Node<T>* newNode = (Node<T>*) malloc(sizeof(Node<T>));
        newNode->data = obj;

        if (this->head == NULL || tail == NULL)
        {
            this->head = newNode;
            tail = newNode;
            return obj;
        }

        tail->next = newNode;
        tail = newNode;
        return obj;
    }

    T pop() {

        T obj = this->head->data;
        Node<T>* temp = this->head;
        this->head = this->head->next;
        temp->next = NULL;
        delete temp;

        return obj;
    }

    void traverse() override
    {
        if (this->head == NULL) {
            return;
        }
        Node<T>* temp = this->head;
        while (temp != tail)
        {
            LOG(temp->data);
            temp = temp->next;
        }

        LOG(temp->data);
    }


};