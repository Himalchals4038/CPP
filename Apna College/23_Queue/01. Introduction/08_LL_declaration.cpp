#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
class Queue{
    Node* head;
    Node* tail;
public:
    Queue(){
        head=NULL;
        tail=NULL;
    }
    void push(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }
    }
    void pop(){
        if(head==NULL) return;
        Node* temp=head;
        head=head->next;
        if(head!=NULL) head->prev=NULL;
        else tail=NULL;
        delete temp;
    }
    int front(){
        if(head==NULL) return -1;
        return head->data;
    }
    int back(){
        if(head==NULL) return -1;
        return tail->data;
    }
    bool empty(){
        return head==NULL;
    }
    int size(){
        int count=0;
        Node* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void reverseDisplay(){
        Node* temp=tail;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
        cout<<endl;
    }
    void reverse(){
        Node* curr=head;
        Node* prev=NULL;
        Node* next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            curr->prev=next;
            prev=curr;
            curr=next;
        }
        swap(head,tail);
    }
};
int main(){
    Queue q1;
    q1.push(15);
    q1.push(26);
    q1.push(34);
    q1.push(85);
    q1.push(61);
    q1.push(90);
    q1.display();
    q1.reverseDisplay();

    q1.pop();
    q1.display();

    q1.reverse();
    q1.display();

    cout<<"First Element: "<<q1.front()<<endl;
    cout<<"Last Element: "<<q1.back()<<endl;
    cout<<"Size: "<<q1.size()<<endl;
    cout<<(q1.empty() ? "Yes" : "No")<<endl;

    for (; !q1.empty(); q1.pop()) cout<<q1.front()<<" ";
    cout<<endl;
    cout<<(q1.empty() ? "Yes" : "No")<<endl;
    return 0;
}