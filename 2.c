#include <stdio.h>

void bubble_sort(int a[], int n);

int main() {
    int i, a[5];
    int n = 5; // fix: define size properly

    printf("Enter 5 array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    bubble_sort(a, n);

    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

void bubble_sort(int a[], int n) {
    int i, j, temp;
    for(i = n - 1; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            if(a[j - 1] > a[j]) {
                // Correct swap
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}
