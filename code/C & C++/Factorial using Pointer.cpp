#include <iostream>
using namespace std;

void calculateFactorial(int *numPtr) {
   int result=1;
   for (int i =1;i<=*numPtr;++i){
       result *=i;
   }
   *numPtr=result;
   
}

int main() {
    int number;
    cin >> number;

    calculateFactorial(&number); // Pass the address of 'number' to the function

    cout << number << endl; // 'number' should store factorial of 'number' after function call

    return 0;
}
