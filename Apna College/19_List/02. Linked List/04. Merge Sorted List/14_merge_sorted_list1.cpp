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
    Node* merge2Lists(Node* list1, Node* list2){
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;
        Node* head = NULL;
        Node* tail = NULL;
        while (list1 != NULL && list2 != NULL){
            if (list1->data < list2->data){
                if (head == NULL){
                    head = list1;
                    tail = list1;
                }
                else{
                    tail->next = list1;
                    tail = list1;
                }
                list1 = list1->next;
            }
            else{
                if (head == NULL){
                    head = list2;
                    tail = list2;
                }
                else{
                    tail->next = list2;
                    tail = list2;
                }
                list2 = list2->next;
            }
        }
        if (list1 != NULL) tail->next = list1;
        if (list2 != NULL) tail->next = list2;
        return head;
    }
    List(){
        head = NULL;
        tail = NULL;
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
        while (temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    
    return 0;
}