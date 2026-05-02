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
    List(){
        head = NULL;
        tail = NULL;
    }
    Node* reverseKGroup(Node* head, int k){
        if (head == NULL) return NULL;
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        int count = 0;
        while (curr != NULL && count<k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if (next != NULL){
            head->next = reverseKGroup(next, k);
        }
        return prev;
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