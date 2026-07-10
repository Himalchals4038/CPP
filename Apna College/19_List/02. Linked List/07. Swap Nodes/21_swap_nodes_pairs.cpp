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
    Node* swapNodesPairs(Node* head){
        Node dummy(0);
        dummy.next = head;
        Node* prev = &dummy;

        while (prev->next != NULL && prev->next->next != NULL) {
            Node* first = prev->next;
            Node* second = prev->next->next;
            
            first->next = second->next;
            second->next = first;
            prev->next = second;
            
            prev = first;
        }
        return dummy.next;
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
};
int main(){
    
    return 0;
}