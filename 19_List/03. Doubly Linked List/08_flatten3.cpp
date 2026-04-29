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
                //flatten the child nodes
                Node* next = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = NULL;
                //find tail
                while (curr->next != NULL){
                    curr = curr->next;
                }
                //attach tail with next ptr
                if (next != NULL){
                    curr->next = next;
                    next->prev = curr;
                }
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

    return 0;
}