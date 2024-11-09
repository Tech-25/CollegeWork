/* Coding problem-4
Chef is taking his baby steps into the world of programming.

The very first program he's tasked to write is as follows:
"Given two integers 
A
A and 
B
B, print 
A
+
B
A+B."

Unfortunately, Chef makes a typo: his program outputs 
A
×
B
A×B instead of 
A
+
B
A+B.

Given the values of 
A
A and 
B
B, can you help Chef find the absolute difference between the correct answer and the value his program prints?

Code in the IDE to solve the problem.
Input Format
The only line of input will contain two space-separated integers, 
A
A and 
B
B.

Output Format
Print a single integer: the difference between the correct answer and Chef's output.

Constraints
1
≤
A
,
B
≤
10
1≤A,B≤10
*/

#include <iostream>
#include <cstdlib> // for std::abs

using namespace std;

int multiple(int a, int b) {
    return a * b;
}

int total(int x, int y) {
    return x + y;
}

int abs_diff(int a , int b) {
    return abs(a - b);
}

int main() {
    int A, B;
    cin >> A >> B;
    
    int C = multiple(A, B);
    int D = total(A, B);
    int E = abs_diff(C, D);
    
    cout << E << endl;
    
    
}