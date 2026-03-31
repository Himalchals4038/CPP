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
    //Slower Approach
    int middle1(){
        Node* temp = head;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        int mid = count/2;
        Node* temp2 = head;
        while (mid>0){
            temp2 = temp2->next;
            mid--;
        }
        return temp2->data;
    }
    //Faster Approach
    int middle2(){
        Node* slow = head;
        Node* fast = head;
        while (fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->data;
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
    linkedList.push_back(6);
    linkedList.push_back(7);
    linkedList.printList();
    cout<<"Middle element is: "<<linkedList.middle1()<<endl;
    cout<<"Middle element is: "<<linkedList.middle2()<<endl;
    return 0;
}