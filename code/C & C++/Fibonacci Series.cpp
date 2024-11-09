#include<bits/stdc++.h>
using namespace std;

// Function to print Fibonacci series
void FibonacciSeries(int n){
    int a = 0, b = 1, c;
    if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";
    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    FibonacciSeries(n);
    return 0;
}
