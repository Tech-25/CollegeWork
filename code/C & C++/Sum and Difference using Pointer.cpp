#include <bits/stdc++.h>

using namespace std;

void sum_difference(int *value1, int *value2) {
  int temp =*value1 + *value2;
  
  *value2=abs(*value2 - *value1);
  *value1 = temp;
   
}

int main() {
    int value1, value2;
    cin>>value1>>value2;
  
    sum_difference(&value1,&value2);
    
    
    cout<<value1<<endl;
    cout<<value2<<endl;
   
    
    return 0;
}
