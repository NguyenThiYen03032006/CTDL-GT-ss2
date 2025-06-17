#include <stdio.h>
#include <stdlib.h>
void main() {
    int n,item,maxCount=0;
    printf("Nhap vao so nguyen bat ky: ");
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return ;
    }
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++) {
        int count=0;
        for (int j=0; j<n; j++) {
            if (arr[i]==arr[j]) {
                count++;
            }
        }
        if (count>maxCount) {
            maxCount=count;
            item=arr[i];
        }
    }
    printf("%d", item);
    free(arr);
}