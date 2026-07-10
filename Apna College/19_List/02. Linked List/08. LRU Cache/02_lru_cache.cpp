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
            Node* existingNode = m[key];
            existingNode->val = val;
            deleteNode(existingNode);
            addNode(existingNode);
            return;
        }
        
        //Capacity reached
        if (m.size() == limit){
            Node* lruNode = tail->prev;
            m.erase(lruNode->key);
            deleteNode(lruNode);
            delete lruNode;
        }

        Node* newNode = new Node(key, val);
        addNode(newNode);
        m[key] = newNode;
    }

    int get(int key){
        if (m.find(key) == m.end()) return -1;
        Node* node = m[key];
        deleteNode(node);
        addNode(node);
        return node->val;
    }
};
int main(){
    
    return 0;
}