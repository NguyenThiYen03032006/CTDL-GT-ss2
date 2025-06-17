#include <stdio.h>
void main() {
    int n, arr[100],index,value;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Nhap vao vi tri muon sua: ");
    scanf("%d",&index);
    printf("Nhap vao gia tri muon sua: ");
    scanf("%d",&value);
    arr[index]=value;
    for (int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
}
