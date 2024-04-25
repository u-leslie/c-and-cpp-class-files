//#include <iostream>
//
//using namespace std;
//
//// Node structure for linked list
//struct Node {
//    int data;
//    Node* next;
//};
//
//// Functions for linked list
//void addNode(Node** head, int data) {
//    Node* newNode = new Node();
//    newNode->data = data;
//    newNode->next = *head;
//    *head = newNode;
//}
//
//void sortList(Node** head) {
//    // Sorting linked list
//    for (Node* i = *head; i != nullptr; i = i->next) {
//        for (Node* j = i->next; j != nullptr; j = j->next) {
//            if (i->data > j->data) {
//                int temp = i->data;
//                i->data = j->data;
//                j->data = temp;
//            }
//        }
//    }
//}
//
//void deleteLastNode(Node** head) {
//    if (*head == nullptr) {
//        cout << "List is empty!\n";
//        return;
//    }
//
//    if ((*head)->next == nullptr) {
//        Node* temp = *head;
//        *head = nullptr;
//        delete temp;
//        return;
//    }
//
//    Node* current = *head;
//    while (current->next->next != nullptr) {
//        current = current->next;
//    }
//    Node* temp = current->next;
//    current->next = nullptr;
//    delete temp;
//}
//
//// Functions for stack (using linked list)
//Node* top = nullptr;
//
//void push(int data) {
//    addNode(&top, data);
//}
//
//void pop() {
//    if (top == nullptr) {
//        cout << "Stack is empty!\n";
//    } else {
//        Node* temp = top;
//        top = top->next;
//        delete temp;
//    }
//}
//
//// Functions for queue (using linked list)
//Node* front = nullptr;
//Node* rear = nullptr;
//
//void enqueue(int data) {
//    Node* newNode = new Node();
//    newNode->data = data;
//    newNode->next = nullptr;
//    if (front == nullptr) {
//        front = rear = newNode;
//    } else {
//        rear->next = newNode;
//        rear = newNode;
//    }
//}
//
//void dequeue() {
//    if (front == nullptr) {
//        cout << "Queue is empty!\n";
//    } else {
//        Node* temp = front;
//        front = front->next;
//        if (front == nullptr) {
//            rear = nullptr;
//        }
//        delete temp;
//    }
//}
//
//int main() {
//    int choice, data;
//    Node* head = nullptr;
//
//    do {
//        cout << "\nChoose a data structure (1-Linked List, 2-Stack, 3-Queue, 0-Exit): ";
//        cin >> choice;
//
//        switch (choice) {
//            case 1: // Linked List
//                for (int i = 0; i < 4; i++) {
//                    cout << "Enter data for node " << i + 1 << ": ";
//                    cin >> data;
//                    addNode(&head, data);
//                }
//                sortList(&head);
//                deleteLastNode(&head);
//                // You can add more linked list operations here
//                break;
//            case 2: // Stack
//                for (int i = 0; i < 5; i++) {
//                    cout << "Enter data to push: ";
//                    cin >> data;
//                    push(data);
//                }
//                pop(); // Delete last element
//              
//                break;
//            case 3: // Queue
//                for (int i = 0; i < 5; i++) {
//                    cout << "Enter data to enqueue: ";
//                    cin >> data;
//                    enqueue(data);
//                }
//                dequeue(); // Remove one element
//                
//                break;
//            case 0:
//                cout << "Exiting...\n";
//            }
//        }
//        return 0;
//    }
//                


#include <iostream>

using namespace std;

// Node structure for linked list
struct Node {
    int data;
    Node* next;
};

// Functions for linked list
void addNode(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void sortList(Node** head) {
    // Bubble sort implementation (reference for educational purposes only)
    for (Node* i = *head; i != nullptr; i = i->next) {
        for (Node* j = i->next; j != nullptr; j = j->next) {
            if (i->data > j->data) {
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

void deleteLastNode(Node** head) {
    if (*head == nullptr) {
        cout << "List is empty!\n";
        return;
    }

    if ((*head)->next == nullptr) {
        Node* temp = *head;
        *head = nullptr;
        delete temp;
        return;
    }

    Node* current = *head;
    while (current->next->next != nullptr) {
        current = current->next;
    }
    Node* temp = current->next;
    current->next = nullptr;
    delete temp;
}

// Functions for stack (using linked list)
Node* top = nullptr;

void push(int data) {
    addNode(&top, data);
}

void pop() {
    if (top == nullptr) {
        cout << "Stack is empty!\n";
    } else {
        Node* temp = top;
        top = top->next;
        delete temp;
    }
}

// Functions for queue (using linked list)
Node* front = nullptr;
Node* rear = nullptr;

void enqueue(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    if (front == nullptr) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue() {
    if (front == nullptr) {
        cout << "Queue is empty!\n";
    } else {
        Node* temp = front;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
    }
}

int main() {
    int choice, data;
    Node* head = nullptr;

    do {
        cout << "\nChoose a data structure (1-Linked List, 2-Stack, 3-Queue, 0-Exit): ";
        cin >> choice;

        switch (choice) {
            case 1: // Linked List
                // Add 4 nodes
                for (int i = 0; i < 4; i++) {
                    cout << "Enter data for node " << i + 1 << ": ";
                    cin >> data;
                    addNode(&head, data);
                }

                // Sort the list (educational purposes only)
                sortList(&head);

                // Delete the last element
                deleteLastNode(&head);

                // **Add more linked list operations here**
                break;
            case 2: // Stack
                // Push 5 elements
                for (int i = 0; i < 5; i++) {
                    cout << "Enter data to push: ";
                    cin >> data;
                    push(data);
                }

                // Pop the last element (check for emptiness)
                pop();

          
                break;
            case 3: // Queue
                // Enqueue 5 elements
                for (int i = 0; i < 5; i++) {
                    cout << "Enter data to enqueue: ";
                    cin >> data;
                    enqueue(data);
                }

                // Dequeue one element (check for emptiness)
                dequeue();
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid";
            }
        }
    }
