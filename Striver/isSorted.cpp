#include <iostream>
using namespace std;

bool isArraySorted(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i+1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int sorted_arr[] = {10,20,30,45,50}; 
    int unsorted_arr[] = {10,20,5,30,40}; 
    int n = 5;
    if(isArraySorted(sorted_arr, n)) {
        cout << "The first array is sorted." << endl;
    } else {
        cout << "The first array is NOT sorted." << endl;
    }

    if(isArraySorted(unsorted_arr, n)) {
        cout << "The first array is sorted." << endl;
    } else {
        cout << "The first array is NOT sorted." << endl;
    }

    return 0;
}


/*

stl:


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> sorted_vec = {10, 20, 30, 45, 50};
    vector<int> unsorted_vec = {10, 20, 5, 30, 40};

    if (is_sorted(sorted_vec.begin(), sorted_vec.end())) {
        cout << "The first vector is sorted." << endl;
    } else {
        cout << "The first vector is NOT sorted." << endl;
    }
}
*/