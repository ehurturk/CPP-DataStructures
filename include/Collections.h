#pragma once

#include "Node.h"
#define LOG(x) std::cout << x << std::endl;
#include <iostream>


template <typename T>
class Collections
{
protected:
    Node<T>* head = NULL;

public:
    bool add(int index, T obj)
    {
        Node<T>* temp = head;
        unsigned int counter = 0;
        while (counter != index) {
            if (temp->next == NULL) {
                throw "Add Index Out of Bounds";
                return false;
            }

            counter += 1;
            temp = temp->next;
        }

        Node<T>* newNode = (Node<T>*) malloc(sizeof(Node<T>));
        newNode->data = obj;

        Node<T>* next = temp->next;
        temp->next = newNode;
        newNode->next = next;
        return true;
    }

    virtual void traverse()
    {
        if (head == NULL) {
            LOG("Head is null...");
            return;
        }
        Node<T>* temp = head;
        while (temp != NULL)
        {
            LOG(temp->data);
            temp = temp->next;
        }
    }
};

