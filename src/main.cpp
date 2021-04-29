#include "Stack.h"
#include "LinkedList.h"
#include "Queue.h"

int main()
{
    LinkedList<int> list;

    list.push(10);
    list.push(20);

    list.traverse();

    Stack<const char*> s;

    s.push("Hello");
    s.push("World!");
    s.traverse();

    Queue<double> q;
    q.push(10);
    q.push(20);
    q.traverse();


    std::cin.get();
}