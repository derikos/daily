#include "linkedlist.h"
#include <iostream>

LinkedList::LinkedList()
    : head(nullptr),
      tail(nullptr)
{

}

void LinkedList::addNode(int data)
{
    std::cout << "addNode() entered"<<std::endl;
    if(head == nullptr)
    {
        std::cout << "Head was null"<<std::endl;

        head = new Node;
        tail = head;
        head->data = data;
        head->next = nullptr;
    }
    else
    {
        std::cout << "Head was ok"<<std::endl;

        tail->next = new Node;
        tail = tail->next;
        tail->data = data;
    }

}

void LinkedList::display()
{
    Node *temp = new Node;
    temp = head;

    while(temp != nullptr)
    {
        std::cout << temp->data << "\t";
        temp = temp->next;
    }
    std::cout<<std::endl;
}

void LinkedList::insert_start(int value)
{
    Node* temp = new Node;
    temp->data = value;
    temp->next = head;
    head = temp;
}

void LinkedList::insert_position(int pos, int value)
{
    Node *pre;
    Node *cur;
    Node *temp = new Node;
    cur = head;
    for(int i = 1;i < pos;i++)
    {
        pre = cur;
        cur = cur->next;
    }
    temp->data = value;
    pre->next = temp;
    temp->next = cur;
}

void LinkedList::delete_first()
{
    Node* temp = head;
    temp = head->next;
    delete head;
    head = temp;
}

void LinkedList::delete_last()
{
    Node* current = head;
    Node* previous;
    //current = head;
    while(current->next != nullptr)
    {
        previous = current;
        current = current->next;
    }
    delete tail;
    tail = previous;
    tail->next = nullptr;
}

void LinkedList::delete_position(int pos)
{
    Node* current = head;
    Node* previous;

    for(int i = 1;i < pos;i++)
    {
        previous = current;
        current = current->next;
    }
    previous->next = current->next;
    delete current;
}
