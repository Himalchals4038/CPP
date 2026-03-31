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
    void reverse(){
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while (curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        tail = curr;
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
        cout<<"NULL->";
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
    linkedList.reverse();
    linkedList.printList();
    return 0;
}