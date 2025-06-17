#include <stdio.h>
void main() {
    int n, arr[100], check=0;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n-1; i++) {
        if (arr[i]>arr[i+1]) {
            printf("%d ", arr[i]);
            check++;
        }
    }
    if (check==0) {
        printf("khong co");
    }
}