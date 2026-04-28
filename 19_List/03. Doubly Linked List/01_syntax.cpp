#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node (int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};
class DoublyList{
    Node* head;
    Node* tail;
public:
    DoublyList(){
        head = NULL;
        tail = NULL;
    }

};
int main(){
    
    return 0;
}