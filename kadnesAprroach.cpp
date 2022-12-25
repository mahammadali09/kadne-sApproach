#include <iostream>

//Kadane's Approach to Subarray Sum

int kadnesAproach(int arr[], int n) {
    int currentSum = 0;
    int largestSum = arr[0];
    for (int i=1; i<n; i++) {
        currentSum = arr[i-1]+ arr[i];
        if(currentSum<0){
            currentSum =0;
        }
        largestSum = std::max(currentSum, largestSum);
    }
    std::cout<<largestSum;
}

int main() {
    int arr[] = {1, -9, 7, 5};
    int n = sizeof(arr)/sizeof(int);
    kadnesAproach(arr, n);
}