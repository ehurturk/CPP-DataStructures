#pragma once

#include <iostream>
#include "Node.h"

#define LOG(x) std::cout << x << std::endl;

template <typename T>
class Stack {

public:
    Node<T>* head = NULL;

    void traverse()
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

    T add(T obj)
    {
        Node<T>* newNode = (Node<T>*) malloc(sizeof(Node<T>));
        newNode->data = obj;
        newNode->next = head;
        head = newNode;
        return obj;
    }

    bool add(int index, T obj) {
        Node<T>* temp = head;
        unsigned int counter = 0;
        while (counter != index) {
            if (temp->next == NULL) {
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

};