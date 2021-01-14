// Inbuilt sort in c++


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int arr[9]={1,122,435,677,23456789,3,4,2,5};
    int n=9;
    
    sort(arr,arr+n);
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
