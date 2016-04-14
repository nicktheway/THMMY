/**
 * list.h
 * Προγραμματιστικές τεχνικές, άσκηση 8
 * Αρχείο κλάσης node 
 * Νικόλαος Κατωμέρης, 8551
 * 18/02/2016
 */

#ifndef LIST_H
#define LIST_H

#include <cstdlib>
#include <ctime>

template <class TYPE>
class Node{
public:
    Node(TYPE d);
    Node();
    void add(Node& newNode);
    TYPE getData();
    void setData(TYPE d);
    Node<TYPE> *next;
private:
    TYPE data;
    
};

template<class TYPE>
Node<TYPE>::Node(TYPE d){
    this->data = d;
    this->next = NULL;
}

template<class TYPE>
Node<TYPE>::Node(){
    this->data = rand() % 10;
    this->next = NULL;
}

template<>
Node<double>::Node(){
    this->data = ((double) rand()) / RAND_MAX;
    this->next = NULL;
}

template<class TYPE>
void Node<TYPE>::add(Node& newNode){
    this->next = &newNode;
    newNode.next = NULL;
}

template<class TYPE>
void Node<TYPE>::setData(TYPE d){
    data = d;
}

template<class TYPE>
TYPE Node<TYPE>::getData(){
    return data;
}

#endif
