/*Coding problem-2
Given 
n
n (
n
n is even), determine the number of black cells in an 
n
×
n
n×n chessboard.
Solve the problem.

Input Format
The only line of the input contains a single integer 
n
n.

Output Format
Output the number of black cells in an 
n
×
n
n×n chessboard.

Constraints
2
≤
n
≤
100
2≤n≤100
n
n is even */

#include <iostream>

using namespace std;

int square(int t) {
    return t*t;

}

int half(int i) {
    return i*1/2;

}

int main() {
    int n;
    cin >> n;
    
    int result1 = square(n);
    int result2 = half(result1);
    
    cout << result2 << endl;
    
    
}