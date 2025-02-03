/*
Write a C++ function that dynamically allocates an array of size `n` (read from the user), 
fills it with user input, prints the array, and then deallocates the memory using delete[].
*/

#include <iostream>
using namespace std;

void dynamic_arr(int n){
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    dynamic_arr(n);
    return 0;
}


