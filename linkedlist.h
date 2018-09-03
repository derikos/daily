#ifndef LINKEDLIST_H
#define LINKEDLIST_H


struct Node
{
    Node* next;
    int data;
};

class LinkedList
{
public:
    LinkedList();
    void addNode(int data);
    void display();
    void insert_start(int value);
    void insert_position(int pos, int value);
    void delete_first();
    void delete_last();
    void delete_position(int pos);

private:
    Node* head;
    Node* tail;


};

#endif // LINKEDLIST_H
