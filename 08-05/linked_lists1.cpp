#include <iostream>
using namespace std;

struct Node {
    int data; 
    Node *next;
};

struct LinkedList {
    Node *head;
    Node *tail;
};

int main(int argc, char *argv[])
{
    Node *head = NULL; // an empty list is indicated by a NULL pointer

    Node *ten = new Node;
    (*ten).data = 10;
    ten->next = NULL;
    head = ten;

    Node *twenty = new Node;
    twenty->data = 20;
    twenty->next = NULL;

    ten->next = twenty;

    LinkedList *l = new LinkedList;
    l->head = ten;
    l->tail = twenty;

    return 0;
}