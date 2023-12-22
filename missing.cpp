#include <iostream>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    int totalsum = (n*(n+1))/2;
    int givensum=0;
    for(int i=0; i<n-1; i++)
    {
        int num;
        cin>>num;
        givensum+= num;
    }
    int missingnum = totalsum - givensum;
    cout<<missingnum;
}