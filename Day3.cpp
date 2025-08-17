// You are given an array arr containing n+1 integers, where each integer is in the range [1, n] inclusive. There is exactly one duplicate number in the array, but it may appear more than once. Your task is to find the duplicate number without modifying the array and using constant extra space.

// Input:
// An integer array arr of size n+1, where each element is an integer in the range [1, n].
// Example : arr = [3, 1, 3, 4, 2]

// Output:
// Return the duplicate integer present in the array.
// Example: Duplicate number: 3

#include <iostream>
#include <vector>
using namespace std;
int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];
    do {
        slow = nums[slow];           
        fast = nums[nums[fast]];    
    } while (slow != fast);
    
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    
    return slow;
}
int main() {
    vector<int> arr = {3, 1, 3, 4, 2};
    cout <<findDuplicate(arr) << endl;
    return 0;
}


