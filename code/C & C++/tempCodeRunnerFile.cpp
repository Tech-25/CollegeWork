#include<bits/stdc++.h>
using namespace std;

struct Mystack{
    int *arr;
    int cap;
    int top;

    Mystack(int c){
        cap = c;
        arr = new int[cap];
        top =-1;
    }

    void push(int x){ 
        top++;
        arr[top]=x;
    
}

int pop(){
    int res=arr[top];
    top--;
    return res;
}

int peek(){
    return arr[top];
}

int size(){
    return (top+1);
}

bool isEmpty(){
    return (top==-1);
}
};

int main (){
    Mystack s(5);
    cout<<s.push()<<endl;

}