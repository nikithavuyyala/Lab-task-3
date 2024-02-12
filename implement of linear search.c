/*implement linear search*/
#include<stdio.h>
int linear_search(int arr[], int  n, int target) {
   int i;
    for ( i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // Return the index if target is found
        }
    }
    return -1;  // Return -1 if target is not found
}

int main() {
    int arr[] = {5, 3, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    int target = 7;
    int result = linear_search(arr, n, target);
    if (result != -1) {
        printf("Target %d found at index %d.\n", target, result);
    } else {
        printf("Target %d not found in the array.\n", target);
    }
    return 0;
}
