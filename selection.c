#include<stdio.h>

void selectionsort(int a[100],int n){
    for (int i =0; i<n-1 ; i++){
        int min_idx = i;
        
        for(int j=i+1; j<n;j++){
            if (a[j] < a[min_idx]){
                min_idx = j;
            }
        }
        int temp = a[i];
        a[i] = a[min_idx];
        a[min_idx] = temp;

    }
}
int main(){
    int a[100],n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the %d elements of the array: ",n);
    for (int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
     printf("\nOriginal array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    selectionsort(a,n);
    printf("\nSorted array: ");
    for (int i = 0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}