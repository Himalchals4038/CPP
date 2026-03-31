#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node (int val){
        data = val;
        next = NULL;
    }
};
class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = NULL;
        tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    void insert_inbetween(int val, int pos){
        if (pos<0){
            cout<<"Invalid Position";
            return;
        }
        if (pos == 0){
            push_front(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* temp = head;
        if (temp == NULL){
            cout<<"Position out of bounds"<<endl;
            return;
        }
        for (int i=1; i<pos && temp!=NULL; i++) temp = temp->next;
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void printList(){
        Node* temp = head;
        while (temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    List linkedList;
    linkedList.push_back(1);
    linkedList.push_back(2);
    linkedList.push_back(3);
    linkedList.push_back(5);
    linkedList.push_back(6);
    linkedList.push_back(7);
    linkedList.printList();
    linkedList.insert_inbetween(4, 3);
    linkedList.printList();
    return 0;
}