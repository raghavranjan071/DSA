// ✅ Sample Interview-Style Question
// 🔹 Question Title:
// Reverse the Elements of an Array

// 🔹 Problem Statement:
// You are given an array arr of size N. Your task is to print the array elements in reverse order.

// 🔹 Input:
// ini
// Copy
// Edit
// N = 5  
// arr = [1, 2, 3, 4, 5]
// 🔹 Output:
// Copy
// Edit
// 5 4 3 2 1
// 🔹 Constraints:
// 1 ≤ N ≤ 10^5

// -10^9 ≤ arr[i] ≤ 10^9

//Soln 1:Using Vector
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";
    
    cout << endl;
    return 0;
}


// Sol2: Using 2 pointers It will reverse the array not just print
// int left = 0, right = n - 1;
// while (left < right) {
//     swap(arr[left], arr[right]);
//     left++;
//     right--;
// }

// // // Soln3: STL Method (reverse method)
// reverse(arr.begin(), arr.end());
// for (int x : arr)
// cout << x << " ";

