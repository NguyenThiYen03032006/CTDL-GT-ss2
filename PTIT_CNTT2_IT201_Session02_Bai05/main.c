#include <stdio.h>
void main() {
    int n, arr[100],index;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Nhap vao vi tri muon xoa: ");
    scanf("%d",&index);
    if (index>=n) {
        printf("vi tri khong hop le");
        return;
    }
    for (int i=index; i<n-1; i++){
        arr[i]=arr[i+1];
    }
    n--;
    for (int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
}