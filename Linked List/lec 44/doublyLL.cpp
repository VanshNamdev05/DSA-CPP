#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;   
    Node* prev;
    
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }

        cout << "Memory freed for node with data : " << value << endl;
    }
};

int getLength(Node* head){
    Node* temp = head;
    int len = 0;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }

    return len;
}

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertAtHead(Node* &tail,Node* &head, int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}


void insertAtTail(Node* &tail,Node* &head, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &tail, Node* &head, int pstn, int d){
    if(pstn == 1){
        insertAtHead(tail,head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < pstn-1){
        temp = temp -> next;
        cnt++;
    }

    // last pstn
    if(temp -> next == NULL){
        insertAtTail(tail,head,d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int pstn, Node* &head){
    if(pstn == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < pstn){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }
}

int main(){
    

    Node* head = NULL;
    Node* tail = NULL;
    print(head);

    insertAtHead(tail,head,11);
    print(head);

    insertAtHead(tail,head,12);
    print(head);

    insertAtHead(tail,head,13);
    print(head);

    insertAtTail(tail,head,13);
    print(head);

    insertAtPosition(tail,head,2,1133);
    print(head);

    insertAtPosition(tail,head,6,111);
    print(head);

    insertAtPosition(tail,head,1,1000);
    print(head);

    deleteNode(1,head);
    print(head);

    deleteNode(2,head);
    print(head);

    deleteNode(5,head);
    print(head);

    cout<<"The length of the DLL is : " << getLength(head);
}