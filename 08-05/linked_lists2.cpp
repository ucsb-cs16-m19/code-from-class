#include <iostream>
using namespace std;

struct Node {
    int data; 
    Node *next;
};

struct LinkedList {
    Node *head; // first Node of the list
    Node *tail; // last Node of the list
};

void insertToHeadOfList(LinkedList *l, int value) {
    // make a new Node with its data set to the value provided
    Node *new_node = new Node;
    new_node->data = value;

    // add that new Node into the head of the given list
    new_node->next = l->head; // the next is the old head
    l->head = new_node; // this Node becomes the new head

    // if the list was initially empty, I need to change the tail pointer too
    if (l->tail == NULL) {
        l->tail = new_node;
    }
}

/*

I want to print the list [1,2,3] as "1->2->3->X"

*/
void printList(LinkedList *l) {
    // start at the head, and keep iterating until we reach the end of the list
    // we know we're at the end (i.e., the last element) when our next pointer
    // is set to NULL

    Node *n = l->head;
    while (n != NULL) {
        // n isn't NULL inside this loop body, so I can dereference it safely
        cout << n->data << "->";

        // move to the next Node in the list
        n = n->next;
    }
    // once this loop is finished, n must be NULL
    cout << "X\n";
}

int lengthOfList(LinkedList *list) {
    int counter = 0;

    // I converted the while loop above to the following:
    for (Node *n = list->head; n != NULL; n = n->next) {
        // we reach the body of the loop for every valid Node in the list
        counter++;
    }

    return counter;
}

void freeLinkedList(LinkedList *list) {
    // we can't delete the LinkedList first--then we'd lose access to
    // all the Nodes!

    // let's delete the Nodes first
    Node *n = list->head;
    while (n != NULL) {
        Node *next = n->next; // save that next pointer
        cout << "I'm about to delete the node with data=" << n->data << endl;
        delete n;
        n = next;
    }

    // then after they're all deleted we can delete the LinkedList
    cout << "I'm about to delete the LinkedList\n";
    delete list;
}

int main(int argc, char *argv[])
{
    LinkedList *l = new LinkedList;

    // let's start l off empty

    l->head = l->tail = NULL;

    // let's use our function insertToHeadOfList to create the list [1, 2, 3]

    cout << "The length of l is currently: " << lengthOfList(l) << endl;
    insertToHeadOfList(l, 3);
    cout << "The length of l is currently: " << lengthOfList(l) << endl;
    insertToHeadOfList(l, 2);
    cout << "The length of l is currently: " << lengthOfList(l) << endl;
    insertToHeadOfList(l, 1);

    printList(l);

    cout << "The length of l is finally: " << lengthOfList(l) << endl;

    freeLinkedList(l);

    return 0;
}