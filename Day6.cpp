#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter total number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int prefixSum = 0;
    unordered_map<int, vector<int>> sum_map;
    vector<pair<int, int>> result;

    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];
        if (prefixSum == 0) {
            result.push_back({0, i});
        }
        if (sum_map.find(prefixSum) != sum_map.end()) {
            for (int j : sum_map[prefixSum]) {
                result.push_back({j + 1, i});
            }
        }
        sum_map[prefixSum].push_back(i);
    }

    cout << "All Subarrays with zero sum:\n";
    for (auto &p : result) {
        cout << "(" << p.first << ", " << p.second << ")\n";
    }

    return 0;
}
