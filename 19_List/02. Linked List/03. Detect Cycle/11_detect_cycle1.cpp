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
    bool detect_cycle(){
        Node* slow = head;
        Node* fast = head;
        while (slow != NULL && fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return true;
        }
        return false;
    }
    void create_cycle(int pos){
        if (head == NULL) return;
        Node* temp = head;
        while (pos-->0 && temp != NULL){
            temp = temp->next;
        }
        tail->next = temp;
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
    linkedList.push_back(4);
    linkedList.push_back(5);
    linkedList.printList();
    
    // Creates cycle by pointing tail's next to node at index 2
    linkedList.create_cycle(2); 
    if (linkedList.detect_cycle()) cout<<"Cycle detected"<<endl;
    return 0;
}