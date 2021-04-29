#pragma once

#include <iostream>
#include "Node.h"

#define LOG(x) std::cout << x << std::endl;

template <typename T>
class Queue {

public:
    Node<T>* head = NULL;
    Node<T>* tail = NULL;

    void traverse()
    {
        if (head == NULL) {
            return;
        }
        Node<T>* temp = head;
        while (temp != tail)
        {
            LOG(temp->data);
            temp = temp->next;
        }

        LOG(temp->data);

    }

    T add(T obj)
    {
        Node<T>* newNode = (Node<T>*) malloc(sizeof(Node<T>));
        newNode->data = obj;

        if (head == NULL || tail == NULL)
        {
            // LOG("Head or tail is null.");
            head = newNode;
            tail = newNode;
            return obj;
        }

        tail->next = newNode;
        tail = newNode;
        return obj;
    }

    T pop() {
        
        T obj = head->data;
        Node<T>* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

        return obj;
    }
};