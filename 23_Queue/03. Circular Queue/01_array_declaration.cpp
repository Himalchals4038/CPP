#include <bits/stdc++.h>
using namespace std;
class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
public:
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }
    void enqueue(int x){
        if ((front == 0 && rear == size-1) || (front == rear+1)) return;
        else if (front == -1) front = rear = 0;
        else if (rear == size-1) rear = 0;
        else rear++;
        arr[rear] = x;
    }
    void dequeue(){
        if (front == -1) return;
        else if (front == rear) front = rear = -1;
        else if (front == size-1) front = 0;
        else front = front + 1;
    }
    int getFront(){
        if (front == -1) return -1;
        return arr[front];
    }
    int getRear(){
        if (rear == -1) return -1;
        return arr[rear];
    }
    bool isEmpty(){
        if (front == -1) return true;
        return false;
    }
    bool isFull(){
        if ((front == 0 && rear == size-1) || (front == rear+1)) return true;
        return false;
    }
    void display(){
        if (front == -1) return;
        for (int i = front; i <= rear; i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
    ~CircularQueue(){
        delete []arr;
        front = rear = size = 0;
        arr = NULL;
        cout<<"Destructor Called"<<endl;
        return;
    }
};
int main(){
    
    return 0;
}