//Linear data structure used to store values
//SIngly LINKED LIST
/*#include <iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node(int data){
        value = data;
        next = NULL;
    }
};

int main(){
    Node * n = new Node(1);
    cout<<n->value<<" "<<n->next<<endl;
    return 0;
}*/

#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int data) {
        value = data;
        next = NULL;
    }
};

void InsertAtHead(Node*& head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

//if tail poiner is given then time compexicity is O(1)
//if tail poiner is not given then time compexicity is O(n)
void InsertAtTail(Node*& head, int value ){
    Node* new_node = new Node(value);
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //Temp has reached at last node
    temp->next=new_node;

}

void InsertAtPosition(Node*&head , int value , int pos){
    if(pos==0){
        InsertAtHead(head , value);
        return;
    }

    Node* new_node = new Node(value);
    Node* temp = head;
    int current_pos = 0;
    while(current_pos!= pos-1){
        temp= temp->next;
        current_pos ++;
    }
    //temp is pointing to the node at pos-1
    new_node->next= temp->next;
    temp->next = new_node;
}

void deleteAtHead(Node* & head){
    Node*temp = head; //Node to be deleted
    head = head->next;
    free(temp);
}

void deleteAtTail(Node* &head){
    Node* second_last = head;
    while (second_last->next->next!=NULL){
     second_last= second_last->next;   
    }
    //now second last point towards second last node
    Node* temp = second_last->next;
    second_last->next=NULL;
    free(temp);
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;  // Add this to indicate the end of the list
}

void UpdateAtPosition(Node* &head, int k, int value){
    Node* temp = head;
    int curr_pos = 0;
    while(curr_pos!=k){
        temp= temp->next;
        curr_pos++;
    }

    //temp will be pointing to the kth node
    temp->value= value;
}

int main() {
    Node* head = NULL;
    InsertAtHead(head, 2);
    display(head);  // Add missing semicolon
    InsertAtHead(head, 1);
    display(head);
    InsertAtTail(head, 3);
    display(head);
    InsertAtPosition(head,4,1);
    display(head);
    UpdateAtPosition(head,2,5);
    display(head);

    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);


    return 0;
}