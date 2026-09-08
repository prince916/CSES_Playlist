#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertEnd(Node*& head, int x) {
    Node* n = new Node{x, NULL};

    if (!head) {
        head = n;
        return;
    }

    Node* t = head;
    while (t->next)
        t = t->next;

    t->next = n;
}

int main() {
    Node* head = NULL;
    int n, x;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        insertEnd(head, x);
    }

    for (Node* t = head; t; t = t->next)
        cout << t->data << " ";

    return 0;
}