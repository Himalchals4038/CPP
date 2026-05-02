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
    Node* merge2Lists(Node* head1, Node* head2){
        if (head1 == NULL || head2 == NULL){
            return head1 == NULL ? head2 : head1;
        }
        if (head1->data < head2->data){
            head1->next = merge2Lists(head1->next, head2);
            return head1;
        }
        else{
            head2->next = merge2Lists(head1, head2->next);
            return head2;
        }
    }
    List(){
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
    
    return 0;
}