// To check if an array is in ascending order

#include <stdio.h>

int isSorted(int arr[], int n) {
    if (n==0 || n==1)
        return 1;

    if (arr[n-2] > arr[n-1])
        return 0;
    return isSorted(arr, n-1);
}

int main() 
{
    int arr[] = {1, 12, 43, 54, 85};
    int n = sizeof(arr)/sizeof(arr[0]);

    if (isSorted(arr, n))
        printf("The array is sorted in ascending order.\n");
    else
        printf("The array is not sorted.\n");
    return 0;
}
