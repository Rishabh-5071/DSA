//Optimal Approach
#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
    int temp = arr[0];
    for(int i = 0; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    int n = 5;
    int arr[] = {1,2,3,4,5};
    solve(arr, n);
}


//shift right by k elements:
#include <iostream>
using namespace std;
void Rotatetoright(int arr[], int n, int k)
{
  if (n == 0)
    return;
  k = k % n;
  if (k > n)
    return;
  int temp[k];
  for (int i = n - k; i < n; i++)
  {
    temp[i - n + k] = arr[i];
  }
  for (int i = n - k - 1; i >= 0; i--)
  {
    arr[i + k] = arr[i];
  }
  for (int i = 0; i < k; i++)
  {
    arr[i] = temp[i];
  }
}
int main()
{
  int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 2;
  Rotatetoright(arr, n, k);
  cout << "After Rotating the elements to right " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}


//Brute Force:
// #include <bits/stdc++.h>
// using namespace std;

// void shiftArray(int arr[], int n) {
//     int temp[n];
//     for(int i = 1; i < n; i++) {
//         temp[i - 1] = arr[i];
//     }
//     temp[n - 1] = arr[0];

//     //To print
//     for(int i = 0; i < n; i++) {
//         cout << temp[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {10,20,30,40,50};
//     int n = 5;
//     shiftArray(arr, n);
// }