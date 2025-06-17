#include <stdio.h>
void main() {
    int n, arr[100];
    printf("Nhap n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<n/2; i++) {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for (int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
}
