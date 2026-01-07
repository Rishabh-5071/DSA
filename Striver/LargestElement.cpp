#include <bits/stdc++.h>
using namespace std;



//by using stl: *max_element
int main() {
    int arr[] = {2, 90, 6, 8};
    int n = 4;
    int largest = *max_element(arr, arr+n);
    cout << "Largest element in the array: " << largest << endl;

    return 0;
}

// not using stl:
int largest_element(int arr[], int n) {
    int largest_num = arr[0];
    for(int i = 0; i < n; i++) {
        if (arr[i] > largest_num){
            largest_num = arr[i];
        }
    }
    return largest_num;
}

//if we are using the vector<int> arr= {3,4,5,6} then *max_element(arr.begin(), arr.end());