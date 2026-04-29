#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node* child;
    Node (int val){
        data = val;
        next = NULL;
        prev = NULL;
        child = NULL;
    }
};
class DoublyList{
    Node* head;
    Node* tail;
public:
    DoublyList(){
        head = NULL;
        tail = NULL;
    }
    Node* flatten (Node* head){
        if (head == NULL) return head;
        Node* curr = head;
        while (curr != NULL){
            if (curr->child != NULL){
                Node* childTail = curr->child;
                while(childTail->next != NULL) childTail = childTail->next;

                Node* nextNode = curr->next;
                childTail->next = nextNode;

                if(nextNode != NULL) nextNode->prev = childTail;
                curr->next = curr->child;
                curr->child->prev = curr;
                curr->child = NULL;
            }
            curr = curr->next;
        }
        return head;
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    void pop_back(){
        if (tail == NULL){
            cout<<"DLL is empty"<<endl;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
    }
    void print_list(){
        Node* temp = head;
        while (temp!= NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    DoublyList dl1;
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    head->child = new Node(4);
    head->child->next = new Node(5);
    head->child->next->prev = head->child;

    head->next->child = new Node(6);

    cout << "Original list structure (conceptual):" << endl;
    cout << "1->2->3" << endl;
    cout << "|  |" << endl;
    cout << "4->5 6" << endl << endl;

    head = dl1.flatten(head);

    cout << "Flattened list:" << endl;
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return 0;
}