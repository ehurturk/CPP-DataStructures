#pragma once
#include <iostream>
#include "Node.h"
#define LOG(x) std::cout << x << std::endl;

template <typename T>
class LinkedList {
public:
    Node<T>* head = NULL;
    
    T add(T obj) {
        Node<T>* newNode = (Node<T>*) malloc(sizeof(Node<T>));
        newNode->data = obj;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            return obj;
        }

        Node<T>* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        return obj;

    }

    void traverse() {
        Node<T>* temp = head;
        while (temp->next != NULL) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        LOG(temp->data);
    }
};