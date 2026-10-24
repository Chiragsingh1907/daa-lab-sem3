#include<stdio.h>

void  insertionsort(int a[100],int n){
    for (int i = 1;i < n; i++){
        int key = a[i];
        int j = i - 1;
    
    while ( j >= 0 && a[j] > key){
        a[j+1] = a[j];
        j = j-1;
        j--;

    }
    a[j+1] = key;
    }
}

int main(){
    int a[100],n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the %d elements of the array: ",n);
    for (int i =0; i < n ;i++){
        scanf("%d", &a[i]);
    }
    printf("\nThe original array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", &a[i]);
    }
    insertionsort(a,n);
    printf("\nThe Sorted array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", &a[i]);
    }
    return 0;
}