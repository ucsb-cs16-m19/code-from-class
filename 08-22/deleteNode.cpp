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

Node* deleteNodeRecursiveHelper(Node *head, int value);

void deleteNodeRecursive(LinkedList *list, int value) {
    // call the helper function on the head Node
    // we get back a pointer to the head of the new list
    Node *headOfListWithoutValueInIt = 
        deleteNodeRecursiveHelper(list->head, value);

    // it's possible that the head and the tail changed; 
    // we need to reset them!

    list->head = headOfListWithoutValueInIt;
    list->tail = list->head;
    // find the tail
    while (list->tail != NULL && list->tail->next != NULL) {
        list->tail = list->tail->next;
    }
}

// this function does the actual deletion
// it takes the head of the original list, 
// and returns a new list (becuase maybe you needed to delete the old head)
Node* deleteNodeRecursiveHelper(Node *head, int value) {
    // base case
    if (head == NULL) {
        // delete all the nodes from an empty list with data=value
        return NULL;
    } else {
        // non-empty list
        // we can assume that the recursive call will delete for us
        // all the nodes in the smaller list with data=value
        Node *smallerListWithValueDeleted = 
            deleteNodeRecursiveHelper(head->next, value);
        // so smallerListWithValueDeleted contains a pointer to the head
        // of that updated smaller list

        // let's build up the final, bigger solution by considering
        // our head
        if (head->data == value) {
            // we need to delete the head node in this case
            delete head;
            // the result is just the smaller list now!
            return smallerListWithValueDeleted;
        } else {
            // the head's data != value, so let's keep it
            head->next = smallerListWithValueDeleted;
            return head;
        }
    }
}

void printList(LinkedList *l) {
    for (Node *n = l->head; n != NULL; n = n->next) {
        cout << n->data << "->";
    }
    cout << "X\n";
}

int main(int argc, char *argv[])
{
    Node *two1 = new Node;
    Node *one = new Node;
    Node *two2 = new Node;
    Node *three = new Node;

    two1->data = 2;
    one->data = 1;
    two2->data = 2;
    three->data = 3;

    two1->next = one;
    one->next = two2;
    two2->next = three;
    three->next = NULL;

    LinkedList *l = new LinkedList;
    l->head = two1;
    l->tail = three;

    // we created the LinkedList [2, 1, 2, 3]

    printList(l);

    deleteNodeRecursive(l, 2);

    printList(l);    

    return 0;
}