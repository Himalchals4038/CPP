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

        // Step 1: Interleave the copied nodes with original nodes
        Node* curr = head;
        while (curr != NULL){
            Node* copyNode = new Node(curr->data);
            copyNode->next = curr->next;
            curr->next = copyNode;
            curr = copyNode->next;
        }

        // Step 2: Assign random pointers for the copied nodes
        curr = head;
        while (curr != NULL){
            if (curr->random != NULL) {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        
        // Step 3: Separate the original and copied lists
        curr = head;
        Node* newHead = head->next;
        Node* copy = newHead;
        while (curr != NULL){
            curr->next = curr->next->next;
            if (copy->next != NULL) {
                copy->next = copy->next->next;
            }
            curr = curr->next;
            copy = copy->next;
        }
        
        return newHead;
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