#include <iostream>
using namespace std;

class Node{
    public: int number;
    public: Node* pointer;
    public: Node(int data){
        number = data;
        pointer = NULL;
    };
};

void unshift(Node* &head,int data){
    Node* temporary_object = new Node(data);
    temporary_object->pointer = head;
    head = temporary_object;
};

void shift(Node* &head){
    Node* temp = head;
    head = head->pointer;
    delete temp;
};

void push_back(Node* head, int value){
    Node* temp = new Node(value);
    Node* traversal_node = head;
    while(traversal_node->pointer!=NULL){
        traversal_node = traversal_node->pointer;
    }
    traversal_node->pointer = temp;
};

void pop(Node* head){
    Node* temp = head;
    while(temp->pointer->pointer!=NULL){
        temp=temp->pointer;
    };
    Node* del = temp->pointer;
    temp->pointer = NULL;
    delete del;
};

void print(Node* head){
    Node* temporary_object = head;
    while(temporary_object!=NULL){
        cout<<temporary_object->number<<" ";
        temporary_object = temporary_object->pointer;
    };
};

int main(){
    Node* userLinkedList = new Node(1);
    push_back(userLinkedList,2);
    push_back(userLinkedList,3);
    push_back(userLinkedList,4);
    pop(userLinkedList);
    print(userLinkedList);
    return 0;
}