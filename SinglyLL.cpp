#include <iostream>
using namespace std;

//using structures
struct Node{
    int data;
    Node*next;
};


//using class
class Node{
	public:
		int data;
		Node*next;
};

void printList(Node*head){
    while(head!=NULL){
    	cout<<head->data<<" ";
    	head=head->next;
	}
	cout<<"NUll";
}

int main() {
    
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
 
    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();
    head->data = 1; // assign data in first node
    head->next = second; // Link first node with second
    second->data = 2; // assign data to second node
    second->next = third;
    third->data = 3; // assign data to third node
    third->next = NULL;
    // Function call
    printList(head);

    return 0;
}



//-------------------------------------------------------------------------------using class with constructor ------------------------------------------------------------

//#include<iostream>
//using namespace std;
//class Node{
//	public:
//		int data;
//		Node*next;
//		Node(int data){
//			this->data=data;
//			next=NULL;
//		}
//};
//void display(Node*n){
//	while(n!=NULL){
//		cout<<n->data<<" ";
//		n=n->next;
//	};
//	cout<<"NULL";
//	};
//int main(){
//	
//	Node n1(1);
//	Node n2(2);
//	
//	n1.next=&n2;
//	cout<<n1.data<<""<<n2.data<<endl;
//	Node *head = &n1;
//	cout<<head->data<<endl;
//	
//	Node* n3= new Node(3);
//	Node* n4= new Node(4);
//	
//	n2.next= n3;
//	n3->next = n4;
//	
//	display(head);
//	
//	return 0;
//	
//	
//	
//}
//
//
//
//


