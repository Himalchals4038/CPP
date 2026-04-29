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
        Node* temp = head;
        int count = 0;
        //check if k nodes exist
        while(count<k){
            if (temp == NULL) return head;
            temp = temp->next;
            count++;
        }
        //recursively call for rest of the Linked List
        Node* prevNode = reverseKGroup(temp->next, k);
        //reverse current group
        temp = head;
        count = 0;
        while (count<k){
            Node* next = temp->next;
            temp->next = prevNode;
            prevNode = temp;
            temp = next;
            count++;
        }
        return prevNode;
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