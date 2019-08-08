#include <iostream>
using namespace std;

struct Node {
    int data; 
    Node *next;
};

// helper function
int sum(Node* head) {
    // base case: 1-element list; the min is the single element
    if (head == NULL) {
        return 0;
    }

    return head->data + sum(head->next);
}

// LinkedList is hard to break down recursively
int sumLinkedList(LinkedList *l) {
    return sum(l->head);
}

int main(int argc, char *argv[])
{
    Node *ten = new Node;
    (*ten).data = 10;

    Node *fifty = new Node;
    fifty->data = 50;

    Node *twenty = new Node;
    twenty->data = 20;

    Node *forty = new Node;
    forty->data = 40;
    forty->next = NULL;

    ten->next = fifty;
    fifty->next = twenty;
    twenty->next = forty;

    LinkedList *l = new LinkedList;
    l->head = ten;
    l->tail = forty;

    cout << sumLinkedList(l) << endl;

    return 0;
}