// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  //constructor
  Node(int data){
      this->data = data;
      this->next = NULL;
  }
  
  //destructor
  ~Node(){
      int value = this->data;
      //memory free
      if(this->next!=NULL){
          delete next;
          this->next=NULL;
      }
      cout<<"memory is fre for node with data : "<<value<<endl;
  }
};

void insertAtHead(Node* &head, int data){
    //create new node
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}
void insertAtMiddle(Node* &tail, Node* &head, int position, int data){
    //insert at head
    if(position==1){
        insertAtHead(head, data);
        return;
    }
    
    //traverse to the position-1 at which node is inserted
    Node* temp = head;
    int count = 1;
    
    //insert at last position(tail)
    if(temp -> next ==NULL){
        insertAtTail(tail,data);
        return;
    }
    
    while(count<position-1){
        temp = temp->next;
        count++;
    }
    
    //creating node to be inserted
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node* &head){
    //delete starting node
    if(position==1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    //delete any middle or last node
    else{
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while(count<position){
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
        cout<<endl;
}


int main() {
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head = node1;
    print(head);
    
    cout<<"--------------------------INSERTION----------------------------"<<endl;
    
    insertAtHead(head,12);
    print(head);
    
    insertAtHead(head,45);
    print(head);
    
    Node* tail = node1;
    insertAtTail(tail,50);
    print(head);
    
    Node* temp = head;
    insertAtMiddle(tail,head,3,16);
    print(head);
    
    insertAtMiddle(tail,head,6,79);
    print(head);

    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    
    cout<<"--------------------------DELETION----------------------------"<<endl;
    
    deleteNode(1,head);
    print(head);
    
    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    //deleteNode(3,head);
    //////print(head);
    
    //deleteNode(1,head);
    //print(head);
    
    
}
