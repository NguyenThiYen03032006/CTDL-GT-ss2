#include<stdio.h>
#include <stdlib.h>
void main() {
    int n,flag=0;
    printf("Nhap vao so nguyen bat ky: ");
    scanf("%d", &n);
    int *arr1 = (int *)calloc(n, sizeof(int));
    if (arr1 == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return ;
    }
    int *arr2 = (int *)calloc(n, sizeof(int));
    if (arr2 == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return ;
    }
    for (int i=0; i<n; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i=0; i<n; i++) {
        int check=0;
        for (int j=0; j<flag; j++) {
            if (arr1[i]==arr2[j]) {
                check=1;
                break;
            }
        }
        if (check==0) {
            arr2[flag]=arr1[i];
            flag++;
        }
    }
    for (int i=0; i<flag; i++) {
        int count=0;
        for (int j=0; j<n; j++) {
            if (arr2[i]==arr1[j]) {
                count++;
            }
        }
        printf("Phan tu %d xuat hien %d lan \n", arr2[i],count);
    }
    free(arr1);
    free(arr2);
}