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
    void push_front(int val){
        //static, not preferred
        //Node newNode(val);
        
        //dynamic, preferred
        Node* newNode = new Node(val);
        if (head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;
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
    List linkedList;
    linkedList.push_front(1);
    linkedList.push_front(2);
    linkedList.push_front(3);
    linkedList.printList();
    return 0;
}