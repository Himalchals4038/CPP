#include <bits/stdc++.h>
using namespace std;
class CircularQueue{
    int *arr;
    int currSize, cap;
    int f,r;
    public:
    CircularQueue(int size){
        cap = size;
        arr = new int[cap];
        currSize = 0;
        f=0;
        r=-1;
    }
    void enqueue(int data){
        if (currSize == cap){
            cout<<"Current Queue is full"<<endl;
            return;
        }
        r = (r+1)%cap;
        arr[r] = data;
        currSize++;
    }
    void dequeue(){
        if (currSize == 0){
            cout<<"Current Queue is empty"<<endl;
            return;
        }
        f = (f+1)%cap;
        currSize--;
    }
    int getFront(){
        if (currSize == 0){
            cout<<"Current Queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }
    int getRear(){
        if (currSize == 0){
            cout<<"Current Queue is empty"<<endl;
            return -1;
        }
        return arr[r];
    }
    bool isEmpty(){
        return currSize == 0;
    }
    bool isFull(){
        return currSize == cap;
    }
    void display(){
        if (currSize == 0){
            cout<<"Current Queue is empty"<<endl;
            return;
        }
        for (int i=0; i<currSize; i++){
            cout<<arr[(f+i)%cap]<<" ";
        }
        cout<<endl;
    }
    ~CircularQueue(){
        delete[] arr;
        arr = NULL;
        cout<<"Destructor Called"<<endl;
    }
};
int main(){
    CircularQueue cq1(3);
    cq1.enqueue(1);
    cq1.enqueue(2);
    cq1.enqueue(3);
    cq1.display();

    cq1.enqueue(4);
    cq1.display();

    cq1.dequeue();
    cq1.display();
    
    cq1.enqueue(4);
    cq1.display();

    cout<<"Front: "<<cq1.getFront()<<endl;
    cout<<"Rear: "<<cq1.getRear()<<endl;

    cout<<"Empty: "<<(cq1.isEmpty() ? "True" : "False")<<endl;
    cout<<"Full: "<<(cq1.isFull() ? "True" : "False")<<endl;
    return 0;
}