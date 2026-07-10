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
        unordered_map <Node*, Node*> m;

        Node* newHead = new Node(head->data);
        Node* oldTemp = head->next;
        Node* newTemp = newHead;
        m[head] = newHead;
        
        while (oldTemp != NULL){
            Node* copyNode = new Node(oldTemp->data);
            m[oldTemp] = copyNode;
            newTemp->next = copyNode;
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        oldTemp = head;
        newTemp = newHead;
        while (oldTemp != NULL){
            newTemp->random = m[oldTemp->random];
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
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