#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node (int val){
        data = val;
        next = NULL;
        prev = NULL;
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
    void pop_front(){
        if (head == NULL){
            cout<<"DLL is empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
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
    dl1.push_back(3);
    dl1.push_back(6);
    dl1.push_back(14);
    dl1.print_list();
    dl1.pop_front();
    dl1.print_list();
    return 0;
}