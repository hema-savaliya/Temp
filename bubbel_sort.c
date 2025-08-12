#include<stdio.h>
void bubbel_sort(int a[], int n);
int main() {
    int i, a[5], n=5 ;
    printf("Enter 5 array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    bubbel_sort(a, n);
    return 0;
}
void bubbel_sort(int a[], int n) {
    int i, j,temp,pass;
    for(i = n-1; i >=1; i--) {
        for(j = 1; j <=i; j++) {
            if(a[j-1] > a[j]) {
        // Swap
        temp = a[i];
        a[i] = a[j-1];
        a[j-1] = temp;
            }
        }
    // Print current pass
        printf("Pass %d: ", pass);
        for(int k = 0; k < n; k++) {
            printf("%d ", a[k]);
        }
        printf("\n");
        pass++;
    
}
        printf("Sorted array: ");
            for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

}

