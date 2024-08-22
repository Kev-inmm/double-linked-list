//
// Created by kevin on 22.08.2024.
//

#ifndef DOUBLE_LINKED_LIST_LINKEDLIST_H
#define DOUBLE_LINKED_LIST_LINKEDLIST_H

class Node{
public:
    int data;
    Node* next;
    Node* previous;

    Node();
    ~Node();
};


class LinkedList {
public:
    int size;
    bool empty;

private:
};


#endif //DOUBLE_LINKED_LIST_LINKEDLIST_H
