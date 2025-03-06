#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node (int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int data)
{
    //new data -> create new node 
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;

}


void insertAtTail(Node* &tail, int data)
{
    //new data -> create new node 
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
    cout << "tail is "<< tail->data<<endl;


}

void insertAtposition(Node* &head, Node* &tail, int data, int position)
{
    //new data -> create new node 
    Node* nodeToinsert = new Node(data);
    Node* temp = head;
    int cnt = 1;

    if(1 == position)
    {
        insertAtHead(head, data);  //head update is must 
        return;
    }

    while (cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL)   //tail update 
    {
        insertAtTail(tail,data);
        return;
    }

    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;

}


void deleteNode(Node* &head, int position)
{
    if (1 == position)
    {

    }
    else
    {
        Node* current = head;
        Node* prev = NULL;
        int cnt = 1;

        while (cnt < position)
        {
            prev = current;
            current = current->next; 
            cnt++;
        }

        prev->next =current->next;
        current->next = NULL;
        delete current;

    }
}



void PrintLL(Node* &head)
{
    Node* temp = head;
    while (temp != NULL)  // error temp->next != 0 wrong 
    {
        cout <<temp->data<<'\t';
        temp = temp->next;
    }
}

int main()
{
    Node* node1 = new Node(10);
    // cout << node1->data<<endl;
    // cout << node1->next;
    Node* head = node1;
    Node* tail = node1;

    // insertAtHead(head,20);
    // insertAtHead(head,30);
    // insertAtHead(head,40);


    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    insertAtTail(tail, 17);

    // PrintLL(head);

    // cout << "\nInseet at 3rd postion"<<endl;
    insertAtposition(head, tail, 13, 5);
    PrintLL(head);
    cout <<endl;
    cout <<"head "<< head->data<<endl;
    cout <<"tail "<< tail->data<<endl;




    return 0;
}