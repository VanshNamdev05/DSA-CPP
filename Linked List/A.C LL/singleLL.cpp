#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int d)
    {
        Node *newNode = new Node(d); // dynamic allocation
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int d)
    {
        Node *newNode = new Node(d);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            return;
        }
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout<<"List is empty";
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = head;
        while(temp -> next != tail){
            temp = temp -> next;
        }
        temp -> next = NULL;
        delete tail;
        tail = temp;

    }

    void insert(int pos,int val){
        if(pos < 0){
            cout<<"Invalid position"<<endl;
            return;
        }
        if(pos == 0){
            push_front(val);
        }
        else{
            Node* newNode = new Node(val);
            Node* temp = head;
            for(int i = 0; i < pos-1; i++){
                if(temp == NULL){
                    cout<<"Invalid position"<<endl;
                    return;
                }
                temp = temp -> next;
            }
            newNode -> next = temp -> next;
            temp -> next = newNode;
        }
    }

    int search(int key){
        Node* temp = head;
        int index = 0;
        while(temp != NULL){
            if(temp -> data == key){
                return index;
            }
            temp = temp -> next;
            index++;
        }
        return -1;
    }

    void printLL()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{

    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printLL();

    ll.insert(2,0);

    ll.printLL();

    int elemFound = ll.search(1);

    if(elemFound != -1){
        cout<<"Element found at "<<elemFound<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }

}