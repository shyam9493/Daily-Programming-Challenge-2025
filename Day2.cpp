// You are given an array arr containing n-1 distinct integers. The array consists of integers taken from the range 1 to n, meaning one integer is missing from this sequence. Your task is to find the missing integer.

// Input:
// An integer array arr of size n-1 where the elements are distinct and taken from the range 1 to n.
// Example : arr = [1, 2, 4, 5]

// Output:
// Return the missing integer from the array.
// Example: Missing number: 3


#include <bits/stdc++.h>
using namespace std;
int split(vector<int> input,int left,int right){
    
    int mid=(left+right)/2;
    cout<<left<<" "<<mid<<" "<<right<<endl;
    if(find(input.begin(),input.end(),mid+1)==input.end()){
        return mid+1;
    }
    int pre_sum=(mid+1)*(mid+2)/2;
    int sum_mid=accumulate(input.begin()+left,input.begin()+mid+1,0);
    if(sum_mid>pre_sum){
       return split(input,left,mid);
    }else{
        return split(input,mid+1,right);
    }
    return 0;
}
int main() {
    
    vector<int> input={1,2,4,5};
    int n=input.size();
    if(accumulate(input.begin(),input.end(),0)!=(n*(n+1)/2)){
    cout<<split(input,0,n-1);
    }
    else{
        cout<<n+1;
    }

    return 0;
}