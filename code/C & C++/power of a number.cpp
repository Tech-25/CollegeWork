#include<bits/stdc++.h>
using namespace std;

void CalculatePow(int N, int m){
    double A = pow(N, m);  // Calculating N^m
    cout << A << endl;
}

int main (){
    int N, m;
    cin >> N >> m;  // Input values for N and m
    CalculatePow(N, m);  // Call the function with N and m
    return 0;
}
