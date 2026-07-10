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
    cl1.insert_at_head(1);
    cl1.insert_at_head(2);
    cl1.insert_at_head(3);
    cl1.insert_at_head(4);
    cl1.insert_at_head(5);
    cl1.printList();
    return 0;
}