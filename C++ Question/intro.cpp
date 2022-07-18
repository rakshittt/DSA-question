#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;

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

void InsertAtHead( Node* &head , int d){

    // new node create
    Node* temp = new Node (d);
    temp-> next = head;
    head = temp ;

};

void InsertAtTail( Node* &tail , int d){

    // new node create
    Node* temp = new Node (d);
    tail-> next = temp;
    tail = temp;

};

void print( Node* &head){

    Node* temp =head;

    while(temp != 0){
        cout<< temp -> data << " ";
        temp = temp ->next;
    }
    cout<< endl;


};

void InsertAtPosition(Node* &head, Node* &tail,int position , int d){

    if(position == 1){
        InsertAtHead(head ,d);
        return ;
    }
    Node* temp = head;
    int count =1;

    while(count< position-1){
        temp = temp->next;
        count ++;
    }

    if(temp->next == NULL ){
        InsertAtTail(tail,d);
        return ;
    }

    // Creating a node for d
    Node* nodetoInsert = new Node(d);

    nodetoInsert-> next = temp -> next;
    temp->next = nodetoInsert;

}

void deleteNode(int position , Node* &head){

    if(position ==1 ){
        // Deleting first Node
        Node* temp = head;
        head = head-> next;
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

        prev->next = curr->next;
        curr->next =NULL;
        delete curr;
    }
}

int main(){

    // create a new Node
    Node* node1 = new Node(10);
    cout<< node1->data << endl;
    cout<< node1->next << endl;


    // Head pointed to node1
    Node* head = node1;
    print(head);

    InsertAtHead(head,12);

    print(head);

    InsertAtHead(head,15);

    print(head);

    Node* tail = node1;

    // print(head);

    InsertAtTail(tail,12);

    print(head);

    InsertAtTail(tail,15);

    print(head);

    // deleteNode(3 , head);

    // deleteNode(1, head);
    // deleteNode(4 , head);



    print(head);

    return 0 ;
    }