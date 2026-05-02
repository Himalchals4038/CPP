#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int key, val;
    Node* next;
    Node* prev;
    Node (int k, int v){
        key = k;
        val = v;
        prev = NULL;
        next = NULL;
    }
};
class LRUCache{
    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);
public:
    unordered_map <int, Node*> m;
    int limit;

    void addNode(Node* newNode){
        Node* oldNext = head->next;
        head->next = newNode;
        oldNext->prev = newNode;
        newNode->prev = head;
        newNode->next = oldNext;
    }

    void deleteNode(Node* oldNode){
        Node* oldPrev = oldNode->prev;
        Node* oldNext = oldNode->next;
        oldPrev->next = oldNext;
        oldNext->prev = oldPrev;
    }

    LRUCache(int capacity){
        limit = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void put(int key, int val){
        if (m.find(key) != m.end()){
            Node* oldNode = m[key];
            deleteNode(oldNode);
            m.erase(key);
        }
        
        //Capacity reached
        if (m.size() == limit){
            //Delete LRU data
            m.erase(tail->prev->key);
            deleteNode(tail->prev);
        }

        Node* newNode = new Node(key, val);
        addNode(newNode);
        m[key] = newNode;
    }

    int get(int key){
        if (m.find(key) == m.end()) return -1;
        Node* node = m[key];
        m.erase(key);
        deleteNode(node);
        addNode(node);
        m[key] = node;
        return node->val;
    }
};
int main(){
    
    return 0;
}