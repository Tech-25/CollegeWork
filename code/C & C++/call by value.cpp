/*Call by value
We created user-defined functions in the previous modules.

In call by value, a copy of the actual argument's value is passed to the function parameter.
This means that any changes made to the parameter within the function do not affect the original variable outside the function.
Essentially, the function works with a local copy of the value and the original variable in the main() function remains unchanged.
*/

#include <iostream>
using namespace std;

void increment(int x) {
    x++;
    cout << "new value during function: " << x << endl;
}

int main() {
    int num = 5;
    increment(num);
    cout << "num after function call: " << num << endl; // Output: num after function call: 5
    return 0;
}
