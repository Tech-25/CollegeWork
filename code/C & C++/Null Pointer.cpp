#include<bits/stdc++.h>
using namespace std;

void printValue(int *ptr){
    if(ptr !=NULL){
        cout<<"Value: "<< *ptr<<endl;
    }
    else{
        cout<<"Pointer is Null"<<endl;

    }
}
 int main (){
    int *number=NULL;
    printValue(number);
    return 0;
 }