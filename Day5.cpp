// You are given an integer array arr of size n. An element is considered a leader if it is greater than all the elements to its right. Your task is to find all such leader elements in the array.

// Input:
// An integer array arr of size n.
// Example : 
// arr = [16, 17, 4, 3, 5, 2]

// Output:
// Return an array containing all the leader elements in the order in which they appear in the original array.
// Example:
// Leaders: [17, 5, 2]



#include <iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main() {
    vector<int> n={16,17,4,3,5,2};
    vector<int> output;
    
    int max=INT_MIN;
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]>max){
            max=n[i];
            output.push_back(max);
        }
    }
    
    reverse(output.begin(),output.end());
    for(auto i:output){
        cout<<i<<" ";
    }

    return 0;
}