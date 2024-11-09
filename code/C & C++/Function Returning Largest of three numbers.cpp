#include <iostream>
using namespace std;

// Function to return a pointer to the largest of three integers
int* findLargest(int &a, int &b, int &c) {
    if (a>= b && a>=c){
        return &a;
        
    }
    else if (b >=a && b>=c){
        return &b;
    }
    else{
        return &c;
    }
   
}

int main() {
    int num1, num2, num3;

    // Enter three integers
    cin >> num1 >> num2 >> num3;

    // Call the findLargest function and get the pointer to the largest number
    int* largestPtr = findLargest(num1, num2, num3);

    // Print the value of the largest number using the pointer
    cout << *largestPtr;

    return 0;
}
