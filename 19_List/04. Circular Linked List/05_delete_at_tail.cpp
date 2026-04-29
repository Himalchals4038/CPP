#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class CircularList{
    Node* head;
    Node* tail;
public:
    CircularList(){
        head = NULL;
        tail = NULL;
    }
    void delete_at_tail(){
        if (head == NULL){
            cout<<"CLL is empty"<<endl;
            return;
        }
        else if (head == tail){
            Node* temp = head;
            head = NULL;
            tail = NULL;
            delete temp;
        }
        else{
            Node* temp = head;
            while (temp->next != tail) temp = temp->next;
            delete tail;
            tail = temp;
            tail->next = head;
        }
    }
    void insert_at_tail(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = newNode;
            tail = newNode;
            tail->next = head;
        }
        else{
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }
    void insert_at_head(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = newNode;
            tail = newNode;
            tail->next = head;
        }
        else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }
    void printList(){
        if (head == NULL) return;
        Node* temp = head;
        while (temp != tail){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<tail->data<<"->";
        cout<<"NULL"<<endl;
    }
};
int main(){
    CircularList cl1;
    cl1.insert_at_tail(1);
    cl1.insert_at_tail(2);
    cl1.insert_at_tail(3);
    cl1.insert_at_tail(4);
    cl1.insert_at_tail(5);
    cl1.printList();

    cl1.delete_at_tail();
    cl1.printList();
    return 0;
}