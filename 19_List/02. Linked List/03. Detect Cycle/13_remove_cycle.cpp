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
    int detect_cycle(){
        Node* slow = head;
        Node* fast = head;
        bool isCycle = false;
        while (fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if (slow==fast){
                isCycle = true;
                break;
            }
        }
        if (!isCycle) return NULL;
        slow = head;
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow->data;
    }
    void remove_cycle(){
        Node* slow = head;
        Node* fast = head;
        while (fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) break;
        }
        if (fast==NULL || fast->next==NULL) return;
        slow = head;
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }
        while(fast->next != slow) fast = fast->next;
        fast->next = NULL;
    }
    void create_cycle(int pos){
        if (head == NULL) return;
        Node* temp = head;
        while (pos-->0 && temp != NULL){
            temp = temp->next;
        }
        tail->next = temp;
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
    linkedList.printList();
    linkedList.create_cycle(2);
    cout<<"Cycle detected. Removing it..."<<endl;
    linkedList.remove_cycle();
    cout << "Cycle removed. The list is now:" << endl;
    linkedList.printList();
    return 0;
}