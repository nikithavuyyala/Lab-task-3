/*implement binary search*/
#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {2,4,6,8,10,12,14,16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int result = binary_search(arr, size, target);
    if (result != -1)
        printf("Element %d is present at index %d.\n", target, result);
    else
        printf("Element %d is not present in the array.\n", target);

    return 0;
}
