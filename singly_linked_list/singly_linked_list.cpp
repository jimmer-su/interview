/*
Singly linked list

C
//The simplest singly linked list element
typedef struct ListElement {
    struct ListElement *next;
} ListElement;

typedef struct NodeElement {
    struct NodeElement *next;
    int data;
} NodeElement;

bool insert_in_front(NodeElement **head, int data)
{
    NodeElement *new = (NodeElement *)malloc(sizeof(NodeElement));
    if( !new )
        return false;

    new->next = *head;
    new->data = data;
    *head = new;
    return true;
}

bool delete_element(NodeElement **head, NodeElement *deleteMe)
{
    NodeElement *elem;
    
    if( !head || !*head || !deletaMe )
        return false;

    elem = *head;
    // Special case for head
    if( deleteMe == *head )
    {
        *head = elem->next;
        free(deleteMe);
        return true;
    }

    while( elem ) {
        if( elem->next == deleteMe ) {
            elem->next = deleteMe->next;
            free(deleteMe);
            return true;
        }
        elem = elem->next;
    }
    return false;
}

bool delete_element_enhanced(NodeElement **head, NodeElement *deleteMe)
{
    if( !head || !*head || !delease)
        return false;

    while( *head ) {
        if( *head = deleteMe )
        {
            free(deleMe);
            return true; 
        }
        head = &(*(head)->next);
    }
    return false;
}

void delete_all_element(NodeElement **head)
{
    NodeElement *deleteMe = *head;
    while( deleteMe )
    {
        NodeElement *next = deleteMe->next;
        free(deleteMe);
        deleteMe = next;
    }
    *head = NULL;
}

NodeElement *find(const NodeElement *head, int data)
{
    NodeElement *elem = head;
    while( elem != NULL && elem->data != data ){
        elem = elem->next;
    }
    return elem;
}

void removeHead(NodeElement **head)
{
    if(!head)
        return;

    NodeElement *next;
    next = (*head)->next;
    free(*head);
    *head = next;
}


//NULL or Cycle
//Check the list is cyclic or acyclic
bool isCyclicList(NodeElement *head)
{
    NodeElement *faster, *slower;
    if( !head )
        return false;

    faster = head->next;
    slower = head;
    while(true) {
        if( !faster || !faster->next)
            return false;
        else if(faster == slower || faster->next == slower)
            return true;
        else {
            faster = faster->next->next;
            slower = slower->next;
        }
    }
}


*/
#include <iostream>
using namespace std;

//A singly linked list
class NodeElement {
    public:
        NodeElement(int value): next( NULL ), data( value ){}
        ~NodeElement(){}

        NodeElement *getNext() const { return next; }
        int value() const { return data; }

        void setNext( NodeElement *node ){ next = node; }
        void setValue( int value ){ data = value; }
    private:
        NodeElement *next;
        int         data;
};

//A templated singly linked list
template <class T>
class ListElement {
    public:
        ListElement(const T &value): next( NULL ), data( value ){}
        ~ListElement(){}

        ListElement *getNext() const {return next ;}
        const T& value() const { return data; }

        void setNext( ListElement *elem ) { next = elem ;}
        void setValue ( const T &value ) { data = value; }
    private:
        ListElement *next;
        int         data;
};

