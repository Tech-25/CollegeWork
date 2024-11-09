#include<bits/stdc++.h>
using namespace std;

void SquarePattern(int n){
   for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

}

int main(){
    int n;
    cout<<"Enter the number of rows u want to print thr square"<<endl;
    cin>>n;
    SquarePattern(n);
    return 0;
}