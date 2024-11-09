#include<bits/stdc++.h>
using namespace std;
 
void Patternprinting(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main (){
    int n;
    cout<<"enter the no of rows of pattern you want to print"<<endl;
    cin>>n;
    Patternprinting(n);
    return 0;

}