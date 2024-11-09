#include<bits/stdc++.h>
using namespace std;

void printGreeting(const string& name){
    string upperGreeting = "Hello, " + name + "!";

    transform(upperGreeting.begin(), upperGreeting.end(), upperGreeting.begin() , ::toupper);
    cout<<"Final Result:"<<upperGreeting<<endl;

}

int main (){
    string name;
    cin>>name;
    printGreeting(name);
}