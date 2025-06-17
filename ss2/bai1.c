#include <stdio.h>

int main(void) {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[100];
    int max=arr[0];
    printf("Nhap vao cac phan tu cua mang: \n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("phan tu max la: %d",max);
    return 0;
}