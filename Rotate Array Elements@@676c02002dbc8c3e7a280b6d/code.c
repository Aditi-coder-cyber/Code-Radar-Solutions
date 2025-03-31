#include <stdio.h>

// Function to reverse a part of the array 
void reverse(int arr[], int start, int end) {
     while (start < end) { 
        int temp = arr[start]; 
        arr[start] = arr[end];
         arr[end] = temp; 
         start++; 
         end--; } }

// Function to rotate the array to the right by k positions 
void rotateArray(int arr[], int n, int k) {
     k = k % n; // Handle cases where k >= n

// Reverse the whole array
reverse(arr, 0, n - 1);
// Reverse the first k elements
reverse(arr, 0, k - 1);
// Reverse the remaining elements
reverse(arr, k, n - 1);

}

int main() { 
    int n, k;

// Read size of array
scanf("%d", &n);
int arr[n];

// Read array elements
for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}

// Read the number of rotations
scanf("%d", &k);

// Rotate the array
rotateArray(arr, n, k);

// Print the rotated array
for (int i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
}

return 0;

}