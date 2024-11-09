#include<bits/stdc++.h>
using namespace std;

void increment(int *x){
    (*x)++;
}

int main(){
    int num=5;
    increment(&num);
    cout<<num<<endl;
    return 0;
}