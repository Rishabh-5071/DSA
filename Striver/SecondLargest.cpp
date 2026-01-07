#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int arr[], int n)
{
    if (n < 2)
    {
        return -1;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main() {
    int arr[] = {2, 4, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int second = findSecondLargest(arr, n);

    if (second == INT_MIN || second == -1) {
        cout << "There is no largest element." << endl;
    }
    else {
        cout << "The second largest element is: " << second << endl;
    }

    return 0;
}

/*

#include <iostream>
#include <vector>
#include <limits> // Required for std::numeric_limits

int findSecondLargestSTL(const std::vector<int>& numbers) {
    // Handle edge case
    if (numbers.size() < 2) {
        return -1;
    }

    int largest = std::numeric_limits<int>::min();
    int secondLargest = std::numeric_limits<int>::min();

    // A range-based for loop is cleaner than a manual index loop
    for (int current_num : numbers) {
        if (current_num > largest) {
            secondLargest = largest;
            largest = current_num;
        } else if (current_num > secondLargest && current_num != largest) {
            secondLargest = current_num;
        }
    }

    return secondLargest;
}

int main() {
    std::vector<int> numbers = {12, 35, 1, 10, 34, 1};

    int second = findSecondLargestSTL(numbers);

    if (second == std::numeric_limits<int>::min() || second == -1) {
        std::cout << "There is no second largest element." << std::endl;
    } else {
        std::cout << "The second largest element is: " << second << std::endl;
    }

    return 0;
}

*/