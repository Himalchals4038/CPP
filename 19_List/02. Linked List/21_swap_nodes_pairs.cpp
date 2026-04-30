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
        if (head == NULL || head->next == NULL) return head;

        Node* prev = NULL;
        Node* first = head;
        Node* second = head->next;

        while (first != NULL && second != NULL){
            Node* third = second->next;
            second->next = first;
            first->next = third;

            if (prev != NULL) prev->next = second;
            else head = second;

            prev = first;
            first = third;

            if (third != NULL) second = third->next;
            else second = NULL;
        }

        return head;
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