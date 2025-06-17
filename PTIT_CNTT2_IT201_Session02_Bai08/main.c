#include <stdio.h>
#include <stdlib.h>
void main() {
    int n, check=0;
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
    for (int i=0; i<n-1; i++) {
        int count=0;
        for (int j=i+1; j<n;j++) {
            if (arr[i]<arr[j]) {
                break;
            }else {
                count++;
            }
        }
        if (count==n-i-1) {
            printf("%d\n", arr[i]);
            check++;
        }

    }
    if (check==0) {
        printf("khong co");
    }
    free(arr);
}