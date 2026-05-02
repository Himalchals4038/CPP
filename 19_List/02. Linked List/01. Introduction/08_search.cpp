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
    void insert_inbetween(int val, int pos){
        if (pos<0){
            cout<<"Invalid Position";
            return;
        }
        if (pos == 0){
            Node* newNode = new Node(val);
            newNode->next = head;
            head = newNode;
            if (tail == NULL) tail = newNode;
            return;
        }
        Node* temp = head;
        for (int i=1; i<pos && temp!=NULL; i++) temp = temp->next;
        if (temp == NULL){
            cout<<"Position out of bounds"<<endl;
            return;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
        if (newNode->next == NULL) tail = newNode;
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
    void search(int val){
        Node* temp = head;
        int pos = 0;
        while (temp != NULL){
            if (temp->data == val){
                cout<<"Element found at position "<<pos+1<<endl;
                return;
            }
            temp = temp->next;
            pos++;
        }
        cout<<"Element not found"<<endl;
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
    linkedList.search(6);
    return 0;
}