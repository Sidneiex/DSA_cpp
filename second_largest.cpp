// Given an array of positive integers arr[], return the second largest element from the array. 
// If the second largest element doesn't exist then return -1.

// Note: The second largest element should not be equal to the largest element.

// Examples:

// Input: arr[] = [12, 35, 1, 10, 34, 1]
// Output: 34
// Explanation: The largest element of the array is 35 and the second largest element is 34.
// Input: arr[] = [10, 5, 10]
// Output: 5
// Explanation: The largest element of the array is 10 and the second largest element is 5.
// Input: arr[] = [10, 10, 10]
// Output: -1
// Explanation: The largest element of the array is 10 and the second largest element does not exist.
// Constraints:
// 2 ≤ arr.size() ≤ 105
// 1 ≤ arr[i] ≤ 105

#include <iostream>
using namespace std;

int second_largest(int arr[], int n) {
    int largest = -1, second_largest = -1;
    for(int i = 0; i < n; i++){
        if(arr[i]>largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i];       
        }
    }
    return second_largest;
}


int main() {
    int arr[] = {10, 20, 45, 7, 8, 100, 23, 46, 77, 37, 87, 99, 65, 266, 756, 23, 45, 67, 89, 90, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << second_largest(arr, n);
    return 0;
}