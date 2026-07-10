#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* random;
    Node (int val){
        data = val;
        next = NULL;
        random = NULL;
    }
};
class List{
    Node* head;
    Node* tail;
public:
    Node* copyRandomList(Node* head){
        if (head == NULL) return NULL;
        Node* curr = head;
        while (curr != NULL){
            Node* newNode = new Node(curr->data);
            newNode->next = curr->next;
            curr->next = newNode;
            curr = newNode->next;
        }
        curr = head;
        while (curr != NULL){
            if (curr->random != NULL){
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        curr = head;
        Node* dummy = new Node(0);
        Node* copy = dummy;
        while (curr != NULL){
            copy->next = curr->next;
            curr->next = curr->next->next;
            curr = curr->next;
            copy = copy->next;
        }
        return dummy->next;
    }
    List(){
        head = NULL;
        tail = NULL;
    }
    void push_pack(int val){
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