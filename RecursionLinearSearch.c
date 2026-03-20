#include <stdio.h>
int linearSearch(int arr[], int size, int key, int index) 
{
    if (index >= size)
        return -1;
    
    if (arr[index]==key)
        return index;

    return linearSearch(arr, size, key, index + 1);
}

int main() {
    int arr[] = {15, 20, 24, 50, 87, 33};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the element to search: ");
    scanf("%d", &key);
    int result = linearSearch(arr, size, key, 0);

    if (result==-1)
        printf("Element %d not found in the array.\n", key);
    else
        printf("Element %d found at location %d.\n", key, result);
    return 0;
}
