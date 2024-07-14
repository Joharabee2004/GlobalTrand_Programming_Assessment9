#include <bits/stdc++.h>
using namespace std;
 
// Function to return the maximum
// absolute difference between
// any two elements of the array
int maxAbsDiff(int arr[], int n)
{
      //Sorting the array
      sort(arr,arr+n);
   
      //returning the difference between last and first element
      return arr[n-1]-arr[0];
}
 
// Driver code
int main()
{
    int arr[] = { 2, 1, 5, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxAbsDiff(arr, n);
 
    return 0;
}
