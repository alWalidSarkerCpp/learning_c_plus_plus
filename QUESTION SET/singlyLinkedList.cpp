#include <iostream>
using namespace std;

class Node{
    public:
    int number;
    Node* pointer;
    Node(int data){
        number = data;
        pointer = NULL;
    }
};

//alternativeElementsAlgorithm
void alternativeElementsAlgorithm(Node* head) {
    Node* current_node = head;
    while (current_node != NULL && current_node->pointer != NULL) {
        Node* temp = current_node->pointer;
        current_node->pointer = current_node->pointer->pointer;
        delete temp;
        current_node = current_node->pointer;
    }
};

//deleteDuplicatesReturnSorted
void deleteSortedDuplicatesReturnSorted(Node* head){
    Node* current_node = head;
    while(current_node != NULL){
        while((current_node->pointer!=NULL) && (current_node->number == current_node->pointer->number)){
            Node* temp = current_node->pointer;
            current_node->pointer = current_node->pointer->pointer; 
            delete temp;
        }
        current_node = current_node->pointer;
    }
}

//Traversing in reverse order
void traversingReversedOrder(Node* head){
    if(head== NULL) return;
    traversingReversedOrder(head->pointer);
    cout<<head->number<<" ";
}

//revsersing a linked list
Node* reversingLinkedList(Node* head){
    Node* current = head;
    Node* previous  = NULL;
    while(current!=NULL){
        Node* next = current->pointer;
        current->pointer = previous;
        previous = current;
        current = next;
    }
    Node* node = previous;
    return node;
}

// reversing linked list kth steps: 
Node* reversedLinkedListKthSteps(Node* head, int steps){
    return head;
    //skipped
};

bool nodeSameOrNot(Node* node1,Node* node2){
    Node* n1 = node1;
    Node* n2 = node2;
    while(n1!=NULL && n2!=NULL){
        if(n1->number != n2->number){
            return false;
        }
        n1 = n1->pointer;
        n2 = n2->pointer;
    }
    return (n1==NULL && n2==NULL);
}

Node* intersects(Node* head1, Node* head2){
    Node* h1 = head1;
    Node* h2 = head2;
    while(h1 != NULL && h2 != NULL){
        if(h1->number==h2->number){
            return h1;
        };
        h1 = h1->pointer;
        h2 = h2->pointer;
    }
    return NULL;
}

Node* lastKthRemove(Node* &head, int k){
    Node* temp = head;
    Node* previous = nullptr;
    while(temp != nullptr){
        Node* curr = temp;
        curr->pointer = previous;
        previous = temp;
        temp = temp->pointer;
    }
    head = temp;
    return head;
}

//insert element at the tail
void push_back(Node* head, int value){
    Node* new_node = new Node(value);
    Node* temp = head;
    while(temp->pointer!=NULL){
        temp = temp->pointer;
    }
    temp->pointer = new_node;
}
//print elements
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->number<<" ";
        temp = temp->pointer;
    };
};

int main(){
    Node* userLinkedList = new Node(1);
    push_back(userLinkedList,2);
    push_back(userLinkedList,3);
    print(lastKthRemove(userLinkedList,2));
    return 0;
}