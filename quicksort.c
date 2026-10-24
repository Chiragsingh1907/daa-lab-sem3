#include<stdio.h>


int partition(int a[], int p, int q){
    int x = a[p];
    int i = p;
    for(int j = p + 1; j <= q; j++){
        if (a[j] <= x ){
            i = i+1;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[p], &a[i]);
    return i;
}
void qs(int a[], int p, int q){
    if (p < q){
        int m = partition(a, p, q);
        qs(a, p, m-1);
        qs(a, m+1, q);

    }
}
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a[100], n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array in unsorted way: ");
    for(int i = 0; i < n; i++){
        scanf("%D", &a[i]);
    }
    qs(a, 0, n-1);
    for(int i = 0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}