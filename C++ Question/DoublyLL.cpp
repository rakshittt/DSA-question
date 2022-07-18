#include <iostream>
using namespace std;

class Node{
public:
int data;
Node* prev;
Node* next;

    Node(int d){
        this->data =d;
        this->next= NULL;
        this->prev= NULL;

    }

    // Deconstructor
    ~Node(){
        int value =this->data;
        if(next != NULL){
            delete next;
            next =NULL;
        }
        cout<< "Memory free " << value <<endl;
    }
};

// Traversing a Linked List
void print(Node* head){

    Node* temp =head;

    while(temp !=0){
        cout<< temp->data<<"  " ;
        temp= temp->next;
    }
    cout<<endl;
};

void insertAthead(Node* &head , int data){

    // empty List
    if(head==NULL){
        Node* temp = new Node(data);
        head=temp;
    }
    else{

    Node* temp = new Node(data);
    temp->next = head;
    head->prev =temp ;
    head =temp;
    }
}

void insertAtTail(Node* &tail , int data){

     if(tail==NULL){
        Node* temp = new Node(data);
        tail=temp;
    }
    else{
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev= tail;
    tail= temp; 
    }
};

void InsertAtPosition(Node* &head, Node* &tail,int position , int d){

    if(position == 1){
        insertAthead(head ,d);
        return ;
    }
    Node* temp = head;
    int count =1;

    while(count< position-1){
        temp = temp->next;
        count ++;
    }

    if(temp->next == NULL ){
        insertAtTail(tail,d);
        return ;
    }

    // Creating a node for d
    Node* nodetoInsert = new Node(d);

    nodetoInsert-> next = temp -> next;
    temp->next->prev = nodetoInsert;
    temp->next=nodetoInsert;
    nodetoInsert->prev = temp;

}

void deleteNode(int position , Node* &head){

    if(position ==1 ){
        // Deleting first Node
        Node* temp = head;
        temp->next->prev =NULL;
        head = temp->next;
        // Free memory
        temp->next =NULL;
        delete temp;
    }
    else{
        // Deleting any Node
        Node* curr = head;
        Node* prev = NULL;

        int cnt =1 ;
        if(cnt < position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr ->next;
        curr ->next = NULL;
        delete curr;
    }
}



int main(){

    Node* node1 = new Node(10);
    Node* head =node1;
    Node* tail = node1;

    // print(head);

    insertAthead(head , 15);
    insertAthead(head , 18);
    insertAthead(head , 22);
    insertAthead(head , 29);

    print(head);

    insertAtTail(tail, 22);
    print(head);

    InsertAtPosition(head,tail,3,80);
    print(head);

    deleteNode(1,head);
    print(head);
   
     deleteNode(4,head);
    print(head);
}