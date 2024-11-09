/*Coding problem - 1
In a contest where 
N
N new users visited the contest,

A
A users just saw the problems and didn’t make any submissions and hence won’t get any rating.
B
B users who made a submission but could not solve any problem correctly. Thus, after the contest, they will get a rating in the range 
800
−
1000
800−1000.
Everyone else could correctly solve at least 
1
1 problem. Thus, they will get a rating strictly greater than 
1000
1000 after the contest.
You need to output the number of new users in the contest who, after the contest, will get a rating and also the number of new users who will get a rating strictly greater than 
1000
1000.

The code given in the IDE uses the concept of functions.
Update the code to solve the problem.

Input Format
Each input file contains of a single line, with three integers 
N
,
A
N,A and 
B
B - the number of new users, the number of users who just saw the problem and didn't make any submission, and the number of users who made a submission but could not solve any problem correctly.
Output Format
Output two integers separated by a space in a single line - the number of new users who will get a rating at the end of the contest and the number of new users who will get a rating higher than 
1000
1000.
*/


#include <iostream>

using namespace std;

int total_score(int a, int b, int c) {
    return (c-a);

}

int high_score(int a, int b, int c) {
return (c-a-b);
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int result_1 = total_score(A, B, N);
    int result_2 = high_score(A, B, N);

    cout << result_1 << " " << result_2 << endl;

    
}