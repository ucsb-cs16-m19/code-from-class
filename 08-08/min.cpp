#include <iostream>
using namespace std;

struct Node {
    int data; 
    Node *next;
};

// this function is recursive because it calls itself
int min(Node* head) {
    // base case: 1-element list; the min is the single element
    if (head->next == NULL) {
        return head->data;
    }

    // recursive case: get the min of the smaller list
    int min_of_smaller_list = min(head->next);

    // use that answer to build up the bigger solution: minimum of the list
    // that also contains our current head node
    if (head->data < min_of_smaller_list) {
        return head->data;
    } else {
        return min_of_smaller_list;
    }
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

    cout << min(ten) << endl;

    return 0;
}