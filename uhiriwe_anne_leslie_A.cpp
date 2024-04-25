#include <iostream>
#include <algorithm>

using namespace std;

// Node structure for linked list
struct Node {
    int data;
    Node* next;
};

// Linked List class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void addNode(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void sortList() {
        // Bubble sort implementation for simplicity
        if (head == nullptr || head->next == nullptr) {
            return;
        }

        bool swapped;
        Node* ptr1;
        Node* lptr = nullptr;

        do {
            swapped = false;
            ptr1 = head;

            while (ptr1->next != lptr) {
                if (ptr1->data > ptr1->next->data) {
                    int temp = ptr1->data;
                    ptr1->data = ptr1->next->data;
                    ptr1->next->data = temp;
                    swapped = true;
                }
                ptr1 = ptr1->next;
            }
            lptr = ptr1;
        } while (swapped);
    }

    void deleteLastNode() {
        if (head == nullptr) {
            cout << "Linked List is empty." << endl;
            return;
        }

        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }

        Node* current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }

        delete current->next;
        current->next = nullptr;
    }

    void displayList() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

// Stack class
class Stack {
private:
    int capacity;
    int top;
    int* elements;

public:
    Stack(int size) : capacity(size), top(-1) {
        elements = new int[capacity];
    }

    ~Stack() {
        delete[] elements;
    }

    void push(int value) {
        if (top == capacity - 1) {
            cout << "Stack is full." << endl;
            return;
        }

        elements[++top] = value;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return;
        }

        top--;
    }

    void displayStack() {
        for (int i = 0; i <= top; i++) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }
};

// Queue class
class Queue {
private:
    static const int MAX_SIZE = 5;
    int elements[MAX_SIZE];
    int front, rear;

public:
    Queue() : front(-1), rear(-1) {}

    bool isFull() {
        return (rear + 1) % MAX_SIZE == front;
    }

    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full." << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }

        elements[rear] = value;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
    }

    void displayQueue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        int i = front;
        while (i != rear) {
            cout << elements[i] << " ";
            i = (i + 1) % MAX_SIZE;
        }
        cout << elements[rear] << endl;
    }
};

int main() {
    LinkedList linkedList;
    Stack myStack(5);
    Queue myQueue;

    int choice;

    do {
        cout << "Choose an operation to perform:" << endl;
        cout << "1.Operate on Linked List" << endl;
        cout << "2.Operate on Stack" << endl;
        cout << "3.Operate Queue" << endl;
        cout << "0.Exit" << endl;

        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 1; i <= 4; i++) {
 	            int nodeValue;
                    cout << "Enter value for node " << i << ": ";
                    cin >> nodeValue;
                    linkedList.addNode(nodeValue);
                }
                cout << "Linked List after adding 4 elements: ";
                linkedList.displayList();
                linkedList.sortList();
                linkedList.deleteLastNode();
                cout << "Linked List after sorting its element and deletion of the last element: ";
                linkedList.displayList();
                break;

            case 2:
                // Stack
                for (int i = 1; i <= 5; i++) {
 	            int elementValue;
                    cout << "Enter value to push onto stack " << i << ": ";
                    cin >> elementValue;
                    myStack.push(elementValue);
                }
                myStack.pop();
				cout << "Stack element after 5 pushing 	and 1 pop ";
                myStack.displayStack();
                break;


            case 3:
                // Queue
                for (int i = 1; i <= 5; i++) {
 	            int elementValue;
                    cout << "Enter value for node " << i << ": ";
                    cin >> elementValue;
                    myQueue.enqueue(elementValue);
                }
                myQueue.dequeue();
                  cout << "Queue element after 5 enqueue and 1 dequeue operations: ";
                myQueue.displayQueue();
                break;

            case 0:
                cout << "Exiting ..." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
