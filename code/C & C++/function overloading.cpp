#include <bits/stdc++.h>
using namespace std;

// Function to calculate the area of a square
int area(int side) {
    return side*side;
} 

// Overloaded function to calculate the surface area of a cube
int area(int side, bool isCube) {
    return 6*side*side;
    if (isCube) {
        return true;
        
    }
    return 0;
}

// Overloaded function to calculate the area of a circle
double area(double r) {
    return 3.14159 * r * r;
}

int main() {
    int a, b;
    double r;

    cin >> a;

    cin >> b;

    cin >> r;

    cout << area(a) << endl;
    cout << area(b, true) << endl;
    cout << area(r) << endl;

    return 0;
}
