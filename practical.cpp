#include <iostream>
using namespace std;

void forward_display();
void backward_display();

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

typedef struct Node node;

node *head = NULL;

void forward_display() {   
    node *temp = head;
    if (head == NULL) {
        cout << "List is empty";
        return;
    }
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void backward_display() {
    node *temp = head;
    if (head == NULL) {
        cout << "List is empty";
        return;
    }
   
    while (temp->next != NULL) {
        temp = temp->next;
    }

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
}

void createNode(int value) {
    node *newNode = new node;
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

int main() {
    createNode(10);
    createNode(20);
    createNode(30);
    createNode(40);

    cout << "Forward Display: ";
    forward_display();

    cout << "\nBackward Display: ";
    backward_display();

    return 0;
}
