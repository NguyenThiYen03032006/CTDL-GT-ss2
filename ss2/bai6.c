#include <stdio.h>
void main() {
    int n, arr[100],index, value;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Nhap vao vi tri muon them: ");
    scanf("%d",&index);
    printf("Nhap vao gia tri muon them: ");
    scanf("%d",&value);
    for (int i=n; i>index; i--){
        arr[i]=arr[i-1];
    }
    arr[index]=value;
    for (int i=0; i<=n; i++) {
        printf("%d ",arr[i]);
    }
}