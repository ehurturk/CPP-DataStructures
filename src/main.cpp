#include <iostream>
#include "Stack.h"
#include "LinkedList.h"
#include "Queue.h"

#define LOG(x) std::cout << x << std::endl;

int main()
{
    Stack<int> s1;

    LOG("============== STACK ============");
    s1.add(10);
    s1.add(20);
    s1.add(30);
    s1.add(1, 40);
    s1.traverse();
    LOG("============== LINKED LIST ===========");
    LinkedList<int> list;

    list.add(10);
    list.add(20);
    list.add(20);
    list.add(20);
    list.traverse();
    LOG("============== QUEUE ===========");
    Queue<int> queue;

    queue.add(10);
    queue.add(20);
    queue.add(30);
    queue.pop();
    queue.traverse();
    return 0;

}