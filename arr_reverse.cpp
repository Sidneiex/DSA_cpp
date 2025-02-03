// Write a function to reverse the elements of an array in-place.

#include <iostream>
using namespace std;

void reverse_arr(int arr[], int n){

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse_arr(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

