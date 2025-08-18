// You are given two sorted arrays arr1 of size m and arr2 of size n. Your task is to merge these two arrays into a single sorted array without using any extra space (i.e., in-place merging). The elements in arr1 should be merged first, followed by the elements of arr2, resulting in both arrays being sorted after the merge.

// Input:
// Two sorted integer arrays arr1 of size m and arr2 of size n.
// Example : 
// arr1 = [1, 3, 5, 7]
// arr2 = [2, 4, 6, 8]

// Output:
// Both arr1 and arr2 should be sorted after the merge. Since you cannot use extra space, the final result will be reflected in arr1 and arr2.
// Example:
// arr1 = [1, 2, 3, 4]
// arr2 = [5, 6, 7, 8]





#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
   vector<int> arr1={1,2,3,4,5};
   vector<int> arr2={6,7,8,9,10};
   for(int i=0;i<arr1.size();i++){
       if(arr1[i]>arr2[0]){
           int temp=arr1[i];
           arr1[i]=arr2[0];
           arr2[0]=temp;
           sort(arr2.begin(),arr2.end());
       }
   }
   cout<<"arr1:";
   for(auto i:arr1){
       cout<<i<<" ";
   }
   cout<<endl;
    cout<<"arr2:";
   for(auto i:arr2){
       cout<<i<<" ";
   }
    return 0;
}