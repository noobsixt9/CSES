#include <iostream>
using namespace std;

int main() {
    string dna;
    cin>>dna;

    char currentchar='\0';
    int maxcount = 0;
    int currentcount=0;

    for(char ch: dna) //range based for loop loops through every character in the dna
    {
        if(ch==currentchar) //if char == currentchar meaning in a sequence charcaters are equal then increments value by 1
            currentcount++;
        else
        {
            currentchar=ch;  //if the sequence is broken then the new character that broke the sequence is placed in cuurentchar 
            currentcount=1;  //and value of newcurrent char is 1 cause we already have 1 character
        }

        if(currentcount>maxcount) //max no. of repititons is needed
        maxcount = currentcount;    
       
    }

    cout<<maxcount;

    return 0;
}