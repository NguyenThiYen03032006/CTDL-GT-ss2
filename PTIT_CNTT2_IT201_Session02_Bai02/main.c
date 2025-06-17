#include <stdio.h>
void main() {
    int n,item,arr[100], count=0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Nhap phan tu bat ky: ");
    scanf("%d",&item);
    for (int i=0; i<n; i++) {
        if (arr[i]==item) {
            count++;
        }
    }
    printf("%d",count);
}