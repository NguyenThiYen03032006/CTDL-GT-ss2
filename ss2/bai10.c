#include<stdio.h>
void main() {
    int n,flag=0, arr1[100],arr2[100];
    printf("Nhap vao so nguyen bat ky: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &arr1[i]);
    }
    arr2[0]=arr1[0];
    for (int i=0; i<n; i++) {
        int check=0;
        for (int j=0; j<=flag; j++) {
            if (arr1[i]==arr2[j]) {
                check=1;
                break;
            }
        }
        if (check==0) {
            flag++;
            arr2[flag]=arr1[i];
        }
    }
    for (int i=0; i<=flag; i++) {
        int count=0;
        for (int j=0; j<n; j++) {
            if (arr2[i]==arr1[j]) {
                count++;
            }
        }
        printf("Phan tu %d xuat hien %d lan \n", arr2[i],count);
    }
}