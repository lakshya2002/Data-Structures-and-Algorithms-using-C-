// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    
    //constructor
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node* tail, Node* head, int position, int data){
    //insert at starting
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    
    Node* temp = head;
    int count = 1;
    
    while(count<position-1){
        temp = temp->next;
        count++;
    }
    //inserting at last Position
    if(temp->next =NULL){
        insertAtTail(tail,data);
        return; 
    }
    
    Node* nodeToInsert = new Node(data);
    
    nodeToInsert ->next = temp-> next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
    
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
int main() {
    
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    
    print(head);
    cout<<"Length: "<<getLength(head)<<endl;
    
    cout<<"------------------------INSERTION------------------------"<<endl;
    
    insertAtHead(head,20);
    print(head);
    cout<<"Length: "<<getLength(head)<<endl;

    insertAtTail(tail,30);
    print(head);
    cout<<"Length: "<<getLength(head)<<endl;

    insertAtPosition(tail,head,3,40);
    print(head);
    cout<<"Length: "<<getLength(head)<<endl;

    
    
    
    
    
}
