#include<iostream>
using namespace std;


class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertAtNode(Node* &tail , int element , int data){
    // Assuming the Element is Present in the LL

   //empty list
    if(tail == NULL) {
        Node* newNode = new Node(data);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element) {
            curr = curr -> next;
        }
        
        //element found -> curr is representing element wala node
        Node* temp = new Node(data);
        temp -> next = curr -> next;
        curr -> next = temp;

    }
};

void deleteNode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}
void print(Node* tail){

    Node* temp =tail;

    // while(tail-> next != temp ){
    //     cout<< tail-> data <<" ";
    //     tail= tail->next;
    // }
    // cout<<" ";
    do{
         cout<< tail-> data <<" ";
        tail= tail->next;
    }while (tail-> next != temp)
    
    ;
};

int main(){

    Node* tail = NULL;

    insertAtNode(tail , 10 , 5);

    print(tail);

    insertAtNode(tail , 5 , 15);

    print(tail);

    insertAtNode(tail , 15 , 25);

    print(tail);

    deleteNode(tail,5);
    print(tail);

      deleteNode(tail,25);
    print(tail);
}