// You are given an array arr consisting only of 0s, 1s, and 2s. The task is to sort the array in increasing order in linear time (i.e., O(n)) without using any extra space. This means you need to rearrange the array in-place.

// Input:
// An integer array arr of size n where each element is either 0, 1, or 2.
// Example : arr = [0, 1, 2, 1, 0, 2, 1, 0]

// Output:
// The sorted array, arranged in increasing order of 0s, 1s, and 2s.
// Example: [0, 0, 0, 1, 1, 1, 2, 2]

// Constraints:
// The input array may have up to 105 elements.
// The values in the array are limited to 0, 1, and 2.
// The sorting algorithm must operate in linear time (i.e., O(n)) and in-place (i.e., without using extra space beyond a few variables).


#include <iostream>
#include <vector>
using namespace std;
int main() {
    
    vector<int> v={2,2,2,2};
    int n=v.size();
    if(n>0){
    int i=0,j=n-1;
    while(v[i]==0) i++;
    while(v[j]==2) j--;
    int k=i;
    
    // cout<<i<<" "<<k<<" "<<j<<endl;
    while(k<=j){
        if(v[k]==0){
            v[k]=v[i];
            v[i]=0;
            i++;
        }
        if(v[k]==2){
            v[k]=v[j];
            v[j]=2;
            j--;
        }
        k++;
    }
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}