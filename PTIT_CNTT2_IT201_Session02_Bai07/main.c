#include <stdio.h>
#include <stdlib.h>
void main() {
    int n, item, check=0;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return ;
    }
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Nhap vao so nguyen bat ky: ");
    scanf("%d", &item);
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i]+arr[j]==item) {
                printf("%d, %d \n",arr[i], arr[j]);
                check++;
            }
        }
    }
    if (check==0) {
        printf("Khong tim thay");
    }
    free(arr);
}