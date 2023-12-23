#include <iostream>

using namespace std;

int main() {
    long long n,count=0; 
    cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++) //taking input int and putting it in array
    {
        cin>>arr[i];
    }
    for(int i=1; i<n; i++)
    {
        if(arr[i] < arr[i-1]) //if value at index 2 is less than value at
                              //index 1 
        {
            count += (arr[i - 1] - arr[i]); // count value is changed by arr[2]-arr[1]
            arr[i] = arr[i-1]; // new lesser value is changed to greater value
            
        }
    }
    cout<<count; //returns count

    return 0;
}